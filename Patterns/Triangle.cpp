#include <iostream>
using namespace std;

int main()
{
    cout << "Triangle Pattern \n";

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << endl;

    // int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            // cout << count << " ";
            cout << (i + 1) << " ";
        }
        // count++;
        cout << endl;
    }

    cout << endl;
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            /* code */
            cout << ch << " ";
        }
        ch += 1;
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {

            cout << (j + 1) << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Reverse Traingle Pattern
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {

            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Floyd's Traingle Pattern
    int num = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    return 0;
}