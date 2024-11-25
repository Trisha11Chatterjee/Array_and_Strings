/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    cout << areAnagrams("listen", "silent") << endl;  // 1 (true)
    cout << areAnagrams("hello", "world") << endl;    // 0 (false)
    return 0;
}

