#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item; // 声明字符类型 方便后续修改变量类型

class Stack
{
    private:
        enum {MAX = 10};    // 常规枚举
        Item items[MAX];
        int top;
    
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(const Item & item);   // 如果满栈，则返回false
        bool pop(Item & item);
};;

#endif