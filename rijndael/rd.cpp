#include <iostream>
#include <opencl/rijndael.h>

#define KL 32
#define BS 16

using namespace std;


int main(void)
{
		
	OpenCL::Rijndael rd;
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

	rd.set_key(key, KL);

	rd.encrypt(data, datac);

	printf("Encrypted data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	rd.decrypt(datac, datad);

	printf("Decrypted data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", datad[i]);
	printf("\n");

}
