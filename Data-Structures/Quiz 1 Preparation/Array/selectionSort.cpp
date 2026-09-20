// Time O(1)
// Space O(n^2)
// Use Case When size of array is small

#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int test[size] = {2, 3, 4, 1, 12};

    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (test[minIndex] > test[j])
            {
                minIndex = j;
            }
        }
        swap(test[i], test[minIndex]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << test[i] << " ";
    }
    return 0;
}