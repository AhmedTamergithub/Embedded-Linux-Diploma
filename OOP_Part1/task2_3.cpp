//Fill an array sequentially without using for loops
#include<iostream>
#include<numeric>

int main() {
int n;
n=10000-10+1;
int arr[n];

//this built in function creates an array of range of sequentially increasing values.
std::iota(arr, arr + n, 10);

    //Print the values
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " " << std::endl;
    }
   
    return 0;
}