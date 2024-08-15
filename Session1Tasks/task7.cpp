#include <iostream>
#include <bitset>
int main(){
   int decimal_number;
  
   std::cout<<"Enter decimal number"<<std::endl;
   std::cin>>decimal_number;
   
   std::bitset<8> binary_equivalent(decimal_number);
   std::cout << "The binary number equivalent is: " << binary_equivalent <<std::endl;
   return 0;
}

