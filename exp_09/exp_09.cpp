#include<iostream>
using namespace std;

class AreaOfRectangle{

    private:
        int length, width;

    public:
        AreaOfRectangle(){ }; // default constructor

        AreaOfRectangle(int len, int wdt){  // (A) Demonstration of parameterized constructor
            cout<<"\n  Parameterized constructor with two arguments"<<endl;
            length=len;
            width=wdt;
        }

        AreaOfRectangle(AreaOfRectangle &obj){    // (B) Demonstration of copy constructor
            cout<<"\n  Copy constructor "<<endl;
            length=obj.length;
            width=obj.width;
        }

        AreaOfRectangle(int len){   // (C) Demonstration of constructor overloading
            cout<<"\n  Constructor Overloading ( Parameterized constructor with one argument.)"<<endl;
            length = len;
            width = len;
        }

        double calculateArea(){
            return length*width;
        }

        void display(){
            cout<<"   The area of rectangle is : "<< calculateArea() <<endl;
        }
};
int main(){

    AreaOfRectangle rectangle1(8,7);
    rectangle1.display();

    AreaOfRectangle rectangle2(rectangle1);
    rectangle2.display();

    AreaOfRectangle rectangle3(9);
    rectangle3.display();

    return 0;
}
