#include  <string>
#include <iostream>


/*
getline function is used to read input data from strings,filestreams ,also add delimeters as an option when reading
data 
Also there is a potential issue with getline if you perform a cin before it or after ot teh input buffer is
full,so it is better to put a useless getline to avoid this problem (I will handle it in third case in this code)

*/

int main(){
    std::string name;
std::string name2;
std::string name3;
    int id1;
    std::string name4;
    int id2;
   

std::cout<<"Enter the name:"<<std::endl;
//Without delimeter
std::getline(std::cin,name);
std::cout<<"name is : "<<name<<std::endl;

//With delimeter
std::cout<<"Enter second name:"<<std::endl;
std::getline(std::cin,name2,' ');
std::cout<<"name is : "<<name2<<std::endl;




    std::cout << "Enter the id: ";

    std::cin >> id1;

 std::cout << "Enter third name: "<<std::endl;

std::getline(std::cin,name3);
std::cout<<"id ="<<id1<<std::endl;
std::cout<<"name = "<<name3<<std::endl;



//solution of previous problem of input buffer is full by putting a useless std::getline
 std::cout << "Enter the id: ";

    std::cin >> id2;

 std::cout << "Enter third name: "<<std::endl;

std::getline(std::cin,name4); //useless getline
std::getline(std::cin,name4);
std::cout<<"id ="<<id2<<std::endl;
std::cout<<"name = "<<name4<<std::endl;
    return 0;
}
