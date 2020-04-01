#include<iostream>
#include<CMAth>
#include<Cstring>
using namespace std;
int main()
{
    int a,b;
    string x,y;
    cout<<"输入初始进制:";
    cin>>a;
    cout<<"输入目标进制:";
    cin>>b;
    cout<<"输入"<<a<<"进制数:";
    cin>>x;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]>47)
        {
            if(x[i]<58)
            {
                
            }else if(x[i]>64)
            {

            }
        }
        y=x[i];
        cout<<x;
    }
    return 0;
}
