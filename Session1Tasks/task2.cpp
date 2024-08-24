#include <iostream>
int main() {
    int value1;
    int value2;
    int value3;
    int max;
    std::cout << "Enter value 1:" << std::endl;
    std::cin>>value1;
    std::cout << "Enter value 2:" << std::endl;
    std::cin>>value2;
    std::cout << "Enter value 3:" << std::endl;
    std::cin>>value3;
    int arr[3]={value1,value2,value3};
    max=arr[0];
  for(int i=0;i<3;i++){
 if (arr[i]>max){
    max=arr[i];
 }

  }
  std::cout << "Max number =" << max << std::endl;
    return 0;
}

