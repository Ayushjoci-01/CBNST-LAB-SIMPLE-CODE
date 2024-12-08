#include<bits/stdc++.h>
using namespace std;
double fun(double x)
{
    return x*x*x-x-2;
}
double dfun(double x)
{
    return 3*x*x-1;
}
void newtonraphson(double x,double tol,double maxi)
{
    double x1;
    for(int i=0;i<maxi;i++)
    {
        x1=x-fun(x)/dfun(x);
        if(abs(x-x1)<=tol)
        {
            return;
        }
    }
    x=x1;
    cout<<"so the ans is"<<x1<<endl;
}
int main()
{
    double x,tol,maxi;
    cout<<"enter the inital guess";
    cin>>x;
    cout<<"enter the no of tol";
    cin>>tol;
    cout<<"enter the maxi iteration";
    cin>>maxi;
    newtonraphson(x,tol,maxi);
    
}