#include <iostream>

using namespace std;

int main()
{
    int x[10]{0};
    x[0] = 100;
    x[9] = 1000;
    cout << x[0] << " "<< x[9];


    return 0;
}
