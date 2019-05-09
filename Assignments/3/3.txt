/*
Project 1 Problem 3
Description: This program will prompt the user to enter 10 numbers and will determine whats the lowest number out of the 10 numbers.
Name: Eric Chu
ID: 1486963
Class: COMSC110-1275
Date: 11/8/2014
*/
#include <iostream>

using namespace std;

const int SIZE = 10;

double min(double arrayz[])
{
    double mini = arrayz[0];

    for (int i = 0; i < SIZE ; i++)
    {
        if(arrayz[i] < mini)
        {
            mini = arrayz[i];
        }
    }
        return mini;
}

int main()
{
    double number[SIZE];
    char answ;

    do
    {
    cout << "Please enter ten numbers: ";

    for(int i = 0; i < SIZE; i++)
    {
        cin >> number[i];
    }

    cout << "The minimum number is: " << min(number) << endl;
    cout << "Go Again? y/n  ";

    cin >> answ;

    }while (answ != 'n');

    cout << endl;

    cout << "Good bye. Never come again.";

return 0;
}
