#include <iostream>
using namespace std;
int main()
{
    string names []= {"Shahid", "Zaid","Ateeq"};

    for(int i = 0; i < size(names);i++)
    {
        if ("Shahid" == names[i])
        {
            cout<<"Found"<<endl;
            return 0;
        }

    }
    cout<<"Not found"<<endl;
    return 0;
}