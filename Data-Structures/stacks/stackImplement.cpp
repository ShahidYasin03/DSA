#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr;
    int top;

public:
    int size = 300;
    Stack()
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    bool isEmplty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top >= size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int peek()
    {
        if (Stack::isEmplty() != true)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }
    void push(int x)
    {
        if (!Stack::isFull())
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack overflow \n";
        }
    }
    void pop(char *ch)
    {
        if (!Stack::isEmplty())
        {
            arr[top] = *ch;
            top--;
        }
    }
};
int main()
{
    Stack s1, s2;
    char input[200];
    cin.getline(input, 200);
    for (auto c : input)
    {
        s1.push(c);
    }
    char output[10];
    for (int i = 0; i < 10; i++)
    {
        char ch;
        s2.pop(&ch);
        output[i] = ch;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << output[i];
    }
}