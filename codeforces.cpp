#include<iostream>
using namespace std;

int main() {
    string s;

    // Read the first string from input
    cin >> s;

    // Continue reading strings from input until there are no more
    while (cin >> s) {
        if (s.length() < 11) {
            // If the length is less than 11, print the string
            cout << s << endl;
        } else {
            // If the length is 11 or more, print the specified format
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
    }

    return 0;
}
