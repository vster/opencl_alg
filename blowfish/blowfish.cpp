/*************************************************
* Blowfish Source File                           *
* (C) 1999-2001 The OpenCL Project               *
*************************************************/

#include <opencl/blowfish.h>

namespace OpenCL {

/*************************************************
* Blowfish Encryption                            *
*************************************************/
void Blowfish::encrypt(const byte in[BLOCKSIZE], byte out[BLOCKSIZE]) const
     {
   u32bit L  = make_u32bit(in[0], in[1], in[2], in[3]),
          R  = make_u32bit(in[4], in[5], in[6], in[7]);

   for(int i=0; i<16; i++)
       {
       if (i%2 == 0)
           round(L, R, i);
       else
           round(R, L, i);
       }

   L ^= Pbox[16];
   R ^= Pbox[17];

   for (int i=0; i<4; i++)
       out[i] = get_byte(i, R);

   for (int i=0; i<4; i++)
       out[i+4] = get_byte(i, L);
   }

/*************************************************
* Blowfish Decryption                            *
*************************************************/
void Blowfish::decrypt(const byte in[BLOCKSIZE], byte out[BLOCKSIZE]) const
   {
   u32bit L  = make_u32bit(in[0], in[1], in[2], in[3]),
          R = make_u32bit(in[4], in[5], in[6], in[7]);

   for(int i=17; i>1; i--)
       {
       if (i%2 == 1)
           round(L, R, i);
       else
           round(R, L, i);
       }

   L ^= Pbox[1];
   R ^= Pbox[0];


   for (int i=0; i<4; i++)
        out[i] = get_byte(i, R);

   for (int i=0; i<4; i++)
        out[i+4] = get_byte(i, L);
   }

/*************************************************
* Blowfish Round                                 *
*************************************************/
void Blowfish::round(u32bit& L, u32bit& R, u32bit n) const
   {
   L  ^= Pbox[n];
   R ^= ((Sbox1[get_byte(0, L)]  + Sbox2[get_byte(1, L)]) ^
          Sbox3[get_byte(2, L)]) + Sbox4[get_byte(3, L)];
   }

/*************************************************
* Blowfish Key Schedule                          *
*************************************************/
void Blowfish::set_key(const byte key[], u32bit length) throw(InvalidKeyLength)
   {
   if(!valid_keylength(length))
      throw InvalidKeyLength(name(), length);
   clear();
   for(u32bit j = 0, k = 0; j != 18; j++, k += 4)
      Pbox[j] ^= make_u32bit(key[(k  ) % length], key[(k+1) % length],
                             key[(k+2) % length], key[(k+3) % length]);
   u32bit L = 0, R = 0;
   generate_sbox(Pbox,  18,  L, R);
   generate_sbox(Sbox1, 256, L, R);
   generate_sbox(Sbox2, 256, L, R);
   generate_sbox(Sbox3, 256, L, R);
   generate_sbox(Sbox4, 256, L, R);
   }

/*************************************************
* Generate one of the Sboxes                     *
*************************************************/
void Blowfish::generate_sbox(u32bit Box[], u32bit size,
                             u32bit& L, u32bit& R) const
   {
   for(u32bit j = 0; j != size; j += 2)
      {
      for(int i=0; i<16; i++)
           {
           if (i%2 == 0)
               round(L, R, i);
           else
               round(R, L, i);
           }

      u32bit T = R;
      R = L ^ Pbox[16];
      L = T ^ Pbox[17];

      Box[j] = L;
      Box[j+1] = R;
      }
   }

/*************************************************
* Clear memory of sensitive data                 *
*************************************************/
void Blowfish::clear() throw()
   {
   Pbox.copy(PBOX, 18);
   Sbox1.copy(SBOX1, 256);
   Sbox2.copy(SBOX2, 256);
   Sbox3.copy(SBOX3, 256);
   Sbox4.copy(SBOX4, 256);
   }
}

