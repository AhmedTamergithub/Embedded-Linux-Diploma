#include <iostream>
#include<cmath>

int main(){
  int number;
  float divison_number;
  int remainder;
  
  int integer_length;
  int sum;
  std::cout << "Enter number:" << std::endl;
  std::cin>>number;
   integer_length=std::log10(number)+1;
   
     for(int i=0;i<integer_length ;i++){
        if(i==0){
      remainder=number%10;
       number=number-remainder;
       sum=remainder;
        }
        while(i!=0 && sum!=number){
            divison_number= (number/10);
            sum+= divison_number;
           }

            
        }
        
        std::cout << "length of digits of integer" <<sum<< std::endl;
    
   return 0;
     }
    
 
    
    


