#include <iostream>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;

    for (int i = 0; hexString[i] != '\0'; i++) {
        char ch = hexString[i];
        int d;

        if (ch >= '0' && ch <= '9') {
            d = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            d = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            d = ch - 'a' + 10;
        }
        else {
            continue;  
        }

        result = result * 16 + d;
    }

    return result;
}

int main() {
    cout << "parseHex(\"A5\") = " << parseHex("A5") << endl;
    cout << "parseHex(\"FF\") = " << parseHex("FF") << endl;
    cout << "parseHex(\"10\") = " << parseHex("10") << endl;
    cout << "parseHex(\"1A\") = " << parseHex("1A") << endl;
    cout << "parseHex(\"3F\") = " << parseHex("3F") << endl;
    return 0;
}