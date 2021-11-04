#include <iostream>
#include <cctype>
#include "stack.h"

int main()
{
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n" // 输入A购买商品 P弹出
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        
        if(!isalpha(ch))    // 判断是否为字母，否则返回0
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a': cout << "Enter a PO number to add:";
                        cin >> po;
                        if (st.isfull())
                            cout << "stack already full\n";
                            else
                                st.push(po);
                            break;
            case 'P':
            case 'p': if (st.isempty())
                            cout << "stack already empty\n";
                        else
                        {
                            st.pop(po);
                            cout << "PO #" << po << " popped\n";
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order,\n"
            << "p to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}