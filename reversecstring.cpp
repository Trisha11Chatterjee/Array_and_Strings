/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

void reverseCString(char* str) {
    if (!str) return;

    char* end = str;
    while (*end) ++end;  // Move to null character
    --end;               // Move to last character

    while (str < end) {
        swap(*str, *end);
        ++str;
        --end;
    }
}

int main() {
    char s[] = "abcd\0";
    reverseCString(s);
    cout << s << endl;  // Output: "dcba"
    return 0;
}

