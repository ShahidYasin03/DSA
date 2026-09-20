#include <iostream>
using namespace std;

class queue
{
public:
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int front = 0;
    int rear = 0;
    int elements = 0;

    bool isEmpty()
    {
        return elements == 0;
    }

    bool isFull()
    {
        return elements >= 6;
    }

    bool enqueue(const int n)
    {
        if (!isFull())
        {
            arr[rear] = n;
            rear = (rear + 1) % 6; // Use modulo to handle wrap-around
            elements++;
            return true;
        }
        return false;
    }

    bool dequeue(int &output)
    {
        if (!isEmpty())
        {
            output = arr[front];
            front = (front + 1) % 6; // Use modulo to handle wrap-around
            elements--;
            return true;
        }
        return false;
    }
};

class Stack : public queue
{
private:
    queue q1;
    queue q2;

public:
    bool isEmpty()
    {
        return q1.isEmpty() && q2.isEmpty();
    }

    bool isFull()
    {
        return q1.isFull() && q2.isFull();
    }

    bool push(int ch)
    {
        q1.enqueue(ch);
    }

    bool pop(int &ch)
    {
        if (q2.isEmpty())
        {
            while (!q1.isEmpty())
            {
                int chara;
                q1.dequeue(chara);
                q2.enqueue(chara);
            }
        }

        return q2.dequeue(ch);
    }
};

int main()
{
    Stack s;
    s.push(7);

    int c;
    s.pop(c);
    cout << c;
}