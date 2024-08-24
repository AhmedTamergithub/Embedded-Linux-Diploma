#include <iostream>
class digitischar{
  public:
int ascii_value;
int even_counter=0;

void checkchar (char Copy_char){
ascii_value=static_cast<int>(Copy_char);
//ASCII Values of digits are from 48 to 57
if (48 <= ascii_value && ascii_value <= 57){
  std::cout<<"Char passed is a digit"<<std::endl;
  
}
else
{
   std::cout<<"Char passed isn't  a digit"<<std::endl;
} 

}

void arrayiseven(int Copy_arr[]){
  for(int i=0;i<6;i++){
    if(Copy_arr[i]%2==0){
       std::cout<<"Element no. "<<i<<" is an even number"<<std::endl;
       ++even_counter;
    }
    else if(Copy_arr[i]%2!=0){
      std::cout<<"Element no. "<<i<<" is an odd number"<<std::endl;
    }

  }

  if(even_counter==6){
    std::cout<<"All the array is even numbers"<<std::endl;
  }
}



};


int main(){
char test_char;

int arr[6];
int n;
int array_entry;
std::cout<<"Enter caharacter to be tested"<<std::endl;
std::cin>>test_char;

digitischar inst;
inst.checkchar(test_char);


std::cout<<"Enter array elements:"<<std::endl;
for(int i=0;i<6;i++){
  
std::cin>>arr[i];
if(!(0 <= arr[i] && arr[i] <= 9)){
  
std::cout<<"You enterred a wrong entry"<<std::endl;
exit (0);
}
}
inst.arrayiseven(arr);

return 0;
}