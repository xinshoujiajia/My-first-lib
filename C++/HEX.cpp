#include<iostream>
#include<CMAth>
#include<Cstring>
using namespace std;
int main()
{
    int a,b,temp;
    int y=0;
    string x;
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
                else break;
            }else if(int(x[i])>96&&int(x[i])<123)
            {
                temp=(int(x[i])-87);
                if(temp<a)
                    y=y+temp*pow(a,x.length()-1-i);
                else break;                
            }
        }
    }
    break;
    case 2:
    cout<<"输入目标进制:";
    break;
    case 3:
    break;
    }
    return 0;
}
