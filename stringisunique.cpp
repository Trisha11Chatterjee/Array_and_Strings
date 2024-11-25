/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

bool isUnique(string s) {
    sort(s.begin(), s.end());
    for (size_t i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1])
            return false;
    }
    return true;
}

int main() {
    cout << isUnique("abcdef") << endl;  // 1 (true)
    cout << isUnique("aabbcc") << endl;  // 0 (false)
    return 0;
}
