#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    //count
    int temp;
    int c=0;
    temp=n;
    while(temp!=0)
    {


    temp=temp/10;
    c++;
    }
    int temp2,r;
    int sum=0;
    temp2=n;

    while(temp2!=0)
    {
        r=temp2%10;
        sum=sum+pow(r,c);
        temp2=temp2/10;

    }
    if(sum==n)
    {
        cout<<"the  number is armstrong"<<endl;
    }

    else{
        cout<<"not armstrong"<<endl;
    }

}
