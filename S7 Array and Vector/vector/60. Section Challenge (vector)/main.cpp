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
    // cout << "I've got total memers: " << name_array.size(); // can use only in  vector

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
     // cout << "this statement gonna crash:  " << name_vector.at(10);


      vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

     cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;
    cout << movie_ratings.at(2).at(0) << endl;
    cout << movie_ratings.at(2).at(1) << endl;
    cout << movie_ratings.at(2).at(2) << endl;
    cout << movie_ratings.at(2).at(3) << endl;

    cout << endl;











    return 0;
}

