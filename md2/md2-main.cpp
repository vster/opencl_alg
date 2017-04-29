/*
An OpenCL example application which emulates a
poorly written version of "gpg --print-md"

Written by Jack Lloyd (lloyd@acm.jhu.edu), quite a while ago (as of June 2001)

This file is in the public domain
*/
#include <fstream>
#include <iostream>
#include <string>
#include <opencl/md2.h>
#include <opencl/encoder.h>

using namespace std;
using namespace OpenCL;

int main(int argc, char* argv[])
{
   if(argc < 2)
      {
      cout << "Usage: hasher <filenames>" << endl;
      return 1;
      }

   const int COUNT = 1;
   Filter* hash[COUNT] = {
      new Chain(new HashFilter<MD2>,
                        new HexEncoder)  };
   string name[COUNT] = { "MD2" };

   Fork* fork = new Fork(hash, COUNT);
   Pipe pipe(fork);

   for(int j = 1; argv[j] != 0; j++)
      {
      ifstream file(argv[j]);
      if(!file)
         {
         cout << "ERROR: could not open " << argv[j] << endl;
         continue;
         }
      file >> pipe;
      file.close();
      pipe.close();
      for(int k = 0; k != COUNT; k++)
         {
         fork->set_port(k);
         cout << name[k] << "(" << argv[j] << ") = " << pipe << endl;
         }
      }
   return 0;
}
