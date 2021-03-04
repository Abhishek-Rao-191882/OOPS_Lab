/*Exp.2:- Write a function power() which raise a number m to a power n. The function takes double value of
m and integer value of n and returns the result. Use the default value of n as 2*/
#include <iostream>
#include <cmath>
using namespace std;

class powerCalculation{

    public :
        double value;
        //using maths library
        void power(double m, int n=2){
            value   = pow(m,n);
        }
        //using loops
        /*  double value=1;
            void power(double m, int n=2){
            for(int i=1;i<=n;i++){
                value = value * m;
            }
        */
        double display(){
            return value;
        }
};

int main()
{
    double baseValue;
    int powerValue;
    cout<<" Enter the base value : ";
    cin>>baseValue;
    cout<<" Enter the power value : ";
    cin>>powerValue;
    powerCalculation calculatepowerusingInputValue;
    powerCalculation calculatepowerusingDefaultValue;
    calculatepowerusingInputValue.power(baseValue,powerValue);
    calculatepowerusingDefaultValue.power(baseValue);
    cout<<"\n power Calculated using input value: "<<calculatepowerusingInputValue.display()<<"\n";
    cout<<"\n power calculated using default value( i.e. n=2): "<<calculatepowerusingDefaultValue.display()<<"\n";


}
