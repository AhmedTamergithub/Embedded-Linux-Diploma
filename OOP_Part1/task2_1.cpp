//This code i will handle an interrupt signal in C++ code using keyword exit that plays the same role of Ctrl C in cmd

#include <csignal>
#include <iostream>
void signalHandler(int signum);
void signalHandler(int signum) {
    std::cout << "  Goodbye!" << std::endl;
    exit(signum);  
}
int main(){

   signal(SIGINT, signalHandler);
while(1){



};



    return 0;
}
