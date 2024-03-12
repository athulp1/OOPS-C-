#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string n;
    cout << "Enter a string: ";
    cin >> n;

    for (long unsigned int i = 0; i < n.length();i++)
        {
        char &c = n[i];
        if (islower(c))
         {
            c = toupper(c);
        } else if (isupper(c))
         {
            c = tolower(c);
        }
    }

    cout << "Converted string: " << n << endl;


}
