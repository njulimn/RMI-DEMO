#include "my_first_rmi.h"
#include <iostream>

// namespace my_first_rmi {
// bool load(char const* dataPath);
// void cleanup();
// const size_t RMI_SIZE = 2416;
// const uint64_t BUILD_TIME_NS = 26313591625;
// const char NAME[] = "my_first_rmi";
// uint64_t lookup(uint64_t key, size_t* err);
// }

int main()
{
   char path[] ="rmi_data"; //the path to "my_first_rmi_L1_PARAMETERS" file
   my_first_rmi::load(path);
   uint64_t key = 0x0;
   size_t err;
   std::cout<<"Lookup key: "<<key<<std::endl;
   auto res = my_first_rmi::lookup(key, &err);
   std::cout<<"Returned result: "<<res<<" Error: "<<err<<std::endl;
   return 0;
}