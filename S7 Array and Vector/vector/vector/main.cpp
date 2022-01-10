#include <iostream>
#include <vector>

using namespace std;


int main()
{

cout << "vector <int> vectorTest {1,2,3,4};" << endl;

    vector <int> vectorTest {1,2,3,4};

  /*  cout << "cout array" << endl;
    cout << vectorTest[0] << endl;
    cout << vectorTest[1] << endl;
    cout << vectorTest[2] << endl;
    cout << vectorTest[3] << endl;
    */
  /*  cout << "------VECTOR-------------------------------------------" << endl;
    cout << "cout vector" << endl;
    cout << vectorTest.at(0) << endl;
    cout << vectorTest.at(1) << endl;
    cout << vectorTest.at(2) << endl;
    cout << vectorTest.at(3) << endl;


    cout << "--------Update elements------------------------------" << endl;
    // vector
    cin >> vectorTest.at(0); // cin update element in {0}
    cin >> vectorTest.at(1); // cin update element in {1}

    cout << vectorTest.at(0) << " Update element in {0}: " << endl;
    cout << vectorTest.at(1) << " Update element in {1}: " << endl;
    cout << vectorTest.at(2) << endl;
    cout << vectorTest.at(3) << endl;
    cout << "-----------push_back---------------------------------" << endl;


    cout << "element in {0}: " << vectorTest.at(0) << " (Updated element)" << endl;
    cout << "element in {1}: " << vectorTest.at(1) << " (Updated element)" << endl;
    cout << "element in {2}: " << vectorTest.at(2) << endl;
    cout << "element in {3}: " << vectorTest.at(3) << endl;
*/


    cout << "-----------ADD TO THE VECTOR ---------------------------------" << endl;



    cout << "Update {0} place: ";
    cin >> vectorTest.at(0);

    cout << "Update {1} place: ";
    cin >> vectorTest.at(1);

    int add_element {0};
    cout << "Enter to push_back: ";
    cin >> add_element;
    vectorTest.push_back(add_element);


    cout << "Enter one more to push_back: ";
    cin >> add_element;
    vectorTest.push_back(add_element);

    cout << "element in {0}: " << vectorTest.at(0) << " (Updated element)" << endl;
    cout << "element in {1}: " << vectorTest.at(1) << " (Updated element)" << endl;
    cout << "element in {2}: " << vectorTest.at(2) << endl;
    cout << "element in {3}: " << vectorTest.at(3) << endl;
    cout << "element in {4}: " << vectorTest.at(4) << " (This is push_back by cin)" << endl;
    cout << "element in {5}: " << vectorTest.at(5) << " (This is push_back by cin)" << endl;
    cout << "size() There are " << vectorTest.size() << " elements" << endl;

    return 0;
}


/*

#include <vector>
using namespace std;

vector<int> use_vector() {
    //----WRITE YOUR CODE BELOW THIS LINE----

    vector <int> vec {10,20,30,40,50};
    vec.at(0) = 100;
    vec.at(4) = 1000;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----NO NOT MODIFY THE CODE BELOW THIS LINE----
    return vec;
}

*/
