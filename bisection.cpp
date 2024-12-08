#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return x*x-2*x-1;
}
void bisection(double a,double b, double tol)
{
    if(fun(a)*fun(b)>=0)
    {
        cout<<"invalid a and b value";
        return ;
    }
    double mid;
    while((b-a)>=tol)
    {
        mid=(a+b)/2;
        if(fun(mid)==0.0)
        {
            break;
        }
        if(fun(mid)*fun(a)<0)
        {
            b=mid;
        }
        else{
            a=mid;
        }
    }
    cout<<"so the ans is "<<mid;
}
int main()
{
    double a,b,tol;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"enter the tol";
    cin>>tol;
    bisection(a,b,tol);

}