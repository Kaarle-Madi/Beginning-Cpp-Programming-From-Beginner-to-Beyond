#include <iostream>
#include <vector>

using namespace std;


int main()
{


    vector <int> vectorTest {1,2,3,4};
    cout << "cout array" << endl;
    cout << vectorTest[0] << endl;
    cout << vectorTest[1] << endl;
    cout << vectorTest[2] << endl;
    cout << vectorTest[3] << endl;

    cout << "cout vector" << endl;
    cout << vectorTest.at(0) << endl;
    cout << vectorTest.at(1) << endl;
    cout << vectorTest.at(2) << endl;
    cout << vectorTest.at(3) << endl;
    return 0;
}
