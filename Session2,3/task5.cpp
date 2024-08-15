#include<iostream>

int main(){
    int size;
    int odd_counter=0;
    int even_counter=0;
    int arr[]={1,4,8,3,99,32,87,12,9};
    size= sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++){
        if (arr[i]%2==0){
             std::cout<<arr[i]<<" is an even number"<<std::endl;
             even_counter++;
        }
        else{

            std::cout<<arr[i]<<" is an odd number"<<std::endl;
              odd_counter++;        
        }
     }

     std::cout<<"Array contain "<<even_counter<< " even numbers"<<std::endl;
      std::cout<<"Array contain "<<odd_counter<< " odd numbers"<<std::endl;
    return 0;

} 