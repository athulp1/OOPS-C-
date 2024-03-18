#include<iostream>
using namespace std;

int main()
{
    int sum,sub,mul,div;
    int n1,n2,ch;

    cout<<"enter the number 1"<<"\n";
   cin>>n1;

   cout<<"enter the number 2"<<endl;
    cin>>n2;

   //cout<<"enter the 2 number"<<"\n";
  // cin>>n1>>n2;
    cout<< "enter your operation 1--sum, 2--sub 3--mul 4--div"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1 : cout<<"u r selected sum";
                 sum=n1+n2;
                 cout << "\nResult: " << sum;
                 break;

        case 2 : cout<<"u r selected sub";
                 sub=n1-n2;
                 cout << "\nResult: " << sub;
                 break;

        case 3 : cout<<"u r selected mul";
                 mul=n1*n2;
                 cout << "\nResult: " << mul;
                 break;

        case 4 : cout<<"u r selected div";
                 if(n2 != 0) {
                     div=n1/n2;
                     cout << "\nResult: " << div;
                 } else {
                     cout << "\nDivision by zero is not allowed.";
                 }
                 break;

        default: cout << "Invalid operation selected.";
    }

    return 0;
}
