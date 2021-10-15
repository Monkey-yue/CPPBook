/* 返回 C- 风格字符串 */
#include <iostream>
char * buildstr(char c, int n);
int main()
{
    using namespace std;
    int times;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an interger: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;
    
    ps = buildstr('+', 20);
    cout << ps << "-Done-" << ps << endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];  // 创建n个字符的字符串，需要由 n+1 个字符空间，方便存储空字符
    pstr[n] = '\0';
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}