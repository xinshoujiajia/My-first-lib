#include<iostream>
#include<string>
#include <array>
using namespace std;
int main()
{
    string Constellations[12][2]=
    {{"Capricorn","Aquarius"},//1
     {"Aquarius","Pisces"},//2
     {"Pisces","Aries"},//3
     {"Aries","Taurus"},//4
     {"Taurus","Gemini"},//5
     {"Gemini","Cancer"},//6
     {"Cancer","Leo"},//7
     {"Leo","Virgo"},//8
     {"Virgo","Libra"},//9
     {"Libra","Scorpio"},//10
     {"Scorpio","Sagittarius"},//11
     {"Sagittarius","Capricorn"}};//12
    int ConstellDate[12]=
    {20,19,21,20,21,22,23,23,23,24,23,22};
    int monthdays[12]=
    {31,28,31,30,31,30,31,31,30,31,30,31};
    int bmonth,bday,command;
    int day=2;
    int month=9;
	string name,con;
    string weekday[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    array<int,5> base;
	cout<<"Name:";
    cin>>name;
    cout<<"Birth:";
    cin>>bmonth>>bday;
    con=Constellations[bmonth-1]
    [bday/ConstellDate[bmonth-1]];
    if(con=="Capricorn")//1
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Aquarius")//2
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Pisces")//3
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Aries")//4
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Taurus")//5
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Gemini")//6
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Cancer")//7
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Leo")//8
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Virgo")//9
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Libra")//10
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Scorpio")//11
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }else if (con=="Sagittarius")//12
    {
        base[0]=80;base[1]=80;base[2]=80;
        base[3]=80;base[4]=80;
    }
    cout<<"It's 2019. You're a high school student in Liuzhou High School"<<endl;
    cout<<"***********Game Start**********"<<endl;
    for(int weeks=1;weeks<=20;weeks++)
    {
        for(int weekdays=1;weekdays<=7;weekdays++,day++)
        {
            if(day==monthdays[month-1])
            {
                day=1;
                if(month==12) month=1;
                else month++;
            }
            if(month==10&&day<=7)
            {
                //holiday
            }else
            loop:
            switch (weeks)
            {
            case 1:
                cout<<"Today is "<<weekday[weekdays-1]<<" the 1st week"<<endl;
                break;
            case 2:
                cout<<"Today is "<<weekday[weekdays-1]<<" the 2nd week"<<endl;
                break;
            case 3:
                cout<<"Today is "<<weekday[weekdays-1]<<" the 3rd week"<<endl;
                break;
            default :
                cout<<"Today is "<<weekday[weekdays-1]<<" the "<<weeks<<"th week"<<endl;
                break;
            }
            cout<<"1.Information"<<endl;
            cout<<"2.Schedule"<<endl;
            cout<<"3.Save"<<endl;
            cout<<"4.Load"<<endl;
            cout<<"5.Exit"<<endl;
            cin>>command;
            switch(command)
            {
                case 1:
                    cout<<"Your information\n"
                    <<"Name:"<<name
                    <<"\nBirth:"<<bmonth<<"."<<bday
                    <<"\nConstellation:"<<con<<endl;
                    for(int i=0;i<5;i++)
                        cout<<base[i]<<endl;
                    cout<<"************************************"<<endl;
                    goto loop;
                    break;
                case 2:
                    cout<<"1.Learning"<<endl;
                    cout<<"2.Talking"<<endl;
                    cout<<"3.Save"<<endl;
                    cout<<"4.Load"<<endl;
                    cin>>command;
                    switch (command)
                    {
                    case 1:
                        cout<<"Learning"<<endl;
                        cout<<"************************************"<<endl;
                        break;
                    case 2:
                        cout<<"Talking"<<endl;
                        cout<<"************************************"<<endl;
                        break;
                    default:
                        break;
                    }
                    break;
                case 5:
                    goto exit;
                    break;
            }
        }
    }
    exit:
    return 0;
}
