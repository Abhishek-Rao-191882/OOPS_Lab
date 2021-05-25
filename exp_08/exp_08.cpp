

#include<iostream>
using namespace std;

class SHAPE{
    protected:
        int sides;

    public:
        void setSide(int sides){  //getter
            this->sides=sides;
        }
        int getSide(){      //setter
            return sides;
        }
        SHAPE(){             //default constructor
            this->sides=0;
            }

        virtual void numberOfSides() = 0;  // virtual function
};

class Triangle: public SHAPE{
    public:
    Triangle(int sides){
        this->sides=sides;
    }
    void numberOfSides(){
        cout<<" Triangle has: "<<this->sides<<" sides."<<endl;
    }
};

class Trapezoid: public SHAPE{
    public:
    Trapezoid(int sides){
        this->sides=sides;
    }
    void numberOfSides(){
        cout<<" Trapezoid has: "<<this->sides<<" sides."<<endl;
    }
};

class Hexagon: public SHAPE{
    public:
    Hexagon(int sides){
        this->sides=sides;
    }
    void numberOfSides(){
        cout<<" Hexagon has: "<<this->sides<<" sides."<<endl;
    }
};

int main(){

    Triangle tri(3);
    Trapezoid tra(4);
    Hexagon hex(6);

    tri.numberOfSides();
    tra.numberOfSides();
    hex.numberOfSides();
    return 0;
}
