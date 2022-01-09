#include <iostream>
using namespace std;

int main(){
/*
char vowels [] {'a','e','i','o','u'};
cout << "The first vowels is " << vowels[0] << endl;
cout << "The last vowels is " << vowels[4] << endl;

cin >> vowels[5]; // crash!
*/

// int test_scores[5] {};
// initialize by "{}" = 0
// if no {} it will be junk value
// if put a number i will take zero element.
int test_scores[] {100, 90, 80, 70, 60};

cout << "First score at index 0: " << test_scores[0] << endl;
cout << "First score at index 1: " << test_scores[1] << endl;
cout << "First score at index 2: " << test_scores[2] << endl;
cout << "First score at index 3: " << test_scores[3] << endl;
cout << "First score at index 4: " << test_scores[4] << endl;


cin >> test_scores[0];
cin >> test_scores[1];
cin >> test_scores[2];
cin >> test_scores[3];
cin >> test_scores[4];

cout << "\n" << "The updated array is:" << endl;
cout << "\n" << "First score at index 0: " << test_scores[0] << endl;
cout << "\n" << "Scond score at index 1: " << test_scores[1] << endl;
cout << "\n" << "Third score at index 2: " << test_scores[2] << endl;
cout << "\n" << "Fourth score at index 3: " << test_scores[3] << endl;
cout << "\n" << "Fifth score at index 4: " << test_scores[4] << endl;

cout << "\nNotice what the value of array name is: " << test_scores << endl;
//You get some hexadecimal number.
//That number is actually the memory address or the storage location where the array is located.



return 0;
}

