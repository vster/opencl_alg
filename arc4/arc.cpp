#include <opencl/arc4.h>

using namespace std;

int main(void)
{
	OpenCL::ARC4 a1;
	OpenCL::byte key[8];
	OpenCL::byte data[256];
	OpenCL::byte datac[256];
	OpenCL::byte datad[256]; 
	int i;

	for (i = 0; i < 8; i++)
		key[i] = i;
	
	for (i = 0; i < 256; i++)
		data[i] = 0x30 + i % 50;

	printf("Initial data\n");
	for (i = 0; i < 256; i++)
		printf("%02x ", data[i]);
	printf("\n");

	a1.set_key(key,8);

	printf("Key\n");
	for (i = 0; i < 8; i++)
		printf("%02x ", key[i]);
	printf("\n");

	a1.encrypt(data, datac, 256);

	printf("Encrypted data\n");
	for (i = 0; i < 256; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	a1.decrypt(datac, datad, 256);

	printf("Decrypted data\n");
	for (i = 0; i < 256; i++)
		printf("%02x ", datad[i]);
	printf("\n");
}
