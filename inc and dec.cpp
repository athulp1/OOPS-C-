#include<iostream>
using namespace std;

int main()
{
    int n, pd, pi, pred, prei;
    cout << "Enter the number: ";
    cin >> n;

    int ch;
    cout << "1=pre-increment\n2=pre-decrement\n3=post-increment\n4=post-decrement\n";
    cin >> ch;

    switch(ch)
    {
        case 1:
            cout << "You selected pre increment\n";
            prei = ++n;
            cout << "Result: " << prei << endl;
            break;
        case 2:
            cout << "You selected pre decrement\n";
            pred = --n;
            cout << "Result: " << pred << endl;
            break;
        case 3:
            cout << "You selected post increment\n";
            pi = n++;
            cout << "Result: " << pi << endl;
            break;
        case 4:
            cout << "You selected post decrement\n";
            pd = n--;
            cout << "Result: " << pd << endl;
            break;
        default:
            cout << "Invalid choice\n";
    }

    return 0;
}

