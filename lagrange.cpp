#include<bits/stdc++.h>
using namespace std;
double lagrange(double x[],double y[],int n,int xp)
{
    double ans=0.0;
    for(int i=0;i<n;i++){
        double term=y[0];
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                term*=(xp-x[j])/(x[i]-x[j]);
            }
        }
        ans+=term;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    double x[n],y[n];
    int xp;
    cout<<"enter the value of x";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"enter the value of y";
    for(int i=0;i<n;i++){
        cin>>y[i];
    }
    cout<<"enter the xp";
    cin>>xp;
    double ans=lagrange(x,y,xp,n);
    cout<<"so the ans is"<<ans;
}