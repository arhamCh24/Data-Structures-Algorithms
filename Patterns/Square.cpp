// Command to run Code:  g++ Square.cpp && ./a.out
#include <iostream>
using namespace std;

int main()
{
    cout << "Square Pattern\n";
    for (int i = 1; i <= 4; i++) // outer
    {
        for (int j = 1; j <= 4; j++) // inner
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < 4; i++) // outer
    {
        char ch = 'A';
        for (int j = 0; j < 4; j++)
        {
            cout << ch;
            ch += 1;
        }
        cout << endl;
    }

    cout << endl;
    int count = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    cout << endl;
    char ch = 'A';

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}