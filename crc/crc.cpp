#include <opencl/crc24.h>

using namespace std;

void main(void)
{
	OpenCL::CRC24 c1;
	OpenCL::byte data[10];
	OpenCL::byte datas[10];
	int i;

	for(i = 0; i < 10; i++)   
		data[i] = i;

	c1.update_hash(data, 10);

	
}
