#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "元素个数: ";
    cin >> n;

    int* p = new int[n];

    cout << "输入" << n << "个数: ";
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(p + i) > *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    cout << "排序后: ";
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    delete[] p;

    return 0;
}