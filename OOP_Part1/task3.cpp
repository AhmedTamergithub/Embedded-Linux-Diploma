#include<iostream>
#include<stdio.h>
class Backtrace{
public:
int enter_iterator=0;
int exit_iterator=3;
int fun1_iterator=0;
int fun2_iterator=0;
int fun3_iterator=0;

void enterfunc(){

    switch(enter_iterator){
case 0:
{
    std::cout<<"Enter to [main]"<<std::endl;
    enter_iterator++;
    
}
case 1:
{
    std::cout<<"Enter to [fun1]"<<std::endl;
    enter_iterator++;
    
}
case 2:
{
    std::cout<<"Enter to [fun2]"<<std::endl;
    enter_iterator++;
   
}
case 3:
{
    std::cout<<"Enter to  [fun3]"<<std::endl;
    enter_iterator++;
    
}

default:{

}

    }
}
void exitfunc(){

switch(exit_iterator){
    case 3:
{
    std::cout<<"Exit from [fun3]"<<std::endl;
    exit_iterator--;
   
}
case 2:
{
    std::cout<<"Exit from [fun2]"<<std::endl;
    exit_iterator--;
  
}

case 1:
{
    std::cout<<"Exit from [fun1]"<<std::endl;
   exit_iterator--;
    
}

case 0:
{
    std::cout<<"Exit from [main]"<<std::endl;
    exit_iterator--;
    
}


default:{
}
}
}
void fun1(int x){
    fun1_iterator++;
fun2(2);

}

void fun2(int x){
    fun2_iterator++;
fun3(3);

}
void fun3(int x){
    fun3_iterator++;
BT();

}

void BT(){
    std::cout<<"BackTrace as follows :"<<std::endl;
    std::cout<<"0- main "<<std::endl;
if(fun1_iterator==1){
    std::cout<<"1- fun1"<<std::endl;
}
if(fun2_iterator==1){
     std::cout<<"2- fun2"<<std::endl;
}
if(fun3_iterator==1){
     std::cout<<"3- fun3"<<std::endl;
}


}


};


//Global Variables


int main(){

Backtrace back;
back.enterfunc();
back.fun1(1);
back.exitfunc();

return 0;
}
