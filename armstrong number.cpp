#include<iostream>
#include<math.h>
using namespace std;


int main()
{
     int num, remainder, result = 0, n = 0;
    cout<<"enter the number"<<endl;
    cin>>num;

    int temp = num;
    while (temp != 0)
        {
        //temp /= 10;
        temp=temp/10;
        n++;
        }
         temp = num;

    while (temp != 0) {
        remainder = temp % 10;
      // result = result +remainder * remainder * remainder ;
         result = result +pow(remainder,n) ;
        temp=temp/10;


    }

 if (result == num)
        cout<< num<<" is an Armstrong number";
    else
        cout <<num<<"%d is not an Armstrong number";

    return 0;


}
