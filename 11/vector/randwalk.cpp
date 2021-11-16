#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vector.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;    // 步长
    double target;
    double dstep;
    cout << "Enter target distance (q to quit)";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if(!(cin >> dstep)) // 输入的不是数字则退出
            break;
        while (result.magval() < target)    // 模拟走到目标
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;  // 极坐标表示
        cout << "Average outward distance per step = "
                <<  result.magval()/steps << endl;  //  平均每步走多长
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}