#include <iostream>
#include <iomanip>
#include <opencl/threeway.h>

#define KL 12
#define BS 12

using namespace std;
using namespace OpenCL;

void output_hex(byte data[],int len)
{
    for (int i = 0; i < len; i++)
        cout << hex << setfill('0') << setw(2)
             << (int)data[i] << " ";
    cout << endl;
}

int main(void)
{
    OpenCL::ThreeWay tw1;
    byte key[KL];
    byte data[BS];
    byte datac[BS];
    byte datad[BS];
    int i;

    for (i = 0; i < KL; i++)
        key[i] = i;

    cout << "Key" << endl;
    output_hex(key, KL);

    for (i = 0; i < BS; i++)
        data[i] = i + 0x30;

    cout << "Initial data" << endl;
    output_hex(data, BS);

    tw1.set_key(key, KL);

    tw1.encrypt(data, datac);

    cout << "Encrypted data" << endl;
    output_hex(datac, BS);

    tw1.decrypt(datac, datad);

    cout  << "Decrypted data" << endl;
    output_hex(datad, BS);
}
