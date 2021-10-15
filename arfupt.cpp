#include <iostream>
// 三种数组作为参数
const double * f1(const double ar[], int n);
const double * f2(const double [], int);
const double * f3(const double *,int);

int main()
{
    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};

    const double * (*p1)(const double *, int) = f1;  // f1 返回的是数组名 即地址 p1里存的是f1 ,f1是函数名也是地址
    auto p2 = f2;

    cout << "Using pointers to functions:\n";
    cout << "Address Value\n";
    cout << (*p1)(av,3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av,3) << ": " << *p2(av,3) << endl;
    cout << p1 << endl;

    const double * (*pa[3])(const double *, int) = {f1, f2, f3};    // *pa[3]里存的是各数组地址
    auto pb = pa;
    cout << "\nUsing an array of pointers to functions:\n";
    cout << " Address Value\n";
    for(int i = 0; i < 3; i++)
        cout << pa[i](av,3) << ": " << *pa[i](av,3) << endl;
    
    cout << "\nUsing a pointer to a pointer to a function:\n";
    cout << " Address Value\n";
    for (int i = 0; i < 3 ;i++)
        cout << pb[i](av,3) << ": " << *pb[i](av,3) << endl;

    cout << "\nUsing pointer to an array of pointers:\n";
    cout << " Address Value\n";
    auto pc = &pa;
    cout << (*pc)[0](av,3) << ": " << *(*pc)[0](av,3) << endl;
    
    const double * (*(*pd)[3])(const double *, int) = &pa;   // 复杂版，实际上我们要访问函数地址，即数组名称例如f1就要去指向 *pa，所以构建一个pd来指向pa，如果要使用则看41
    const double * pdb = (*pd)[1](av,3);
    cout << pdb << ": " << *pdb << endl;    // 逆推，pdb是f2，即函数f2的地址
    cout << (*(*pd)[2])(av,3) << ": " << *(*(*pd)[2])(av,3) << endl;
    return 0; 
}

const double * f1(const double * ar, int n)
{
    return ar;
}

const double * f2(const double ar[],  int n)
{
    return ar+1;
}
const double * f3(const double ar[], int n)
{
    return ar+2;
}