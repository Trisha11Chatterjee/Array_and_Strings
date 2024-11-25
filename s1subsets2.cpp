/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;
    string concat = s1 + s1;
    return concat.find(s2) != string::npos;
}

int main() {
    cout << isRotation("waterbottle", "erbottlewat") << endl;  // 1 (true)
    cout << isRotation("hello", "lohel") << endl;             // 1 (true)
    cout << isRotation("hello", "world") << endl;             // 0 (false)
    return 0;
}
