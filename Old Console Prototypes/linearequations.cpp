#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,p=0;
    cout<<"Enter number of variables:";
    cin>>n;
    double a[n][n+1],b[n],d,e,g,s;
    for(i=0;i<n;i++)
        b[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cout<<"Enter coefficient of"<<i+1<<j+1<<":";
            cin>>a[i][j];
        }
    }
    zz:
    if(p==n-1)
        goto pp;
    for(i=p+1;i<n;i++)
    {
        d=a[i][p];
        e=a[p][p];
        for(j=0;j<=n;j++)
            a[i][j]=(e*a[i][j])-(d*a[p][j]);
    }
    p++;
    goto zz;
    pp:
        b[n-1]=a[n-1][n]/a[n-1][n-1];
        for(i=n-2;i>=0;i--)
        {
            g=a[i][i];
            a[i][i]=0;
            s=0;
            for(j=0;j<n;j++)
            {
                if(a[i][j]!=0)
                {
                    s=s+(a[i][j]*b[j]);
                }
            }
            b[i]=(a[i][n]-s)/g;
        }
        for(i=0;i<n;i++)
        cout<<b[i]<<endl;
    return 0;
}
