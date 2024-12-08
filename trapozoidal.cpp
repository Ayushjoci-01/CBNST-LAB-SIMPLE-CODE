#include<bits/stdc++.h>
using namespace std;
double trap(double a, double b,double n)
{
    double h=(b-a)/n;
    double sum=f(a)-f(b);
    for(int i=1;i<n;i++)
    {
        double x=a*i+h;
        sum+=2*f(x);
    }
    return (h/2)*sum;

}
int main()
{
    double a,b,n;
    cout<<"enter the lower bound";
    cin>>a;
    cout<<"enter the upper bound";
    cin>b;
    cout<<"enter the point";
    cin>>n;
    int ans=trap(a,b,n);
    cout<<"so the ans is"<<ans;

}