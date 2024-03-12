#include<iostream>
using namespace std;

float n;
int main()
{


cout << "enter the temprature"<<endl;
cin>>n;

int ch;
cout<<"select temprature is celsius or in fahrenheit"<<endl;
cout<<"1=celsius "<< "  "<<"2=fahrenheit"<<endl;
cin>>ch;
float temp,temp2;
switch(ch)
{

    case 1 : cout<<"u are selected in celsius"<<endl;
             temp=(n*9/5)+32;
             cout<<temp<<" fahrenheit";
              break;

    case 2 : cout<<"u are selected in fahrenheit "<<endl;
             temp2= (n - 32) * 5/9;
             cout<<temp2<<" celsius";
               break;
}
}
