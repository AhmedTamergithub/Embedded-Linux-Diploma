/*This Code merges two arrays together*/


#include<iostream>


int main(){
int tracker=0;
int size1;
int size2;
int size3;
int arr1[]={1,2,3,4,5};
int arr2[]={6,7,8,9,10,12,13,15};

size1=sizeof(arr1)/sizeof(arr1[0]);
size2=sizeof(arr2)/sizeof(arr2[0]);
size3=size1+size2;
int merged_arr[size3];
for ( int i=0;i<size1;i++){
     merged_arr[i]=arr1[i];
}
for (int i=size1-1;i<size3;i++){
    merged_arr[size1+tracker]=arr2[tracker];
    tracker++;
}
for( int i=0;i<size3;i++){
    std::cout<<"element "<<i<<"="<<merged_arr[i]<<std::endl;
}
    return 0;
}