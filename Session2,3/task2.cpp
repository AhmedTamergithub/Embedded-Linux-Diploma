#include<iostream>
/*
This code  contains a function that searchs for a number in the array which its index is taken
from user
*/

int search_num(int Copy_arr[],int index,int Copy_size);

int main() {
int index;
int index_value;// value found in index that user enterred
int size;
int arr[]={1,3,6,9,14,15,67};
size= sizeof(arr)/sizeof(arr[0]);
std::cout<<"Number of elements in array is:"<<size<<std::endl;
std::cout<<"Enter index in array you want to search for"<<std::endl;
std::cin>>index;
if (index<0 || index>size){
    
  do {
std::cout<<"Please enter a valid index"<<std::endl;
std::cin>>index;
   }while(index<0 || index>size);

}
index_value=search_num(arr,index,size);
std::cout<<"The value in index you enterred is: "<<index_value<<std::endl;
    return 0;
}


int search_num(int Copy_arr[],int Copy_index,int Copy_size){
for(int i=0;i<Copy_size;i++){
    if(i==Copy_index){
    return Copy_arr[i];
    }
}
}