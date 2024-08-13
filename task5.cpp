#include<iostream>
int main(){
    int number;
    std::cout << "Enter number:" << std::endl;
     std::cin>>number;
      std::cout << "The Multiplication table of "<< number << " is:" << std::endl;
     for(int i=0;i<10;i++){

        std::cout<<number<<"*"<<i<<"="<<(number*i)<<std::endl;

     } 
    return 0;

}