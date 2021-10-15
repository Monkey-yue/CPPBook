/* 计算平均每天捕获的鱼的重量 */
#include <iostream>
const int Max = 5;
int main()
{
    using namespace std;

    double fish[Max];
    cout << "Please enter the weights of your fish.\n";
    cout << "You may enter up to " << Max
            <<" fish <q to terminate>.\n";
    cout << "fish #1: ";    // fish 1 在这输出
    int i = 0;
    while (i < Max && cin >> fish[i])   // 输入数字，如果输入非数字返回false
    {
        if( ++i < Max)
            cout << "fish $" << i + 1 << ": ";
    }

    double total = 0.0;
    for (int j = 0;j < i;j++)
        total += fish[j];
    
    if (i == 0)
    cout << "No fish\n";
    else
    cout << total / i <<" =average weight of " << i << " fish\n";
    cout << "Done.\n";
    return 0;
}