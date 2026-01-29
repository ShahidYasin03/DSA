#include <iostream>
#include <vector>
using namespace std;
void mx(vector<int> x)
{
    int m = INT_MIN;
    for(int i = 0; i < x.size(); i++)
    {
        if(x[i] > m)
        {
            m = x[i];
        }
    }
}


int main()
{

}