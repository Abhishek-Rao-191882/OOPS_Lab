#include<iostream>
#include <cmath>
using namespace std;

float power(double m, double n){
    float result;
    result = pow(m,n);

    return result;
}

float power(float base, int a=2){
    float result;
    result = pow(base,a);

    return result;
}

void display(int data){
    cout<<data;
}

int main(){
    double baseValue, powerValue;
    float result, result1;

    cout<<" Enter the base value : ";
    cin>>baseValue;

    cout<<" Enter the power value : ";
    cin>>powerValue;

    result = power(baseValue, powerValue);
    result1 = power(baseValue);
    cout<<"\n";

    cout<<"power value using normal function: ";
    display(result);

    cout<<"\n\n";
    cout<<"power value using overloaded function with default arguments: ";
    display(result1);

    cout<<"\n";

    return 0;
}

