#include <iostream>
using namespace std;

int main() {
    int l = 0, s = 0, d = 0, o = 0;
    char c;
    cout << "输入一行字符（按回车结束）：" << endl;
    while ((c = cin.get()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            l++;
        }
        else if (c == ' ') {
            s++;
        }
        else if (c >= '0' && c <= '9') {
            d++;
        }
        else {
            o++;
        }
    }
    cout << "字母：" << l << endl;
    cout << "空格：" << s << endl;
    cout << "数字：" << d << endl;
    cout << "其他：" << o << endl;
    return 0;
}