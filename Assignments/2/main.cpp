/*
Project 1 Problem 2
Description: This program will prompt the user to enter the month and year in the program and will output how many days the month
input have.
Name: Eric Chu
ID: 1486963
Class: COMSC110-1275
Date: 11/8/2014
*/
#include <iostream>
#include <string>

#include <cmath>

using namespace std;
int const SIZE = 13;

int main()
{
    string month[SIZE] = {"0", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int x = 0, years, inmonth, days[SIZE] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << "Enter the year: ";
    cin >> years;

    cout << "Enter the month(e.g., 1 for January): ";
    cin >> inmonth;

    if(inmonth == 2 && years%400 == 0 || inmonth == 2 && years%4 == 0 && years%100 !=0)
        {
            cout << month[inmonth] << " " << years << " has 29 days" << endl;
        }
    else
        {
            cout << month[inmonth] << " " << years << " has " << days[inmonth] << " days" << endl;
        }
    cout << endl;

return 0;
}
