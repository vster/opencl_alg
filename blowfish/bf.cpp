#include <iostream>
#include <iomanip>
#include <opencl/blowfish.h>

#define KL 32
#define BS 8

using namespace std;

int main(void)
{	
	OpenCL::Blowfish bf1;
	OpenCL::byte key[KL];
	OpenCL::byte data[BS];
	OpenCL::byte datac[BS];
	OpenCL::byte datad[BS]; 
	int i;

	for (i = 0; i < KL; i++)
		key[i] = i;

    cout << "Key" << endl;
	for (i = 0; i < KL; i++)
        cout << hex << setfill('0') << setw(2)
             << (int)key[i] << " ";
    cout << endl;

	for (i = 0; i < BS; i++)
		data[i] = i + 0x30;

    cout << "Initial data" << endl;
	for (i = 0; i < BS; i++)
        cout << hex << setfill('0') << setw(2)
             << (int)data[i] << " ";
    cout << endl;

	bf1.set_key(key, KL);

	bf1.encrypt(data, datac);

    cout << "Encrypted data" << endl;
	for (i = 0; i < BS; i++)
        cout << hex << setfill('0') << setw(2)
             << (int)datac[i] << " ";
    cout << endl;

	bf1.decrypt(datac, datad);

    cout  << "Decrypted data" << endl;
	for (i = 0; i < BS; i++)
        cout << hex << setfill('0') << setw(2)
             << (int)datad[i] << " ";
    cout << endl;
}
