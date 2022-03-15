//Version 2.1
/*Glitches:
*/
#include<bits/stdc++.h>
using namespace std;
void core(char y[],fstream &aa)
{
        int i=0,j=1;
        double pi=3.14159265358979;
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
    deque<double>a;
    deque<char>b;
    double fu;
    char gh[10],u[14][10]={"SIN","COS","TAN","ARCSIN","ARCCOS","ARCTAN","SINH","COSH","TANH","LOG","LN","EXP","SQRT","CBRT"};
    int k=0,l,m,n,ss[14],q,r,t,v;
    while(y[0]!='p')
    {
        q=0;
        if(y[0]>64&&y[0]<91)
        {

            bg:
                v=0;
                for(i=0;gh[i]!='\0';i++)
                    gh[i]='\0';
            if(y[0]>64&&y[0]<91)
            {
            for(i=2;;i++)
            {
                for(j=0;j<i;j++)
                    gh[j]=y[j];
                for(j=0;j<14;j++)
                {
                    t=0;
                    if(string(gh)==string(u[j]))
                    {
                        ss[q]=j;
                        if(v==0)
                        {
                                t=1;
                                v=1;
                        }
                            else
                                i++;
                        break;
                    }
                }
                if(t==0&&v==1)
                    break;
            }
            for(j=i-1;y[j]!='\0';j++)
                y[j-i+1]=y[j];
                q++;
            goto bg;
            }
            else
            {
                stringstream(y)>>fu;
                for(i=q-1;i>=0;i--)
                {
                    switch(ss[i])
                    {
                    case 0:
                        fu=(fu*pi)/180;
                        fu=sin(fu);
                        break;
                    case 1:
                        fu=(fu*pi)/180;
                        fu=cos(fu);
                        break;
                    case 2:
                        if(fu-int(fu)==0&&int(fu)%90==0&&int(fu/90)%2!=0)
                        {
                            aa<<"inf\n";
                            aa.seekg(0,ios::beg);
                            return;
                        }
                        fu=(fu*pi)/180;
                        fu=tan(fu);
                        break;
                    case 3:
                        fu=asin(fu);
                        fu=(fu*180)/pi;
                        break;
                    case 4:
                        fu=acos(fu);
                        fu=(fu*180)/pi;
                        break;
                    case 5:
                        fu=atan(fu);
                        fu=(fu*180)/pi;
                        break;
                    case 6:
                        fu=sinh(fu);
                        break;
                    case 7:
                        fu=cosh(fu);
                        break;
                    case 8:
                        fu=tanh(fu);
                        break;
                    case 9:
                        fu=log10(fu);
                        break;
                    case 10:
                        fu=log(fu);
                        break;
                    case 11:
                        fu=exp(fu);
                        break;
                    case 12:
                        fu=sqrt(fu);
                        break;
                    case 13:
                        fu=cbrt(fu);
                    }
                }
            }
        }
        else
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
        if(b.at(i)=='^')
        {
            b.erase(h+i);
            cout<<"here";
            a.at(i)=pow(a.at(i),a.at(i+1));
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
        if(b.at(i)=='/')
        {
            cout<<"HERE\n";
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
    aa<<fixed<<setprecision(13)<<a[0]<<endl;
    aa.seekg(0,ios::beg);
}
int main()
{
    ofstream z;
    z.open("ddata.txt");
    z.close();
    fstream aa;
    string f;
    int i,j,k,p,l=0,a1=0,a2=0;
    double e;
    char x[10000],y[10000],buf[100];
    aa.open("ddata.txt",ios::in|ios::out);
    while(1)
    {
        int a3=0;
    cin>>x;
    for(i=0;x[i]!='\0';i++)
        if(x[i]>96)
        x[i]-=32;
    if(string(x)=="EXIT")
    {
        aa.close();
        return 0;
    }
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==')')
            a1++;
        if(x[i]=='(')
            a2++;
    }
    if(a1!=a2)
    {
        cout<<"Syntax Error!"<<endl;
        continue;
    }
    for(i=strlen(x);i>=0;i--)
        {
            if(x[i]=='(')
    {

        x[i]='p';
        for(j=i+1;x[j]!=')';j++)
            {
                y[j-i-1]=x[j];
                x[j]='p';
            }
            x[j]='p';
        for(int m=strlen(x);m>j;m--)
            x[m+14]=x[m];
        for(int m=j+1;m<j+15;m++)
            x[m]='p';
            y[j-i-1]='p';
            y[j-i]='\0';
            core(y,aa);
    getline(aa,f);
    strcpy(buf,f.c_str());
    aa.seekp(0,ios::beg);
    for(k=0;buf[k]!='\0';k++)
        x[i+k]=buf[k];
    }
}
for(p=0;x[p]!='\0';p++)
    y[p]=x[p];
    y[p]='p';
    y[p+1]='\0';
core(y,aa);
getline(aa,f);
strcpy(buf,f.c_str());
if(buf[1]>96)
{
    cout<<"Math Error!";
    goto hu;
}
cout<<"Answer:";
p=strlen(buf);
for(i=p-1;i>=0;i--){if(buf[i]!='0')break;}
if(buf[i]=='.')
    i=i-1;
for(j=0;j<=i;j++)
    cout<<buf[j];
hu:
aa.seekp(0,ios::beg);
cout<<endl;
}
}

