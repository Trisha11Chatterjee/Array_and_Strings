/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string s) {
    int writeIndex = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        bool found = false;
        for (size_t j = 0; j < writeIndex; ++j) {
            if (s[i] == s[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            s[writeIndex++] = s[i];
        }
    }
    return s.substr(0, writeIndex);
}

int main() {
    cout << removeDuplicates("abca") << endl;  // "abc"
    cout << removeDuplicates("aabbcc") << endl;  // "abc"
    return 0;
}


