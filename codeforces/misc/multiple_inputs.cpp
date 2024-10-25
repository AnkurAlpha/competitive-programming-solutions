#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string st;
    getline(cin,st); // read entire input line as a string , if you won't
                     // use getline , then the data after space will not be count

    stringstream ss(st) ; // we create a stringstream object ss to parse the input string
    int num ;
    vector<int> number;
    while (ss >> num ) { // here we are extracting integers from stringstream
        number.push_back(num);
    }
    for (int i : number) {
        cout << i << " " ;
    }
    cout << endl ;

}


// some extra notes
/*

Parsing an input string means breaking it down into smaller,
meaningful components and extracting the information you need.

It's like dissecting a sentence to understand its individual words and their meaning.

In the context of your example, parsing the input string "10 9 8 7 7 7 5 5" involves:

Breaking the string into smaller parts:
    You identify that the string contains a sequence of numbers separated by spaces.
    You can break it down into individual numbers using a delimiter like whitespace.

Converting the parts into a usable format:
    Once you have the individual numbers, you convert them from strings to integers
    so that you can perform calculations or other operations on them.

*/
