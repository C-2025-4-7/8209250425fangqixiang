#include <iostream>
using namespace std;

class Point
{
private:
    int x;  
    int y;  

public:
    Point()
    {
        x = 60;
        y = 80;
    }

    void setPoint(int i, int j)
    {
        x = 60 + i;
        y = 80 + j;
    }

    void display()
    {
        cout << "坐标值: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p;

    cout << "初始坐标：" << endl;
    p.display();

    cout << "\n测试setPoint函数：" << endl;

    p.setPoint(0, 0);
    cout << "修改为(60+0,80+0): ";
    p.display();

    p.setPoint(10, 20);
    cout << "修改为(60+10,80+20): ";
    p.display();

    p.setPoint(-5, -10);
    cout << "修改为(60-5,80-10): ";
    p.display();

    return 0;
}