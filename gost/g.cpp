#include <iostream>
#include <opencl/gost.h>

#define KL 32
#define BS 8

//const unsigned int KL 32;
//const unsigned int BS 8;

using namespace std;


int main(void)
{
		
	OpenCL::GOST g1;
	OpenCL::byte key[KL];
	OpenCL::byte data[BS];
	OpenCL::byte datac[BS];
	OpenCL::byte datad[BS]; 
	int i;

	for (i = 0; i < KL; i++)
		key[i] = i;

	printf("Key\n");
	for (i = 0; i < KL; i++)
		printf("%02x ", key[i]);
	printf("\n");

	for (i = 0; i < BS; i++)
		data[i] = i + 0x30;

	printf("Initial data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", data[i]);
	printf("\n");

	g1.set_key(key, KL);

	g1.encrypt(data, datac);

	printf("Encrypted data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	g1.decrypt(datac, datad);

	printf("Decrypted data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", datad[i]);
	printf("\n");

}
