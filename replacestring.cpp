/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string replaceSpaces(string s) {
    string result;
    for (char c : s) {
        if (c == ' ')
            result += "%20";
        else
            result += c;
    }
    return result;
}

int main() {
    cout << replaceSpaces("Mr John Smith") << endl;  // "Mr%20John%20Smith"
    return 0;
}
