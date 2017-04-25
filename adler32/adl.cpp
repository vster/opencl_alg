#include <opencl/adler32.h>

using namespace std;

void main(void)
{
	OpenCL::Adler32 a1;
	OpenCL::byte data[10];
	OpenCL::byte datas[10];
	OpenCL::byte datad[10]; 
	int i;

	for(i = 0; i < 10; i++)   
		data[i] = i;

	
	a1. encrypt(data, datas);
	


}
