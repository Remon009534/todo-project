#include <iostream>
using namespace std;

int main()
{
    int todo[6];

    for(int i = 0; i < 5; i++)
    {
        cout << "Enter a todo: " << i + 1 << ":";
        cin >> todo[i];
    }
    for(int i = 0; i < 5; i++)
    {
        cout << i + 1 << "." << todo[i] << "\n";
    }

    return 0;
}