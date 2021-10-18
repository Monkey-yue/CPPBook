#include <iostream>
unsigned long left(unsigned long num, unsigned);
char * left(const char * str, int n = 1);

int main()
{
    using namespace std;
    char * trip = "Hawaii!!";
    unsigned long n = 123456789;
    int i;
    char * temp;

    for ( i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip, i);
        cout << temp << endl;
        delete [] temp;
    }
    return 0;
}

unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
        return 0;
    while (n /= 10) // 判断n有几位
        digits++;
    if (digits > ct)    // 位数大于要求的位数
    {
        ct = digits - ct;   // 判定需要舍去几位
        
        while (ct--)
            num /= 10;  
        return num;
    }
    else
        return num;
}

char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i];i++)
        p[i] = str[i];
    
    while (i <= n)  // 不满，填空白
        p[i++] = '\0';
    return p;
}