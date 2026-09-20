#include <iostream>
using namespace std;
class Stack
{
private:
    int top1;
    int top2;
    int size;
    int *arr;

public:
    Stack() {}

    Stack(int s)
    {
        size = s;
        arr = new int[size];
        top1 = -1;
        top2 = (size / 2);
    }

    bool isEmplty1()
    {
        if (top1 == -1)
        {
            return false;
        }
        else
            return true;
    }

    bool isFull1()
    {
        if (top1 == (size / 2) - 1)
        {
            return true;
        }
        else
            return false;
    }

    void push1(int x)
    {
        cout<<"Push1"<<endl;
        if (!(isFull1()))
        {
            arr[top1] = x;
            top1++;
        }
    }

    void peek1()
    {
        // if (!(isEmplty1()))
        // {
            
            cout << arr[top1] << endl;
        // }
    }

    void pop1()
    {
        if (!(isEmplty1()))
        {
            top1--;
        }
    }

    // bool isEmplty2()
    // {
    //     if (top2 == (size / 2))
    //     {
    //         return false;
    //     }
    //     else
    //         return true;
    // }

    // bool isFull2()
    // {
    //     if (top1 == size - 1)
    //     {
    //         return true;
    //     }
    //     else
    //         return false;
    // }

    // bool push2(int x)
    // {
    //     if (!(isFull2()))
    //     {
    //         arr[top2++] = x;
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    // void peek2()
    // {
    //     if (!(isEmplty2()))
    //     {
    //         cout<<arr[top2]<<endl;
    //     }
    // }

    // bool pop2()
    // {
    //     if (!(isEmplty2()))
    //     {
    //         top2--;
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }
};

int main()
{
    Stack obj(100);

    obj.push1(10);
    obj.push1(20);
    obj.pop1();
    obj.peek1();

    // obj.push2(30);
    // obj.push2(30);
    // obj.push2(30);
    // obj.peek2();

    return 0;
}