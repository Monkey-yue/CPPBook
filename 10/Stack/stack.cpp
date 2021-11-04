// 简单的构建
#include "stack.h"
Stack::Stack()
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if(top < MAX)
    {
        items[top++] = item;    // 往栈中添加，并向上
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = items[--top]; // 读取指针下一个数据，并将其弹出
        return true;
    }
    else    
        return false;
}
