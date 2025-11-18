
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "输入a：";
    cin >> a;

    if (a < 0) {
        cout << "a为负数，平方根为虚数，程序退出" << endl;
        return 0;
    }

    double xn = a; 
    double xn1;
    do {
        xn1 = 0.5 * (xn + a / xn);
        double temp = xn;
        xn = xn1;
        xn1 = temp;
    } while (fabs(xn - xn1) >= 1e-5); 
cout << "平方根：" << xn <<endl;
    return 0;
}