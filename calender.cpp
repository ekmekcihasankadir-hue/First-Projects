#include<iostream>

using namespace std;
main(){
string month;
cout<<"enter a month\n";
cin>>month;
int number;
if(month == "january")
{number = 1; cout<<"\njanuary";}
else if(month == "february")
{ number=2;cout<<"\nfebruary";}
else if(month == "march")
{ number=3;cout<<"\nmarch";}
else if(month == "april")
{number=4;cout<<"\napril";}
else if(month == "may")
{number=5;cout<<"\nmay";}
else if(month == "june")
{ number=6;cout<<"\njune";}
else if(month == "july")
{ number=7;cout<<"\njuly";}
else if(month == "august")
{ number=8;cout<<"\naugust";}
else if(month == "september")
{ number=9;cout<<"\nseptember";}
else if(month == "october")
{ number=10;cout<<"\noctober";}
else if(month == "november")
{ number=11;cout<<"\nnovember";}
else if(month == "december")
{ number=12;cout<<"\ndecember";}
else{number = 0;cout<<"that is not a month";}


switch(number){
case (0):cout<<" ,so it has no day";break;
case (1): 
case (3):
case (5): 
case (7):
case (8):
case (10):
case (12):cout<<" has 31 days";break;
case (2):cout<<" has 28 or 29 days";break;
default :cout<<" has 30 days";break;

}





    return 0;
}