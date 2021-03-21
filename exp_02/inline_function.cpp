#include<iostream>
#include<math.h>
using namespace std;

inline double power(double m,int n=2)
{
    double result;
    result=pow(m,n);
    return result;
}

void display(double result,double m,int n)
{
    cout<<"\nTherefore ("<<m<<")^"<<n<<" Answer is = "<<result<<endl<<endl;
}

int main()
{
    double m,ans;
    int n;
    cout<<"\nEnter Base Value m : ";
    cin>>m;
    cout<<"Enter The Power Value n (to use default value of n, enter 0) : ";
    cin>>n;
    if(n==0)
    {
        ans=power(m);
        display(ans,m,n);
    }
    else
    {
        ans=power(m,n);
        display(ans,m,n);
    }
    return 0;
}
