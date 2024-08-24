//Trying and , or
#include<iostream>
#include<numeric>


int main (){
int number;
std::cout<<"Enter number"<<std::endl;
std::cin>>number;
if(number>0 and number<9){
    std::cout<<"you enterred one positive digit"<<std::endl;
}

if (number==0 or number<0){
    std::cout<<"you enterred a negative number"<<std::endl;

}

}