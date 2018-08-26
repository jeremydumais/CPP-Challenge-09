#include <iostream>
#include <conio.h>
#include "include/prime.h"
#include "include/divisor.h"

using namespace std;

unsigned GetInputNumber(const string &msg);

int main(int argc, char const *argv[])
{
    cout << "Prime factors of a number" << endl;
    unsigned number = GetInputNumber("Enter the number : ");

    cout << "Press any key to continue... " << endl;
    getch();
    return 0;
}

unsigned GetInputNumber(const string &msg)
{
    unsigned retVal {0};
    cout << msg;
    
    while(!(cin >> retVal))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout << "Invalid number. Please try again : ";
    }
    return retVal;
}