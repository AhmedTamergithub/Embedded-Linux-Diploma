/*
This Lambda Expression to calculate the square of a given number.
*/


#include<iostream>
#include<cmath>
int main(){
   int number;
    std::cout<<"Enter the number:"<<std::endl;
    std::cin>>number;
   int  result=[](auto number){return ( pow( number,2));}(number);
    std::cout<<"Result ="<<result<<std::endl;
    return 0;

} 