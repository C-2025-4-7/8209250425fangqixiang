#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2) {
   for (int i = 0; s2[i] != '\0'; i++) {
        int j = 0;
        while (s1[j] != '\0' && s2[i + j] != '\0' && s1[j] == s2[i + j]) {
            j++;
        }

        if (s1[j] == '\0') {
            return i;
        }
    }

    return -1;
}

int main() {
    char s1[100], s2[100];

    cout << "请输入字符串s1: ";
    cin >> s1;

    cout << "请输入字符串s2: ";
    cin >> s2;

    int position = indexof(s1, s2);

   if (position >= 0) {
        cout << "s1是s2的子串，第一次匹配的下标是: " << position << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }

    return 0;
}