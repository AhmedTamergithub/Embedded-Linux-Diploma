//Calculate accumulate of an array using a built in func, not looping
#include<iostream>
#include<numeric>


int main (){
int size=10;
int result;
int arr[size]={2,4,6,8,9,6,44,3,2,8};
result=std::accumulate(arr,arr+size,0);
std::cout<<"Sum ="<<result<<std::endl;




}