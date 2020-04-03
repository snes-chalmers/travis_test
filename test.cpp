#include<iostream>

int main(int argn, char**argc) {

 if (argc[0] == "1")
   std::cout << "Testing the 1st conditional option ..." <<std::endl;
 else
   std::cout << "Testing the 2nd conditional option ..." <<std::endl;

 return 0;
 
}
