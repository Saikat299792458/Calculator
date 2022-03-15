//version 1.2 prototype
/*glitches detected:
mouse-hovering-effect on buttons is gone.Maybe it doesn't matter since next versions will come with custom drawn buttons.
*/
/*goals of this version:
1.create complex mode as an additional menu-done
2.fix bugs
3.add more u,bi and ternary(NEW) operators-done
4.add custom sizing capability-done
5.reduce file management related runtime
*/
#include<windows.h>
#include"resource.h"
#include<bits/stdc++.h>
using namespace std;
char x[10000],res[100],jk[10];
string modex,cmode;
int hi[10000],q=0;
int fact(int a)
{
    if(a>1)return a*fact(a-1);
    else return 1;
}
void core(char y[],fstream &aa,string com)
{
    int i=0,j=1;
        const double pi=3.14159265358979;
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
    complex<double>a[1000];
    double fu;
    bool mf=false,me=false;
    char b[1000],g[10],u[15][10]={"SIN","COS","TAN","ARCSIN","ARCCOS","ARCTAN","SINH","COSH","TANH","LOG","LN","EXP","SQRT","CBRT","ABS"};
    int k=0,ss[15],q,t,v;
    for(i=0;i<15;i++)
        ss[i]=-1;
    while(y[0]!='p')
    {
        bool md=true;
        mu:
        q=0;
        if(y[0]>64&&y[0]<91)
        {

            bg:
                v=0;
                for(i=0;g[i]!='\0';i++)
                    g[i]='\0';
            if(y[0]>64&&y[0]<91)
            {
            for(i=2;;i++)
            {
                for(j=0;j<i;j++)
                    g[j]=y[j];
                for(j=0;j<15;j++)
                {
                    t=0;
                    if(string(g)==string(u[j]))
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
                        break;
                    case 14:
                        fu=abs(fu);
                        break;
                    }
                }
            }
        }
        else
    stringstream(y)>>fu;
    if(fu=='\0')
            mf=true;
    if(y[0]!='i')
    y[0]='g';
    mo:
    for(i=0;y[i]!='\0';i++)
        if(y[i]=='+'||y[i]=='-'||y[i]=='*'||y[i]=='/'||y[i]=='^'||y[i]=='i'||y[i]=='p'||y[i]=='!'||y[i]=='%'||y[i]=='<')
        {
            if(y[i]=='!')
            {
                y[i]='w';
                fu=(double)fact(int(fu));
                goto mo;
            }
            if(y[i]=='%')
            {
                y[i]='w';
                fu=fu/100;
                goto mo;
            }
            if(y[i]=='i')
                {
                    y[i]='w';
                    if(mf==true)
                    {
                        mf=false;
                        imag(a[k])=1;
                    }
                    else
                    imag(a[k])=fu;
                    md=false;
                    goto mo;
                }
                if(md==true)
                        real(a[k])=fu;
            if(y[i]=='<'||me==true)
            {
                if(me==false)
                {
                    me=true;
                    md=false;
                real(a[k])=fu;
                for(j=i+1;y[j]!='\0';j++)
                y[j-i-1]=y[j];
                y[j-i-1]='\0';
                goto mu;
                }
                else
                {
                    me=false;
                    fu=(fu*pi)/180;
                    a[k]=polar((double)real(a[k]),fu);
                }
            }
            if(y[i]=='p')
                {
                    i++;
                    break;
                }
            b[k]=y[i];
            break;
        }
        if(y[i-1]=='p')
        {
            y[0]='p';
            k++;
            continue;
        }
    for(j=i+1;y[j]!='\0';j++)
        y[j-i-1]=y[j];
    y[j-i-1]='\0';
    k++;
}
b[k-1]='p';
cc:
    if(b[0]=='p')
        goto zz;
for(i=0;b[i]!='\0';i++)
{
    cf:
    if(b[i]=='^')
    {
        for(j=i;b[j]!='\0';j++)
            b[j]=b[j+1];
        a[i]=pow(a[i],real(a[i+1]));
        for(j=i+1;j<k;j++)
            a[j]=a[j+1];
        k--;
        goto cf;
    }
}
for(i=0;b[i]!='\0';i++)
{
    cd:
    if(b[i]=='/')
    {
        for(j=i;b[j]!='\0';j++)
            b[j]=b[j+1];
        a[i]=a[i]/a[i+1];
        for(j=i+1;j<k;j++)
            a[j]=a[j+1];
        k--;
        goto cd;
    }
}
for(i=0;b[i]!='\0';i++)
{
    cx:
    if(b[i]=='*')
    {
        for(j=i;b[j]!='\0';j++)
            b[j]=b[j+1];
        a[i]=a[i]*a[i+1];
        for(j=i+1;j<k;j++)
            a[j]=a[j+1];
        k--;
        goto cx;
    }
}
for(i=0;b[i]!='\0';i++)
{
    cz:
    if(b[i]=='-')
    {
        for(j=i;b[j]!='\0';j++)
            b[j]=b[j+1];
        a[i]=a[i]-a[i+1];
        for(j=i+1;j<k;j++)
            a[j]=a[j+1];
        k--;
        goto cz;
    }
    else if(b[i]=='+')
    {
        for(j=i;b[j]!='\0';j++)
            b[j]=b[j+1];
        a[i]=a[i]+a[i+1];
        for(j=i+1;j<k;j++)
            a[j]=a[j+1];
        k--;
        goto cz;
    }
}
goto cc;
zz:
    if(com=="Abs")
    {real(a[0])=abs(a[0]);imag(a[0])=0;}
    else if(com=="Arg")
    {real(a[0])=(arg(a[0])*180)/pi;imag(a[0])=0;}
    else if(com=="Real")
          imag(a[0])=0;
    else if(com=="Img")
          imag(a[0])=0;
    else if(com=="Conj")
        a[0]=conj(a[0]);
    if(com=="com")
    {
        aa<<fixed<<setprecision(13)<<abs(a[0]);
        aa<<"<";
        aa<<fixed<<setprecision(13)<<arg(a[0])*180/pi;
        aa<<">"<<endl;
    }
    else
    {
    if(imag(a[0])==0)
        aa<<fixed<<setprecision(13)<<real(a[0])<<endl;
    else
    {
        if(real(a[0])==0)
            {
                aa<<fixed<<setprecision(13)<<imag(a[0]);
                aa<<"i"<<endl;
            }
        else
            {
                aa<<fixed<<setprecision(13)<<real(a[0]);
                if(imag(a[0])<0)
                    aa<<"-";
                else
                    aa<<"+";
                aa<<fixed<<setprecision(13)<<imag(a[0]);
                aa<<"i"<<endl;
            }
    }
    }
aa.seekg(0,ios::beg);
}
void base()
{
    fstream aa;
    string f,com;
    bool bn=false,bs=false;
    int i,j,k,p,a1=0,a2=0,pk;
    char y[10000],buf[100];
    aa.open("data.txt",ios::in|ios::out);
    for(i=0;x[i]!='\0';i++)
        if(x[i]>96)
        {
            if(x[i]=='i'&&x[i-1]!='S')
                continue;
            x[i]-=32;
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
        strcpy(res,"Syntax Error!");
        goto hu;
    }
    for(i=strlen(x);i>=0;i--)
        {
            if(x[i]=='(')
    {
        x[i]='p';
        com="NULL";
        for(j=i+1;x[j]!=')';j++)
            {
                if(x[j]=='i')
                            bn=true;
                if((x[j]=='+'||x[j]=='-'||x[j]=='*'||x[j]=='/'||x[j]=='^')&&x[j-1]!='i')
                    bs=true;
                y[j-i-1]=x[j];
                x[j]='p';
            }
            x[j]='p';
        if(x[i-1]>64&&x[i-1]<91&&i!=0)
        {
                if(x[i-3]=='O')
                {
                    com="Conj";
                    for(int u=i-4;u<i;u++)
                        x[u]='p';
                }
                else if(x[i-3]=='E')
                {
                    com="Real";
                    for(int u=i-4;u<i;u++)
                        x[u]='p';
                }
                else if(x[i-3]=='I')
                {
                    com="Img";
                    for(int u=i-3;u<i;u++)
                        x[u]='p';
                }
                else if(x[i-3]=='P')
                {
                    cmode="POL";
                    for(int u=i-3;u<i;u++)
                        x[u]='p';
                }
                else if(x[i-3]=='R')
                {
                    cmode="REC";
                    for(int u=i-3;u<i;u++)
                        x[u]='p';
                }
                else if(x[i-3]=='A')
                {
                    if(x[i-2]=='B')
                    com="Abs";
                    else
                    com="Arg";
                    for(int u=i-3;u<i;u++)
                        x[u]='p';
                }
                else if(x[i-3]=='Q')
                {
                    if(bs==true)
                    {
                        strcpy(res,"Math Error!");
                        goto hu;
                    }
                    com="sqrt";
                    for(int u=i-4;u<i;u++)
                        x[u]='p';
                }
                else
                {
                    strcpy(res,"Math Error!");
                    goto hu;
                }
        }
        if(x[j+1]=='!'&&x[j+1]=='%'&&bn==true)
        {
            strcpy(res,"Math Error!");
            goto hu;
        }
        for(int m=strlen(x);m>j;m--)
            x[m+32]=x[m];
        for(int m=j+1;m<j+33;m++)
            x[m]='p';
            y[j-i-1]='p';
            y[j-i]='\0';
            core(y,aa,com);
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
    if(modex=="POL")
    {
        if(cmode=="POL")
            core(y,aa,"com");
        else
            {core(y,aa,"NULL");cmode="POL";}
    }
else
    {
        if(cmode=="REC")
            core(y,aa,"NULL");
        else
            {core(y,aa,"com");cmode="REC";}
    }
getline(aa,f);
strcpy(buf,f.c_str());
if(buf[1]>96)
{
    strcpy(res,"Math Error!");
    goto hu;
}
//Converter start
p=strlen(buf);
j=0;
pk=0;
lo:
for(int x=0;buf[x]!='\0';x++)
{
    if((buf[x]=='+'||buf[x]=='-'||buf[x]=='<')&&x!=0)
    {
        for(i=x-1;i>=0;i--){if(buf[i]!='0')break;}
if(buf[i]=='.')
    i=i-1;
for(j=0;j<=i;j++)
    res[j]=buf[j];
    if(buf[x]=='+')
    res[j]='+';
    else if(buf[x]=='-')
    res[j]='-';
    else
    res[j]='<';
    pk=j+1;
    buf[x]='0';
    j=x+1;
    goto lo;
    }
    if(buf[x]=='i'||buf[x]=='>')
    {
        for(i=x-1;i>=0;i--){if(buf[i]!='0')break;}
if(buf[i]=='.')
    i=i-1;
for(k=j+0;k<=i;k++)
    res[k-j+pk]=buf[k];
    if(buf[x]=='i')
    res[k-j+pk]='i';
    goto hu;
    }
}
for(i=p-1;i>=0;i--){if(buf[i]!='0')break;}
if(buf[i]=='.')
    i=i-1;
for(j=0;j<=i;j++)
    res[j]=buf[j];//in case of pol()or rec(),something should be done here
hu:
aa.seekp(0,ios::beg);
aa.close();
}
void creso(HWND h,int a)
{
    int b=1;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO1",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO1,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO2",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO2,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO3",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO3,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO4",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO4,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO5",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO5,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO6",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO6,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO7",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO7,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO8",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO8,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO9",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO9,GetModuleHandle(NULL),NULL);b++;if(b>a)return;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","SO10",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,0,0,0,h,(HMENU)ID_SO10,GetModuleHandle(NULL),NULL);
}
void desso(HWND h)
{
    DestroyWindow(GetDlgItem(h,ID_SO1));
    DestroyWindow(GetDlgItem(h,ID_SO2));
    DestroyWindow(GetDlgItem(h,ID_SO3));
    DestroyWindow(GetDlgItem(h,ID_SO4));
    DestroyWindow(GetDlgItem(h,ID_SO5));
    DestroyWindow(GetDlgItem(h,ID_SO6));
    DestroyWindow(GetDlgItem(h,ID_SO7));
    DestroyWindow(GetDlgItem(h,ID_SO8));
    DestroyWindow(GetDlgItem(h,ID_SO9));
    DestroyWindow(GetDlgItem(h,ID_SO10));
}
BOOL CALLBACK dlgpro(HWND h,UINT u,WPARAM w,LPARAM l)
{
    switch(u)
    {
    case WM_INITDIALOG:
        return TRUE;
    case WM_COMMAND:
        switch(LOWORD(w))
        {
            case ID_POL:
                modex="POL";
                cmode="POL";
                EndDialog(h,ID_POL);
                break;
            case ID_REC:
                cmode="REC";
                modex="REC";
                EndDialog(h,ID_REC);
                break;
        }
        break;
            case WM_CLOSE:
                EndDialog(h,IDCANCEL);
                break;
            default:
                return FALSE;
    }
    return TRUE;
}
int f=1;
LRESULT CALLBACK windpro(HWND h,UINT u,WPARAM w,LPARAM l)
{
    switch(u)
    {
    case WM_SIZE:
        {
            HWND client;
            RECT main;
            GetClientRect(h,&main);
            int sr=main.right,sb=main.bottom,line=sb*7/100,row=(sr%5)/2,m=1;
            client=GetDlgItem(h,ID_CALC);
            SetWindowPos(client,NULL,0,0,sr/5,sb*8/100,SWP_NOZORDER);
            client=GetDlgItem(h,ID_COMP);
            SetWindowPos(client,NULL,sr/5,0,sr/5,sb*8/100,SWP_NOZORDER);
            client=GetDlgItem(h,IDC_MODE);
            SetWindowPos(client,NULL,sr*3/4,0,sr-(sr*3/4),sb*7/100,SWP_NOZORDER);
            client=GetDlgItem(h,IDC_SHIFT);
            SetWindowPos(client,NULL,sr*3/4,line,sr-(sr*3/4),sb*7/100,SWP_NOZORDER);line=line+sb*7/100;
            client=GetDlgItem(h,IDC_EDIT1);
            SetWindowPos(client,NULL,0,line,sr,sb*12/100,SWP_NOZORDER);line=line+sb*12/100;
            client=GetDlgItem(h,IDC_EDIT2);
            SetWindowPos(client,NULL,0,line,sr,sb*7/100,SWP_NOZORDER);line=line+sb*7/100;
            line=line+sb*3/100;row=(sr%f)/2;
            client=GetDlgItem(h,ID_SO1);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO2);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO3);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO4);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO5);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO6);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO7);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO8);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO9);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            client=GetDlgItem(h,ID_SO10);
            SetWindowPos(client,NULL,row,line,sr/f,sb*8/100,SWP_NOZORDER);row=row+sr/f;m++;if(m>f)goto po;
            po:
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B01);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B02);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B03);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B04);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B05);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B11);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B12);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B13);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B14);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B15);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B21);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B22);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B23);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B24);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B25);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B31);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B32);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B33);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B34);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B35);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B41);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B42);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B43);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B44);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B45);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B51);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B52);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B53);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B54);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B55);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            line=line+sb*8/100;row=(sr%5)/2;
            client=GetDlgItem(h,ID_B61);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B62);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B63);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B64);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
            client=GetDlgItem(h,ID_B65);
            SetWindowPos(client,NULL,row,line,sr/5,sb*8/100,SWP_NOZORDER);row=row+sr/5;
        }
        break;
    case WM_CLOSE:
        PostQuitMessage(0);
        break;
    case WM_COMMAND:
        {
            HWND text1=GetDlgItem(h,IDC_EDIT1),text2=GetDlgItem(h,IDC_EDIT2),shift=GetDlgItem(h,IDC_SHIFT);
            for(int i=0;x[i]!='\0';i++)
                x[i]='\0';
            GetWindowText(text1,x,300);
            GetWindowText(shift,jk,5);
            switch(LOWORD(w))
            {
            case ID_CALC:
                modex="REC";
                cmode="REC";
                if(res[0]=='\0')
                res[0]='0';
                desso(h);
                strcpy(x,"Real(");
                strcat(x,res);
                strcat(x,")");
                for(int i=0;i<100;i++)
                        res[i]='\0';
                base();
                SetWindowText(GetDlgItem(h,IDC_MODE),"Calculate");
                SetWindowText(GetDlgItem(h,ID_B01),"Abs");
                SetWindowText(text2,"0");
                SetWindowText(text1,"");
                break;
            case ID_COMP:
                {
                int ret=DialogBox(GetModuleHandle(NULL),MAKEINTRESOURCE(ID_DLG1),h,dlgpro);
                if(ret==IDCANCEL)
                    break;
                desso(h);
                creso(h,8);
                SetWindowText(GetDlgItem(h,ID_SO1),"Arg( )");
                SetWindowText(GetDlgItem(h,ID_SO2),"Conj( )");
                SetWindowText(GetDlgItem(h,ID_SO3),"Real( )");
                SetWindowText(GetDlgItem(h,ID_SO4),"Img( )");
                SetWindowText(GetDlgItem(h,ID_SO5),"Pol( )");
                SetWindowText(GetDlgItem(h,ID_SO6),"Rec( )");
                SetWindowText(GetDlgItem(h,ID_SO7),"i");
                SetWindowText(GetDlgItem(h,ID_SO8),"<");
                SetWindowText(GetDlgItem(h,ID_B01),"Abs( )");
                f=8;
                SetWindowText(text2,"0");
                SetWindowText(text1,"");
                if(ret==ID_POL)
                    SetWindowText(GetDlgItem(h,IDC_MODE),"Comp-Pol");
                else
                    SetWindowText(GetDlgItem(h,IDC_MODE),"Comp-Rec");
                SendMessage(h,WM_SIZE,0,0);
                }
                      break;
                case ID_SO1:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=4;q++;
                strcat(x,"Arg(");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO2:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=5;q++;
                strcat(x,"Conj(");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO3:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=5;q++;
                strcat(x,"Real(");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO4:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=4;q++;
                strcat(x,"Img(");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO5:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=4;q++;
                strcat(x,"Pol(");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO6:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=4;q++;
                strcat(x,"Rec(");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO7:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=1;q++;
                strcat(x,"i");
                SetWindowText(text1,x);
                }
                break;
                case ID_SO8:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }

                hi[q]=1;q++;
                strcat(x,"<");
                SetWindowText(text1,x);
                }
                break;
                case ID_B01:
                {
                    if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                if(modex=="POL"||modex=="REC")
                    {strcat(x,"Abs(");hi[q]=4;q++;}
                else
                {strcat(x,"Abs");hi[q]=3;q++;}
                SetWindowText(text1,x);
                }
                break;
                case ID_B02:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                hi[q]=1;q++;
                strcat(x,"!");
                SetWindowText(text1,x);
                break;
                case ID_B03:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                hi[q]=1;q++;
                strcat(x,"%");
                SetWindowText(text1,x);
                break;
            case ID_B04:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                hi[q]=1;q++;
                strcat(x,"(");
                SetWindowText(text1,x);
                break;
            case ID_B05:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                hi[q]=1;q++;
                strcat(x,")");
                SetWindowText(text1,x);
                break;
            case ID_B11:
                if(string(jk)=="arc")
                {strcat(x,"arcsin");hi[q]=6;}
                else if(string(jk)=="hyp")
                    {strcat(x,"sinh");hi[q]=4;}
                else
                    {strcat(x,"sin");hi[q]=3;}
                for(int i=0;i<5;i++)
                    jk[i]='\0';
                SetWindowText(text1,x);
                SetWindowText(shift,jk);
                q++;
                break;
            case ID_B12:
                if(string(jk)=="arc")
                {strcat(x,"arccos");hi[q]=6;}
                else if(string(jk)=="hyp")
                    {strcat(x,"cosh");hi[q]=4;}
                else
                    {strcat(x,"cos");hi[q]=3;}
                for(int i=0;i<5;i++)
                    jk[i]='\0';
                SetWindowText(text1,x);
                SetWindowText(shift,jk);
                q++;
                break;
            case ID_B13:
                if(string(jk)=="arc")
                {strcat(x,"arctan");hi[q]=6;}
                else if(string(jk)=="hyp")
                    {strcat(x,"tanh");hi[q]=4;}
                else
                    {strcat(x,"tan");hi[q]=3;}
                for(int i=0;i<5;i++)
                    jk[i]='\0';
                SetWindowText(text1,x);
                SetWindowText(shift,jk);
                q++;
                break;
            case ID_B14:
                if(jk[0]=='h')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }else
                SetWindowText(shift,"hyp");
                break;
            case ID_B15:
                if(jk[0]=='a')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }else
                SetWindowText(shift,"arc");
                break;
            case ID_B21:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"log");
                hi[q]=3;q++;
                SetWindowText(text1,x);
                break;
            case ID_B22:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"ln");
                hi[q]=2;q++;
                SetWindowText(text1,x);
                break;
            case ID_B23:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"sqrt");
                hi[q]=4;q++;
                SetWindowText(text1,x);
                break;
            case ID_B24:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"cbrt");
                hi[q]=4;q++;
                SetWindowText(text1,x);
                break;
            case ID_B25:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"^");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B31:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"7");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B32:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"8");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B33:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"9");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B34:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                if(q>0)
                {
                    int df=strlen(x);

                for(int i=df-1;i>=df-hi[q-1];i--)
                    x[i]='\0';
                q--;
                }
                SetWindowText(text1,x);
                break;
            case ID_B35:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                for(int i=0;x[i]!='\0';i++)
                    x[i]='\0';
                q=0;
                SetWindowText(text1,x);
                SetWindowText(text2,"0");
                break;
            case ID_B41:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"4");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B42:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"5");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B43:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"6");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B44:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"*");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B45:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"/");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B51:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"1");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B52:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"2");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B53:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"3");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B54:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"+");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B55:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"-");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B61:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"0");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B62:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,".");
                hi[q]=1;q++;
                SetWindowText(text1,x);
                break;
            case ID_B63:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                strcat(x,"exp");
                hi[q]=3;q++;
                SetWindowText(text1,x);
                break;
            case ID_B64:
                if(jk[0]!='\0')
                {
                    for(int i=0;i<5;i++)
                    jk[i]='\0';
                    SetWindowText(shift,jk);
                }
                if(res[1]<96)
                {
                strcat(x,res);
                hi[q]=strlen(res);q++;
                SetWindowText(text1,x);
                }
                break;
                case ID_B65:
                    for(int i=0;i<100;i++)
                        res[i]='\0';
                    if(x[0]=='\0')
                        x[0]='0';
                    base();
                    SetWindowText(text2,res);
                    break;
            }
        }
        break;
    default:
        return DefWindowProc(h,u,w,l);
    }
    return 0;
}
int APIENTRY WinMain(HINSTANCE a,HINSTANCE b,LPSTR c,int d)
{
    ofstream z;
    z.open("data.txt");
    z.close();
    WNDCLASSEX e;
    e.cbClsExtra=0;
    e.cbSize=sizeof(WNDCLASSEX);
    e.cbWndExtra=0;
    e.hbrBackground=CreateSolidBrush(RGB(0,255,255));
    e.hCursor=LoadCursor(NULL,IDC_ARROW);
    e.hIcon=LoadIcon(NULL,IDI_APPLICATION);
    e.hIconSm=LoadIcon(NULL,IDI_APPLICATION);
    e.hInstance=a;
    e.lpfnWndProc=windpro;
    e.lpszClassName="Calculator1.2";
    e.lpszMenuName=NULL;
    e.style=0;
    if(!RegisterClassEx(&e))
    {
        MessageBox(NULL,"Class registration failed!","Error!",0);
        return 0;
    }
    HWND f=CreateWindowEx(WS_EX_APPWINDOW,
                     "Calculator1.2",
                     "Calculator1.2",
                     WS_OVERLAPPEDWINDOW|WS_MAXIMIZEBOX,
                     CW_USEDEFAULT,
                     CW_USEDEFAULT,
                     CW_USEDEFAULT,
                     CW_USEDEFAULT,//416,380,
                     NULL,NULL,a,NULL),m;
    CreateWindowEx(WS_EX_CLIENTEDGE,
                   "Button","Calculate",
                   WS_VISIBLE|WS_CHILD,
                   0,0,80,30,f,(HMENU)ID_CALC,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                   "Button","Complex",
                   WS_VISIBLE|WS_CHILD,
                   80,0,80,30,f,(HMENU)ID_COMP,GetModuleHandle(NULL),NULL);
    m=CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Edit","",
                      WS_BORDER|WS_CHILD|WS_VISIBLE|WS_DISABLED,
                      300,0,100,25,f,(HMENU)IDC_MODE,GetModuleHandle(NULL),NULL);
    SetWindowText(m,"Loading...");
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Edit","",
                      WS_BORDER|WS_CHILD|WS_VISIBLE|WS_DISABLED,
                      300,25,100,25,f,(HMENU)IDC_SHIFT,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Edit","",
                      WS_BORDER|WS_CHILD|WS_VISIBLE|WS_HSCROLL|ES_MULTILINE|ES_AUTOHSCROLL,
                      0,53,400,40,f,(HMENU)IDC_EDIT1,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Edit","",
                      WS_BORDER|WS_CHILD|WS_VISIBLE|WS_DISABLED,
                      0,93,400,25,f,(HMENU)IDC_EDIT2,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","Abs",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,150,80,30,f,(HMENU)ID_B01,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","!",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,150,80,30,f,(HMENU)ID_B02,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","%",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,150,80,30,f,(HMENU)ID_B03,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","(",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,150,80,30,f,(HMENU)ID_B04,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button",")",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,150,80,30,f,(HMENU)ID_B05,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","sin",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,180,80,30,f,(HMENU)ID_B11,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","cos",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,180,80,30,f,(HMENU)ID_B12,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","tan",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,180,80,30,f,(HMENU)ID_B13,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","hyp",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,180,80,30,f,(HMENU)ID_B14,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","arc",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,180,80,30,f,(HMENU)ID_B15,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","log",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,210,80,30,f,(HMENU)ID_B21,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","ln",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,210,80,30,f,(HMENU)ID_B22,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","sqrt",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,210,80,30,f,(HMENU)ID_B23,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","cbrt",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,210,80,30,f,(HMENU)ID_B24,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","^",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,210,80,30,f,(HMENU)ID_B25,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","7",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,240,80,30,f,(HMENU)ID_B31,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","8",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,240,80,30,f,(HMENU)ID_B32,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","9",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,240,80,30,f,(HMENU)ID_B33,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","DEL",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,240,80,30,f,(HMENU)ID_B34,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","AC",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,240,80,30,f,(HMENU)ID_B35,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","4",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,270,80,30,f,(HMENU)ID_B41,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","5",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,270,80,30,f,(HMENU)ID_B42,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","6",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,270,80,30,f,(HMENU)ID_B43,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","X",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,270,80,30,f,(HMENU)ID_B44,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","÷",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,270,80,30,f,(HMENU)ID_B45,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","1",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,300,80,30,f,(HMENU)ID_B51,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","2",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,300,80,30,f,(HMENU)ID_B52,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","3",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,300,80,30,f,(HMENU)ID_B53,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","+",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,300,80,30,f,(HMENU)ID_B54,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","-",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,300,80,30,f,(HMENU)ID_B55,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","0",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,330,80,30,f,(HMENU)ID_B61,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button",".",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,330,80,30,f,(HMENU)ID_B62,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","exp",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,330,80,30,f,(HMENU)ID_B63,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","Ans",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,330,80,30,f,(HMENU)ID_B64,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","=",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,330,80,30,f,(HMENU)ID_B65,GetModuleHandle(NULL),NULL);
    SendMessage(f,WM_COMMAND,(WPARAM)ID_CALC,0);//WOW!!!How did I do that???
    ShowWindow(f,d);
    UpdateWindow(f);
    MSG i;
    while(GetMessage(&i,NULL,0,0)>0)
    {
        TranslateMessage(&i);
        DispatchMessage(&i);
    }
    return 0;
}
