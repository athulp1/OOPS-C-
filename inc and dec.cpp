#include<iostream>
using namespace std;

int main()
{
    int n,pd,pi,pred,prei;
    cout<<"enter the number"<<endl;
    cin>>n;

     int ch;
    cout<<"1=pre-incremt"<<endl<<"2=pre-decrement"<<endl<<"3=post-increment"<<endl<<"4=post-decrement";
    cin>>ch;

    switch(ch)
    {
        case 1 : cout<<"u are selected pre increment"<<endl;
          prei=++n;
          cout<<prei<<endl;
            break;


        case 2 : cout<<"u are selected pre decrement"<<endl;
             pred= 1-n;
             cout<<pred<<endl;
              break;


        case 3 : cout<<"u are selected post increment "<<endl;
                pi= n+1;
                 cout<<pi<<endl;
                  break;


        case 4 :cout<<"u are selected post decrement"<<endl;
             pd=n-1;
             cout<<pd<<endl;
                  break;



    }



}
