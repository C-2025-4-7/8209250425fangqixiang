#include <iostream>
using namespace std;

int main() {
    int distinct[10];  
    int count = 0;     

    cout << "Enter ten nunmbers: ";

     for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        bool exists = false;
        for (int j = 0; j < count; j++) {
            if (distinct[j] == num) {
                exists = true;
                break;
            }
        }

      
        if (!exists) {
            distinct[count] = num;
            count++;
        }
    }


    cout << "The distinct numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << distinct[i] << " ";
    }
    cout << endl;

    return 0;
}