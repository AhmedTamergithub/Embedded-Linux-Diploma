#include<iostream>
/*
This code  finds the maximum number in a pre-defined array
*/
int Max_arr(int Copy_arr[],int Copy_size);

int main(){
    int max;
    int size;
    int max_value;
    int arr[]={1,4,8,3,99,32};
    size= sizeof(arr)/sizeof(arr[0]);
    max_value=Max_arr(arr,size);
    std::cout<<"Max number in array is:"<<max_value<<std::endl;
     return 0;

} 

int Max_arr(int Copy_arr[],int Copy_size){ 
    int *ptr=Copy_arr;
   *ptr=Copy_arr[0];//Pointer will hold maximum value in array
    for(int i=0;i<Copy_size;i++){
        if((*ptr)<=Copy_arr[i]){

            *ptr=Copy_arr[i];
        }
    }
    return *ptr;
}