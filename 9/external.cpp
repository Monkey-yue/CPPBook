#include <iostream>
using namespace std;

double warming = 0.3;// 静态持续变量，外链接

void update(double dt);
void local();

int main()
{
    cout << "Hlobal warming is " << warming << " degress.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degress.\n";
    local();
    cout << "Global warming is " << warming << " degress.\n";
    return 0;
}
