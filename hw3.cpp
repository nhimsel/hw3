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

    //Part 3
    int i = 0;

    while (i<5)
    {
        cout << i << endl;
        i++;
    }

    int e = 0;
    do 
    {
        cout << e << endl;
        e++;
    }
    while (e<5);

    for(int o = 0; o<5; o++)
    {
        cout << o << endl;
    }

    //Part 4
    bool isLoggedIn = false;
    string password = "Password!";
    int rep = 0;

    while (!isLoggedIn && rep<3)
    {
        string temp;
        cout << "Please enter your password: " << endl;
        cin >> temp;
        if (temp == password)
        {
            isLoggedIn = true;
        }
        else if (rep<2) 
        {
            cout << "Incorrect password. Try again" << endl;
        }
        else 
        {
            cout << "Too many failed attempts. Access denied." << endl;
        }
        rep++;
    }

    return 0;
}