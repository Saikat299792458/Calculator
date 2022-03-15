//Version 2.0
#include<bits/stdc++.h>
using namespace std;
double core(char y[])
{
    ff:
        int i=0,j=1;
    while(y[j]!='\0')
    {
        if(y[i]=='p')
        {
            if(y[j]!='p')
            {
                y[i]=y[j];
                y[j]='p';
            }
            else
                j++;
        }
        else
            {
                i++;
                j++;
            }
    }
    for(i=0;y[i]!='\0';i++)
        {
            if(y[i]=='+'&&y[i+1]=='-')
        {
            y[i]='p';
            goto ff;
        }
        }
    deque<double>a;
    deque<char>b;
    double fu;
    while(y[0]!='p')
    {
    stringstream(y)>>fu;
    y[0]='g';
    a.push_back(fu);
    for(i=0;y[i]!='\0';i++)
        if(y[i]=='+'||y[i]=='-'||y[i]=='*'||y[i]=='/')
        {
            b.push_back(y[i]);
            break;
        }
    if(i==strlen(y))
    {
        y[0]='p';
        continue;
    }
    for(j=i+1;y[j]!='\0';j++)
        y[j-i-1]=y[j];
    y[j-i]='\0';
}
    deque<double>::iterator g;
    deque<char>::iterator h;
    a.push_back(0);
    b.push_back('p');
    i=0;
    while(b.at(i)!='p')
    {
        g=a.begin();
    h=b.begin();
        if(b.at(i)=='/')
        {
            b.erase(h+i);
            a.at(i)=a.at(i)/a.at(i+1);
            a.erase(g+i+1);
            g++;
        }
        else
            i++;
    }
    i=0;
    while(b.at(i)!='p')
    {
        g=a.begin();
    h=b.begin();
        if(b.at(i)=='*')
        {
            b.erase(h+i);
            a.at(i)=a.at(i)*a.at(i+1);
            a.erase(g+i+1);
        }
        else
            i++;
    }
    i=0;
    while(b.at(i)!='p')
    {
        g=a.begin();
    h=b.begin();
        if(b.at(i)=='+')
        {
            b.erase(h+i);
            a.at(i)=a.at(i)+a.at(i+1);
            a.erase(g+i+1);
        }
        else if(b.at(i)=='-')
        {
            b.erase(h+i);
            a.at(i)=a.at(i)-a.at(i+1);
            a.erase(g+i+1);
        }
        else
            i++;
    }
    return *a.begin();
}
int main()
{
    int i,j,k,p,l=0,a1=0,a2=0;
    double e;
    char x[1000],y[1000];
    cout<<"String Calculator 2.0 with deque core(glitches unchecked)\n";
    while(1)
    {
        int a3=0;
    cin>>x;
    if(string(x)=="exit"||string(x)=="EXIT")
        return 0;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==')')
            a1++;
        if(x[i]=='(')
            a2++;
        if(x[i]=='/'&&x[i+1]=='0')
        {
            a3=2;
            break;
        }
    }
    if(a3==2)
    {
        cout<<"Math Error!"<<endl;
        continue;
    }
    if(a1!=a2)
    {
        cout<<"Syntax Error!"<<endl;
        continue;
    }
    for(i=strlen(x);i>=0;i--)
        {if(x[i]=='(')
    {

        x[i]='p';
        for(j=i+1;x[j]!=')';j++)
            {
                y[j-i-1]=x[j];
                x[j]='p';
            }
            x[j]='p';
        for(int m=strlen(x);m>j;m--)
            x[m+6]=x[m];
        for(int m=j+1;m<j+7;m++)
            x[m]='p';
            y[j-i-1]='p';
            y[j-i]='\0';
            e=core(y);
            char buf[50];
    sprintf(buf,"%f",e);
    for(p=0;;p++)
    {
        if(buf[p]=='.')
        {
            buf[p+6]='\0';
            break;
        }
    }
    for(k=0;buf[k]!='\0';k++)
        x[i+k]=buf[k];
    }
}
for(p=0;x[p]!='\0';p++)
    y[p]=x[p];
    y[p]='p';
    y[p+1]='\0';
e=core(y);
cout<<"Answer:"<<e<<endl;
}
}
