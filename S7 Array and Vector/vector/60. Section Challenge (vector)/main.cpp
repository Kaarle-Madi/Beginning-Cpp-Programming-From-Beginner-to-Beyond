#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // self review array.
  int name_array[3] {10,20,30};
  cout << "----- Array  elements -----" << endl;
    cout << name_array[0] << endl;
    cout << name_array[1] << endl;
    cout << name_array[2] << endl;

    cout << "----- Update  Array  elements -----" << endl;
    /*name_array[0] = 100;
    name_array[1] = 200;
    name_array[2] = 300;
    */
    cin >> name_array[0];
    cin >> name_array[1];
    cin >> name_array[2];

    cout << name_array[0] << endl;
    cout << name_array[1] << endl;
    cout << name_array[2] << endl;

    cout << "I'm array, this's my address in memeory:  " << name_array << endl;
    // cout << "I've got total memers: " << name_array.size(); // only vector

    cout << "-----  Vector  elements -----" << endl;
    vector <int> name_vector {10,20,30};
    cout << name_vector.at(0) << endl;
    cout << name_vector.at(1) << endl;
    cout << name_vector.at(2) << endl;

    cout << "I've got  " << name_vector.size() << " members" << endl;
    cout << "----- Update Vector element -----" << endl;
/*  name_vector.at(0) = 100;
     name_vector.at(1) = 200;
     name_vector.at(2) = 300; */
     cin >> name_vector.at(0);
     cin >> name_vector.at(1);
     cin >> name_vector.at(2);

     cout << name_vector.at(0) << endl;
     cout << name_vector.at(1) << endl;
     cout << name_vector.at(2) << endl;










    return 0;
}

