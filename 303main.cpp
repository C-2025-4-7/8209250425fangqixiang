#include <iostream>
#include "mytriangle.h"

using namespace std;

int main() {
    double a, b, c;

    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;

    if (is_valid(a, b, c)) {
   cout << "三角形面积: " << area(a, b, c) << endl;
    }
    else {
        cout << "输入的三条边不能构成三角形！" << endl;
    }

    return 0;
}