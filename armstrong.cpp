#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;

    int temp1=n;
  int c=0;
  while(temp1!=0)
  {
      temp1=temp1/10;
      c++;
  }
   int temp2=n;
   while(temp2!=0)
   {
       rem=temp2%10;
       sum=sum+pow(rem,c);
       temp2=temp2/10;


   }

if(sum==n)
{
    cout<<"this is armstrong";

}
else{
    cout<<"not armstrong";
}
}
