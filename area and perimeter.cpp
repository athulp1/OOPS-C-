#include<iostream>
using namespace std;

int main()
{
    int area,peri,len,wid;
    cout<<"enter the length and width"<<endl;
    cin>>len>>wid;
    area=len*wid;
    peri=2*(len+wid);
    cout<<"area of rectangle is"<<area<<endl<<"and "<<"peirmeter of rectangle is"<<peri<<endl;

}
