//IMPLEMENT STRING CLASS WITH RULE 5
#include<iostream>
#include <cstring>
class String
{
public:
    char*str;
    int size;

String():str(nullptr),size(0){

}
String(char* str){
    this->str=new char(size);
    strcpy(this->str,str);
}
//Copy Constructor
String(const String& copy)
{   std::cout<<"Copy Constructor"<<std::endl;
    this->size=copy.size;  
    this->str=new char(size);
    strcpy(this->str,copy.str);
}
//Copy Assignment (we copy right value)
String&  operator=(const String& temp)
{  
    std::cout<<"Copy Assignment"<<std::endl;
    if(this != &temp){
        this->size=temp.size;
        if(this->str)
        {
            delete[] this->str;
        }
        this->str=new char(size);
        strcpy(this->str,temp.str);
    }
    return *this;
}
//Move Constructor
String (String&& expired)
{

    std::cout<<"Move Constructor"<<std::endl;

    this->size=expired.size;
    expired.size=0;
    this->str=expired.str;
    expired.str=nullptr;
}
//Move Assignment operator
String& operator=(String&& expired)
{  
    std::cout<<"Move Assignment Operator"<<std::endl;
    if(this != &expired)
    {
        this->size=expired.size;
        expired.size=0;
        if(this->str){
            delete[] this->str;
        }
        this->str=expired.str;
        expired.str=nullptr;

    }
    return *this;
}
//+ Operator that adds 2 strings
String operator+(const String &temp ){
    String add;
   // std::cout<<"2 classes addition"<<std::endl;
   add.size = this->size + temp.size ; // Adjust size
    add.str = new char[add.size];
 
   strcat(this->str,temp.str);
   strcpy(add.str,this->str);
   return add;
   
}

~String ()
{    std::cout<<"Destructor"<<std::endl;
    delete[] str;
}

};



int main()
{
    //Testing Copy Constructor and Copy Assignment
   char array[]="ahmed";
   String t1(array);
   String t2(t1);
  String t3;
  t3=t2;   
  
char array2[]="Embedded";
String t4(array2);
String t5(std::move(t4));
String t6;
t6=std::move(t5);
char array3[]="Ahmed";
char array4[]="Tamer";
String t7(array3);
String t8(array4);
String t9;
t9=t7+t8;
std::cout<<t9.str<<std::endl;
}
