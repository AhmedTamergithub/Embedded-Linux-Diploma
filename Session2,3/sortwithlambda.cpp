/*
This Lambda Expression sorts an array ascendingly or descendingly .
*/
#include<iostream>
#include <algorithm> 
#include<cmath>
#include <iterator> 
int main(){
    std::string sorting_way;
    int n;
    int i;
    int arr[]={1,99,3,2,76,5,34};
    n= sizeof(arr)/sizeof(arr[0]);
    std::cout<<"Enter sorting way either ascend or descend :"<<std::endl;
    std::cin>>sorting_way;//You have two options ascendingly or descendingly
  if(sorting_way =="ascend"){
[](int Copy_arr[],int Copy_n){
  std::sort(Copy_arr, Copy_arr+Copy_n);}(arr,n);
  }

else if(sorting_way =="descend"){

  std::sort(arr, arr+n,[](int a,int b){return a>b;});

}


  for(i=0;i<n;i++)
{
std::cout<<"Element "<<i<<" is:"<<arr[i]<<std::endl;
}

    return 0;

} 