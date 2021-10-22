#include <iostream>
#include <new>
const int BUF = 512;
const int N = 5;
char buffer[BUF];
int main()
{
    using namespace std;
    double *pd1, *pd2;
    int i;
    cout << "Calling new and palcement :\n";
    pd1 = new double[N];
    pd2 = new (buffer) double[N];   // 在buffer中分配空间给包含N个元素的 double 数组
    for(i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 20.0 * i;
    
    cout << "Memory addresses:\n" << " heap: " << pd1
        << " static: " << (void *) buffer << endl;  // 打印基础地址 buffer是char指针，所以需要（void * ） 转换，否则输出字符串
    cout << "Memory contents:\n";
    for(i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }

    cout << "\nCalling new and placement new a second time:\n";
    double *pd3, *pd4;
    pd3 = new double[N];    // 定位new返回的地址与第一个没有delete的地址相同
    pd4 = new (buffer) double[N];
    for(i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 40.0 * i;
    
    cout << "Memory contents:\n";
    for(i = 0; i < N; i++)
    {
        cout << pd3[i] << " at " << &pd3[i] << "; ";
        cout << pd4[i] << " at " << &pd4[i] << endl;
    }

    cout << "\nCalling new and placement new a third time:\n";
    delete [] pd1;
    pd1 = new double[N];    // 没有使用空闲下来的内存
    pd2 = new (buffer + N * sizeof(double)) double[N];
    for(i = 0; i < N; i++)
        pd2[i] = pd1[i] = 1000 + 60.0 * i;
    cout << "Memory contents:\n";
    for(i = 0; i < N; i++)
    {
        cout << pd1[i] << " at " << &pd1[i] << "; ";
        cout << pd2[i] << " at " << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] pd2;
    return 0;
}