#include <iostream>
#include <string>
using namespace std;

string max(string p, string q) {
    return (p > q) ? p : q;
}

string max(string p, string q, string r) {
    return max(max(p, q), r);
}

int main() {
    string str1, str2, str3;
    cout << "Enter three strings: ";
    cin >> str1 >> str2 >> str3;

    cout << "The maximum string is: " << max(str1, str2, str3) << endl;

    return 0;
}
