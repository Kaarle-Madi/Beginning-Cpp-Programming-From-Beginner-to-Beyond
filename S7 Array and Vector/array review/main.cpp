#include <iostream>

using namespace std;

int main()
{
    // array
    int x[4]{0,1,2};
   /* cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;

    cout << x[3] << endl; // 0
    cout << x[4] << endl; // depon\\
    cout << x << endl; // 0x61fe44 <-- address of x in memory.
    */
    cin >> x[0];
    cin >> x[1];
    cin >> x[10]; // just don't print in screen
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;

    char vowels[] {'a','e','i','o','u'};
    cout << "first: " << vowels[0] << endl;
    cout << "last: " << vowels[4] << endl;

    return 0;
}
