#include<iostream>


class abo{

public:
int b;
abo(int a): b(a){
   std::cout<<"base is called"<<std::endl;
   std::cout<<a<<std::endl;

}


};

class Int: public abo{

    public:
   using abo::abo;
};



int main(){
Int obj(10);
return 0;


}