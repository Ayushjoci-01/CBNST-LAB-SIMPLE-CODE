#include<bits/stdc++.h>
#include<cmath>
using namespace std;
double fun(double x)
{
    return x*x*x-x-2;
}
void regularfalsi(double a,double b,double tol,double maxi)
{
    if(fun(a)*fun(b)>=0)
    {
        cout<<"the value is invalid";
    }
    double c=0;
    for(int i=0;i<maxi;i++)
    {
        c=a*fun(b)-b*fun(a)/fun(b)-fun(a);
        if(abs(fun(c))<=tol)
        {
            return;
        }
        if(fun(c)*fun(a)<0)
        {
            b=c;
        }
        else{
            a=c;
        }
    }
    cout<<"so the ans is"<<c;
}
int main()
{
    double a,b, tol,maxi;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"enter the tol";
    cin>>tol;
    cout<<"enter the maximum iter";
    cin>>maxi;
    regularfalsi(a,b,tol,maxi);
}