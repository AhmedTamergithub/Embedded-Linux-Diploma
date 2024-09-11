
#include<iostream>
#include<vector>

/*
Log Levels:
INFO: General information about system events.
WARNING: Alerts about potential issues.
ERROR: Errors that need attention or indicate a failure.
DEBUG: Detailed information for debugging purposes.
*/

class Logs{
public:

std::string level;  
int command; //a command passed if you want to show level of log only or dump or clear  
// show level---> command=0
//dump----> command=1
//clear---->command=2
std::vector<std::string> log_container{4};


void show_level(std:: string level,int command){
if(command==0)
{
    if(level=="INFO"){
        info_level();
    }
    else if(level=="WARNING"){
        warning();
    }
    else if(level=="ERROR"){
        error();
    }
    else if(level=="DEBUG"){
         debug();
    }
}
}





void info_level(void){
     log_container[0]={"INFO OF SYSTEM" };
    std::cout<<"INFO OF SYSTEM"<<std::endl;
}

void warning(void){
      log_container[1]={"Warning" };
    std::cout<<"Warning ,take care"<<std::endl;

}
void error(void){
     log_container[2]={"error" };
      std::cout<<"There is error"<<std::endl;
}
void debug(void){
     log_container[3]={"debug"};
    std::cout<<"Debug the error"<<std::endl;
}

void dump(void){
    for(int i=0;i<4;i++){
        std::cout<<log_container[i]<<std::endl;
    }

}

void clear(void){
     log_container.clear();
    // Check if the vector is empty
    if(log_container.empty()) {
        std::cout << "Log System is empty." << std::endl;
    }
}


};
int main()
{   
Logs instance;
instance.show_level("INFO",0);
instance.show_level("WARNING",0);
instance.show_level("ERROR",0);
instance.show_level("DEBUG",0);
instance.dump();
instance.clear();
  

}


