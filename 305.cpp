#include <iostream>
using namespace std;

int peaches_on_day(int day) {
   if (day == 10) {
        return 1;
    }

    return (peaches_on_day(day + 1) + 1) * 2;
}

int main() {
    int total = peaches_on_day(1);
    cout << "第一天猴子摘了 " << total << " 个桃子" << endl;


    return 0;
}