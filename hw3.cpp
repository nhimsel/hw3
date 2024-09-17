#include <iostream>

using namespace std;

int main()
{
    //Part 1
    bool isRainy = true;
    
    if (isRainy)
    {
        cout << "Bring an umbrella!" << endl;
    }

    else
    {
        cout << "Enjoy the sunshine!" << endl;
    }

    //Part 2
    int x = 21;
    int y = -2;

    if (x>y)
    {
        cout << "x is greater than y" << endl;
    }

    else if (x==y)
    {
        cout << "x is equal to y" << endl;
    }

    else
    {
        cout << "x is less than y" << endl;
    }

    return 0;
}