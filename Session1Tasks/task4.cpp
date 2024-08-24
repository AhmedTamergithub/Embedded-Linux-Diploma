#include<iostream>
int main(){
    char entry;
    int indicator=0;
     char vowel_array[5]={'a','e','i','o','u'};
     std::cout << "Enter small-letter character:" << std::endl;
     std::cin>>entry;
     for(int j=0;j<5;j++){
        if(entry==vowel_array[j]){
        indicator++;
        }
       
     }
     if(indicator==0) {
        std::cout << "The character you enterred isn't a vowel" << std::endl;
     }
     else {
         std::cout << "The character you enterred is a vowel" << std::endl;
     }
     return 0;

}