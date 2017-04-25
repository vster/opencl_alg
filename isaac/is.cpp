#include <iostream>
#include <opencl/isaac.h>

using namespace std;

void main(void)
{
	OpenCL::ISAAC is1;
	OpenCL::byte key[16];
	OpenCL::byte data[8];
	OpenCL::byte datac[8];
	OpenCL::byte datad[8]; 
	int i;

	for (i = 0; i < 16; i++)
		key[i] = i;

	printf("Key\n");
	for (i = 0; i < 16; i++)
		printf("%02x ", key[i]);
	printf("\n");

	for (i = 0; i < 8; i++)
		data[i] = i + 0x30;

	printf("Initial data\n");
	for (i = 0; i < 8; i++)
		printf("%02x ", data[i]);
	printf("\n");

	is1.set_key(key,16);

	is1.encrypt(data, datac, 8);

	printf("Encrypted data\n");
	for (i = 0; i < 8; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	is1.decrypt(datac, datad, 8);

	printf("Decrypted data\n");
	for (i = 0; i < 8; i++)
		printf("%02x ", datad[i]);
	printf("\n");

}