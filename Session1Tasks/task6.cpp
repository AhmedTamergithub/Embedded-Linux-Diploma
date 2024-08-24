#include <iostream>
#include<cmath>

int main(){
  int number=0;
  float divison_number=0;
  int unit_remainder=0;
  
  int integer_length=0;
  int sum=0;
  std::cout << "Enter number:" << std::endl;
  std::cin>>number;
   integer_length=std::log10(number)+1;
   std::cout << "Number of digits =" <<integer_length<< std::endl;
   
   
     for(int i=1;i<=integer_length ;i++){
      unit_remainder=number%10;
      number=number-unit_remainder;
      number/=10;
      sum+=unit_remainder;
 
      }
        
 std::cout << "sum of digits of integer " <<sum<< std::endl;
    
   return 0;
     }
            
        
        
       
    
 
    
    


