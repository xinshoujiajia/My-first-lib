#include<iostream>
#include<CMath>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int a;//进制数
    int b;//控制开关
    int temp;//临时数据
    int y;//十进制数
    bool w=true;//循环开关
    string x;//n进制数
    string n;//输出n
    string t;//临时字符串
    while(w==true)
    {
        cout<<"1.n进制转10进制"<<endl
        <<"2.10进制转n进制"<<endl
        <<"3.退出"<<endl;
        cin>>b;
        switch(b)
        {
        case 1:
            cout<<"输入初始进制:";
            cin>>a;
            cout<<"输入"<<a<<"进制数:";
            cin>>x;
            for(int i=0;i<x.length();i++)
            {
                if(int(x[i])>47)
                {
                    if(int(x[i])<58)
                    {
                        temp=(int(x[i])-48);
                        if(temp<a)
                            y=y+temp*pow(a,x.length()-1-i);
                        else
                        {
                            cout<<"请输入正确的数"<<endl;
                            goto wrong;
                        }
                    }else if(int(x[i])>96&&int(x[i])<123)
                    {
                        temp=(int(x[i])-87);
                        if(temp<a)
                            y=y+temp*pow(a,x.length()-1-i);
                        else
                        {
                            cout<<"请输入正确的数"<<endl;
                            goto wrong;
                        }                
                    }
                }
            }
            cout<<y<<endl;
            wrong:
        break;

        case 2:
            x=n;
            cout<<"输入目标进制:";
            cin>>a;
            cout<<"输入10进制数:";
            cin>>temp;
            while(temp>=a)
            {
                if(temp%a<10)
                    t=temp%a+48;
                else if(temp%a<36)
                    t=temp%a+87;
                x=x+t;
                temp=temp/a;       
            }
            t=temp+(temp<10? 48:87);
            x=x+t;
            reverse(x.begin(),x.end());
            cout<<x<<endl;
        break;

        case 3:
            w=false;
        break;
        }
    }
    return 0;
}
