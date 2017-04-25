#include <iostream>
#include <opencl/encoder.h>

#define IS 3
#define OS 4

using namespace std;


void main(void)
{
		
	OpenCL::Base64 enc;
	OpenCL::byte data[IS];
	OpenCL::byte datac[OS];
	OpenCL::byte datad[IS]; 
	int i;

	for (i = 0; i < IS; i++)
		data[i] = i + 0x30;

	printf("Initial data\n");
	for (i = 0; i < IS; i++)
		printf("%02x ", data[i]);
	printf("\n");

	enc.encode(data, datac);

	printf("Encoded data\n");
	for (i = 0; i < OS; i++)
		printf("%02x ", datac[i]);
	printf("\n");

	enc.decode(datac, datad);

	printf("Decoded data\n");
	for (i = 0; i < IS; i++)
		printf("%02x ", datad[i]);
	printf("\n");

}