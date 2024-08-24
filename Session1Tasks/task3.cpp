#include<iostream>
#include<cmath>
int main(){
    double a,b,c;
    std::cout<<"Enter the 3 sides of triangle:"<<std::endl;
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    if(pow(a,2)==(pow(b,2)+pow(c,2))){
        std::cout<<"It is a right-angle triangle:"<<std::endl;

    }
    else {
     std::cout<<"It is not a right-angle triangle:"<<std::endl;
    }
     return 0;

} 