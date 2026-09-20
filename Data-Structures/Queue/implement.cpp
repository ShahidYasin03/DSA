#include <iostream>
using namespace std;
class que
{
    private:
    int *arr;
    int size;
    int front;
    int rear;
    public:
    que(int size)
    {
        this ->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isemplty(){
        if(front == rear)
        {
            return true;
        }else{
            return false;
        }
    }
    bool isfull(){
        if(front != rear)
        {
            return true;
        }else{
            return false;
        }
    }
    void Enqueue(int x)
    {
        if(!isfull())
        {
            arr[rear] = x;
            rear++;
        }
    }
    void deQueue()
    {
        if (!isemplty())
        {
            
        }
        
    }



};
int main()
{

}