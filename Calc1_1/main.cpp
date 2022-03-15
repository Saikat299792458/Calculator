//JBL
#include<windows.h>
#include"resource.h"
#include<bits/stdc++.h>
using namespace std;
char x[10000],res[100],jk[10];
int hi[10000],q=0;
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
    double a[1000],fu;
    char b[1000],g[10],u[14][10]={"SIN","COS","TAN","ARCSIN","ARCCOS","ARCTAN","SINH","COSH","TANH","LOG","LN","EXP","SQRT","CBRT"};
    int k=0,ss[14],q,t,v;
    for(i=0;i<14;i++)
        ss[i]=-1;
    while(y[0]!='p')
    {
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
                for(j=0;j<14;j++)
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
                    }
                }
            }
        }
        else
    stringstream(y)>>fu;
    y[0]='g';
    a[k]=fu;
    for(i=0;y[i]!='\0';i++)
        if(y[i]=='+'||y[i]=='-'||y[i]=='*'||y[i]=='/'||y[i]=='^')
        {
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
        a[i]=pow(a[i],a[i+1]);
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
    aa<<fixed<<setprecision(13)<<a[0]<<endl;
    aa.seekg(0,ios::beg);
}
void base()
{
    ofstream z;
    z.open("data.txt");
    z.close();
    fstream aa;
    string f;
    int i,j,k,p,a1=0,a2=0;
    char y[10000],buf[100];
    aa.open("data.txt",ios::in|ios::out);
    for(i=0;x[i]!='\0';i++)
        if(x[i]>96)
        x[i]-=32;
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
    strcpy(res,"Math Error!");
    goto hu;
}
p=strlen(buf);
for(i=p-1;i>=0;i--){if(buf[i]!='0')break;}
if(buf[i]=='.')
    i=i-1;
for(j=0;j<=i;j++)
    res[j]=buf[j];
hu:
aa.seekp(0,ios::beg);
aa.close();
}
HBITMAP logo=NULL;
LRESULT CALLBACK windpro(HWND h,UINT u,WPARAM w,LPARAM l)
{
    switch(u)
    {
    case WM_CREATE:
        logo=LoadBitmap(GetModuleHandle(NULL),MAKEINTRESOURCE(ID_LOGO));
        if(logo==NULL)
            MessageBox(NULL,"Bitmap loading failed!","Error",0);
        break;
    case WM_PAINT:
        {
        BITMAP b;
        PAINTSTRUCT p;
        HDC h1=BeginPaint(h,&p);
        HDC h2=CreateCompatibleDC(h1);
        HGDIOBJ o=SelectObject(h2,logo);
        GetObject(logo,sizeof(b),&b);
        cout<<b.bmWidth<<endl<<b.bmHeight;
        BitBlt(h1,0,0,b.bmWidth,b.bmHeight,h2,0,0,SRCCOPY);
        SelectObject(h2,o);
        DeleteDC(h2);
        EndPaint(h,&p);
        }
        break;
    case WM_CLOSE:
        DeleteObject(logo);
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
            case ID_BRF:
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
            case ID_BRL:
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
    WNDCLASSEX e;
    e.cbClsExtra=0;
    e.cbSize=sizeof(WNDCLASSEX);
    e.cbWndExtra=0;
    e.hbrBackground=CreateSolidBrush(RGB(0,255,255));
    e.hCursor=LoadCursor(NULL,IDC_ARROW);
    e.hIcon=LoadIcon(GetModuleHandle(NULL),MAKEINTRESOURCE(ID_ICON));
    e.hIconSm=(HICON)LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(ID_ICON),IMAGE_ICON,16,16,0);
    e.hInstance=a;
    e.lpfnWndProc=windpro;
    e.lpszClassName="Calculator1.1";
    e.lpszMenuName=NULL;
    e.style=0;
    if(!RegisterClassEx(&e))
    {
        MessageBox(NULL,"Class registration failed!","Error!",0);
        return 0;
    }
    HWND f=CreateWindowEx(WS_EX_APPWINDOW,
                     "Calculator1.1",
                     "Calculator1.1",
                     WS_OVERLAPPEDWINDOW|WS_MAXIMIZEBOX,
                     CW_USEDEFAULT,
                     CW_USEDEFAULT,
                     416,380,
                     NULL,NULL,a,NULL),m;
    m=CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Edit","",
                      WS_BORDER|WS_CHILD|WS_VISIBLE|WS_DISABLED,
                      300,0,100,25,f,(HMENU)IDC_MODE,GetModuleHandle(NULL),NULL);
    SetWindowText(m,"Coming Soon");
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
                      "Button","(",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,120,80,30,f,(HMENU)ID_BRF,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button",")",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,120,80,30,f,(HMENU)ID_BRL,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","sin",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,150,80,30,f,(HMENU)ID_B11,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","cos",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,150,80,30,f,(HMENU)ID_B12,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","tan",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,150,80,30,f,(HMENU)ID_B13,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","hyp",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,150,80,30,f,(HMENU)ID_B14,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","arc",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,150,80,30,f,(HMENU)ID_B15,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","log",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,180,80,30,f,(HMENU)ID_B21,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","ln",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,180,80,30,f,(HMENU)ID_B22,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","sqrt",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,180,80,30,f,(HMENU)ID_B23,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","cbrt",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,180,80,30,f,(HMENU)ID_B24,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","^",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,180,80,30,f,(HMENU)ID_B25,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","7",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,210,80,30,f,(HMENU)ID_B31,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","8",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,210,80,30,f,(HMENU)ID_B32,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","9",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,210,80,30,f,(HMENU)ID_B33,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","DEL",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,210,80,30,f,(HMENU)ID_B34,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","AC",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,210,80,30,f,(HMENU)ID_B35,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","4",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,240,80,30,f,(HMENU)ID_B41,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","5",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,240,80,30,f,(HMENU)ID_B42,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","6",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,240,80,30,f,(HMENU)ID_B43,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","X",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,240,80,30,f,(HMENU)ID_B44,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","/",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,240,80,30,f,(HMENU)ID_B45,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","1",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,270,80,30,f,(HMENU)ID_B51,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","2",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,270,80,30,f,(HMENU)ID_B52,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","3",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,270,80,30,f,(HMENU)ID_B53,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","+",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,270,80,30,f,(HMENU)ID_B54,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","-",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,270,80,30,f,(HMENU)ID_B55,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","0",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      0,300,80,30,f,(HMENU)ID_B61,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button",".",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      80,300,80,30,f,(HMENU)ID_B62,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","exp",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      160,300,80,30,f,(HMENU)ID_B63,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","Ans",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      240,300,80,30,f,(HMENU)ID_B64,GetModuleHandle(NULL),NULL);
    CreateWindowEx(WS_EX_CLIENTEDGE,
                      "Button","=",
                      WS_BORDER|WS_VISIBLE|WS_CHILD,
                      320,300,80,30,f,(HMENU)ID_B65,GetModuleHandle(NULL),NULL);
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
