#include<bits/stdc++.h>
using namespace std;
double g(double x) {
    return (x*x+2)/3;
}
void iteration(double x,double tol,double maxi)
{
    double x1;
    for(int i=0;i<maxi;i++)
    {
        x1=g(x);
        if(fabs(x1-x)<=tol)
        {
            return;
        }
    }
    x=x1;
    cout<<"so the ans is"<<x1;
}
int main()
{
    double x,tol,maxi;
    cout<<"enter the inital guess";
    cin>>x;
    cout<<"enter the tol";
    cin>>tol;
    cout<<"enter the maxi iter";
    cin>>maxi;
    iteration(x,tol,maxi);
    
}