#include <iostream>
#include <stdio.h>
#include <opencl/des.h>
#include <opencl/desx.h>

#define KL 24
#define BS 8

using namespace std;

int main(void)
{
    OpenCL::DESX d1;
	OpenCL::byte key[KL] =  {0xaa,0xbb,0x09,0x18,0x27,0x36,0xcc,0xdd};
	OpenCL::byte data[BS] = {0x12,0x34,0x56,0xab,0xcd,0x13,0x25,0x36};
	OpenCL::byte datac[BS];
	OpenCL::byte datad[BS]; 
	int i;

	// for (i = 0; i < KL; i++)
	//	key[i] = 0;

	printf("Key\n");
	for (i = 0; i < KL; i++)
		printf("%02x ", key[i]);
	printf("\n");

	/*
	for (i = 0; i < BS; i++)
		data[i] = i + 0x30;
	*/

	printf("Initial data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", data[i]);
	printf("\n");

	d1.set_key(key,KL);

	d1.encrypt(data, datac);

	printf("Encrypted data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	d1.decrypt(datac, datad);

	printf("Decrypted data\n");
	for (i = 0; i < BS; i++)
		printf("%02x ", datad[i]);
	printf("\n");

}
