/* 使用数组区间函数 */
#include <iostream>
const int ArSize = 8;
int sum_arr(const int * begin, const int * end);

int main()
{
    using namespace std;
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};

    int sum = sum_arr(cookies, cookies + ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, cookies + 3);    // 数组区间 
    cout << "Firlst three eaters ate " << sum << " cookies.\n";
    return 0;
}

int sum_arr(const int * begin, const int * end)
{
    const int * pt;
    int total = 0;

    for (pt = begin;pt != end; pt++)
        total = total + *pt ;
    return total;
}