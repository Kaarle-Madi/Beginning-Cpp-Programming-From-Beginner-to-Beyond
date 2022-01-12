#include <iostream>
#include <vector>

using namespace std;

int main(){


vector <int> vector1 {};
vector <int> vector2 {};

int add_more;
cout << "vector1 section" << endl;
cin >> add_more;
vector1.push_back(add_more);
cout << vector1.at(0) << endl;

cin >> add_more;
vector1.push_back(add_more);
cout << vector1.at(1) << endl;

cout << "vector1.size(): " << vector1.size() << endl;

cout << "============" << endl;
cout << "vector2 section" << endl;
cin >> add_more;
vector2.push_back(add_more);
cout << vector2.at(0) << endl;

cin >> add_more;
vector2.push_back(add_more);
cout << vector2.at(1) << endl;
cout << "vector2.size(): " << vector2.size() << endl;

vector <vector<int>> vector_2d {


}


return 0;

}


/*
    vector <int> vector_practice {2,3};

    cout << "---print function---" << endl;
    cout << vector_practice.at(0) << endl;
    cout << vector_practice.at(1) << endl;


    cout << "---Update member---" << endl;
    cin >> vector_practice.at(0);
    cin >> vector_practice.at(1);
    cout << vector_practice.at(0) << endl;
    cout << vector_practice.at(1) << endl;


    cout << "--- add vector---" << endl;
    int add_vector {0};
    cout << "push_back" << endl;

    cin >> add_vector;
    vector_practice.push_back(add_vector);

    cin >> add_vector;
    vector_practice.push_back(add_vector);

    cout <<"Zero place " << vector_practice.at(0) << endl;
    cout <<"First place " <<  vector_practice.at(1) << endl;
    cout <<"Second place " << vector_practice.at(2) << endl;
    cout <<"Third place " <<  vector_practice.at(3) << endl;

    cout << "--- vector 2D ---" << endl;

    vector <vector <int>> vector_2d {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
    };

    cout << vector_2d.at(0).at(0) << endl; // 1
    cout << vector_2d.at(0).at(1) << endl; // 2
    cout << vector_2d.at(1).at(0) << endl; // 5
    cout << vector_2d.at(1).at(1) << endl; //6
    cout << vector_2d.at(0).at(2) << endl; //3
    cout << vector_2d.at(2).at(0) << endl; //9
    cout << vector_2d.at(2).at(2) << endl; //11

*/
