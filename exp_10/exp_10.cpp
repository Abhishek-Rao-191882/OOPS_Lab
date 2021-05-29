#include <iostream>

using namespace std;

class Area{
    protected:
        int l, b;

	public:
	    Area(){}; //default constructor

	    void setLengthAndBreadth(int l, int b){
	        this->l=l;
	        this->b=b;
        }

		int getArea(int l, int b)
		{
			return l * b;
		}

};

class Perimeter{
    protected:
        int l, b;

	public:
	    Perimeter(){}; //default constructor

	    void setLengthAndBreadth(int l, int b){
	        this->l=l;
	        this->b=b;
        }

		int getPerimeter(int l, int b)
		{
			return 2*(l + b);
		}
};

class Rectangle : public Area, public Perimeter{
    protected:
        int length;
        int breadth;

	public:
	    void getLengthAndBreadth(){
		    cout<<"Enter Length of the Rectangle: ";
		    cin>>this->length;
		    cout<<"Enter breadth of the Rectangle: ";
		    cin>>this->breadth;
        }

		int area()
		{
			return Area::getArea(length, breadth);
		}

		int perimeter()
		{
			return Perimeter::getPerimeter(length, breadth);
		}

		void display(){
		    cout<<"\n Area of Rectangle: "<<area()<<endl;
		    cout<<"\n Perimeter  of Rectangle: "<<perimeter()<<endl;
		}
};

int main()
{
	Rectangle rt;

	rt.getLengthAndBreadth();

	rt.display();

	return 0;
}
