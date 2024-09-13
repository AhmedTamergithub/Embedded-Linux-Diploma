#include <iostream>
class Shape{
    //Interface Class drawable with 1 pure virtual function
    public:
virtual void draw()=0;
};
class Circle:public Shape{
    void draw() override {
std::cout<<"Draw Circle"<<std::endl;}
};
class Rectangle:public Shape{
    void draw() override{
std::cout<<"Draw Rectangle"<<std::endl;}
};
class Triangle:public Shape{
     void  draw() override{
std::cout<<"Draw Triangle"<<std::endl;}
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;
Shape* shape_ptr;
   shape_ptr =&circle;
   shape_ptr->draw();
    
    shape_ptr=nullptr;
    for(int i=0;i<2;i++){
   
    if(i==0){
      shape_ptr=&rectangle;
        shape_ptr->draw();
          shape_ptr=nullptr;
    }
    else if(i==1){
         shape_ptr=&triangle;
          shape_ptr->draw();
            shape_ptr=nullptr;
    }
    }
     return 0;
}
