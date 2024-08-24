/*The issue here calling the function in L.H.S of expression

*/
#include<iostream>
int &f(){
static int x=0;
std::cout<<"inside function"<<std::endl;
std::cout<<x<<std::endl;
return x;
}

int main(){
int y1;
int y2;
f()=10;

f()=0;

return 0;

}
/*Explanation for this code:


this function takes a reference to integer , so in first calling x prints 0 inside the function,while in 2nd callling the 
return of function refers to 10 , so 10 will be printed in second calling
,, and notice that x is a static integer,that retains its value across multiple function calls
*/
