#include<iostream>
#include<math.h>

using namespace std;

inline double power(double m, int n)
{
    double res;
    res = pow(m,n);
    return res;
}

void display(double result)
{
    cout<<"\n Calculated Power  = "<<result<<endl;
}

int main()
{
    double m,answer;
    int n;
    cout<<"\n Enter the value of base : ";
    cin>>m;
    cout<<"\n Enter the value of power : ";
    cin>>n;

        answer = power(m, n);
        display(answer);

    return 0;
}
