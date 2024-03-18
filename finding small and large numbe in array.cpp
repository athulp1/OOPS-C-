#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the digit"<<endl;
    cin>>n;


    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"u r entering "<<i<<"digit"<<endl;
        cin>>a[i];
    }

    int max=a[0],min=a[0];
for(i=a[0];i<a[i];i++)
{


    if(max<a[i])
    {
        max=a[i];
    }

}

for(i=a[0];i<a[i];i++)
{


    if(min>a[i])
    {
        min=a[i];
    }

}
cout<<"max val"<<max<<endl;
cout<<"min val"<<min<<endl;

}
