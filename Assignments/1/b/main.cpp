/*
Project 1 Problem 1 B
Description: This program will prompt the user to input the number of students and the score for each students and the program
will find the highest score.
Name: Eric Chu
ID: 1486963
Class: COMSC110-1275
Date: 11/8/2014
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num, score;

    cout << "Please enter the number of students: ";
    cin >> num;

    int temp = 0;
    for(int i = 1; i <= num; i++)
    {
        cout << "Please enter student " << i << " score: ";
        cin >> score;
        if (score > temp)
        temp = score;
    }

    cout << "Highest Score: " << temp << endl;
}
