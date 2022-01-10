#include <iostream>
#include <vector>

using namespace std;


int main()
{

    // assign vector

vector <int> vectorTest {1,2,3,4};

    cout << "cout array" << endl;
    cout << vectorTest[0] << endl;
    cout << vectorTest[1] << endl;
    cout << vectorTest[2] << endl;
    cout << vectorTest[3] << endl;




    cout << "cout vector" << endl;
    cout << vectorTest.at(0) << endl;
    cout << "--------Update elements------------------------------" << endl;
    // vector
    cin >> vectorTest.at(0); // cin change element in {0}
    cin >> vectorTest.at(1); // cin change element in {1}
    cout << "change element in {0}: " << vectorTest.at(0) << endl;
    cout << "change element in {1}: " << vectorTest.at(1) << endl;
    cout << "-----------push_back---------------------------------" << endl;

    vectorTest.push_back(321);
    vectorTest.push_back(456);
    cout << "element in {0}: " << vectorTest.at(0) << " (Updated element)" << endl;
    cout << "element in {1}: " << vectorTest.at(1) << " (Updated element)" << endl;
    cout << "element in {2}: " << vectorTest.at(2) << endl;
    cout << "element in {3}: " << vectorTest.at(3) << endl;
    cout << "element in {4}: " << vectorTest.at(4) << " (This is push_back)" << endl;
    cout << "element in {5}: " << vectorTest.at(5) << " (This is push_back)" << endl;







    return 0;
}
