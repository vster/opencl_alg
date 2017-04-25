#include <iostream>
#include <opencl/idea.h>

using namespace std;

void main(void)
{
	OpenCL::IDEA id1;
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

	id1.set_key(key,16);

	id1.encrypt(data, datac);

	printf("Encrypted data\n");
	for (i = 0; i < 8; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	id1.decrypt(datac, datad);

	printf("Decrypted data\n");
	for (i = 0; i < 8; i++)
		printf("%02x ", datad[i]);
	printf("\n");

}