/* 房地产管理 简单的数组OOP思想编程，自下而上*/
#include <iostream>
const int Max = 5;
int fill_array(double ar[], int limit); // 数值输入
void show_array(const double ar[], int n);  //禁止修改
void revalue(double r, double ar[], int n);

int main()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // 负数输入
        {
            cin.clear();    // failbit = 0
            while (cin.get() != '\n')   // 如非换行符即输入有效字符，进入循环，然后跳过本次循环直到遇见换行符，意味本次输入结束，即清空缓存
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();  // 再按一下回车退出
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for( i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ":";
        cin >> temp;
        if (!cin)   // 判定是否有效输入
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)  //若输入小于0则退出循环，结束输入
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}