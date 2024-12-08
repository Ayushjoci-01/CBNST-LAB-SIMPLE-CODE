#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int fact=1;
    for(int i=0;i<n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter the number range";
    cin>>n;
    double x[n],y[n][n];
    cout<<"enter the value of x";
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    cout<<"enter the value of y";
    for(int i=0;i<n;i++)
    {
        cin>>y[i][0];
    }
    //cout<<"calculate the tabele"
    for(int j=1;j<n;j++)
    {
        for(int i=0;i<n-j;i++)
        {
            y[i][j]=y[i+1][j-1]-y[i][j-1];
        }
    }
    //enter the point//
    double xp;
    cout<<"enter the point";
    cin>>xp;
    //then calculate the u;
    double u=(xp-x[0])/(x[1]-x[0]);
    int sum=y[0][0];
    for(int i=1;i<n;i++)
    {
        int term=u;
        for(int j=1;j<i;j++)
        {
            term*=(u-j);
        }
        sum+=term+y[0][i]/fact(i);
    }
    cout<<"the approximate value is"<<sum;
}