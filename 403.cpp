#include <iostream>
using namespace std;

int main() {
    const int NUM_LOCKERS = 100;
    bool lockers[NUM_LOCKERS] = { false }; 

    for (int student = 1; student <= NUM_LOCKERS; student++) {                      
        for (int locker = student - 1; locker < NUM_LOCKERS; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }

    cout << "打开的储物柜编号：";
    bool first = true;
    for (int i = 0; i < NUM_LOCKERS; i++) {
        if (lockers[i]) {
            if (!first) {
                cout << " ";
            }
            cout << i + 1; 
            first = false;
        }
    }
    cout << endl;

    return 0;
}