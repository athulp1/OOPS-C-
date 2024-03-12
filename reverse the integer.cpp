#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of digit"<<endl;
    cin>>n;

    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
      cout<<" "<<i+1<< " number ";
      cin>>a[i];
    }

    for(i=n-1;i>=0;i--)
    {
      cout<<a[i];

    }
}
