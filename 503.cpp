#include <iostream>
using namespace std;

class Cuboid 
{
private:
    double length;  
    double width;   
    double height;  

public:
   void inputDimensions()
    {
        cout << "请输入长方体的长、宽、高：" << endl;
        cin >> length >> width >> height;
    }

    double calculateVolume() const
    {
        return length * width * height;
    }

   void outputVolume() const
    {
        cout << "长方体体积：" << calculateVolume() << " 立方单位" << endl;
    }
};

int main()
{
    Cuboid cuboid1, cuboid2, cuboid3; 

    cout << "\n=== 第1个长方体 ===" << endl;
    cuboid1.inputDimensions();
    cuboid1.outputVolume();

    cout << "\n=== 第2个长方体 ===" << endl;
    cuboid2.inputDimensions();
    cuboid2.outputVolume();

    cout << "\n=== 第3个长方体 ===" << endl;
    cuboid3.inputDimensions();
    cuboid3.outputVolume();

    return 0;
}