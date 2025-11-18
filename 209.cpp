#include <iostream>
using namespace std;

int main() {
    const double p = 0.8;
    int c = 2;
    double tC = c * p;
    int day = 1;

    while (true) {
        int nC = c * 2;
        if (nC> 100) {
            break;
        }
        c = nC;
        tC += c * p;
        day++;
    }
double avg = tC / day;
    cout << "总天数：" << day << endl;
    cout << "总花费：" << tC << "元" << endl;
    cout << "每天平均花费：" << avg << "元" << endl;
    return 0;
}