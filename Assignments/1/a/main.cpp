/*
Project 1 Problem 1 A
Description: This program will ouput the sum of the series of numbers int this program.
Name: Eric Chu
ID: 1486963
Class: COMSC110-1275
Date: 11/8/2014
*/
#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 49;

float sumArray(float array1[])
{
    float total = 0;

    for (int i = 0; i < SIZE; i++ )
    {
        total += array1[i];
    }

    return total;
}

int main()
{
    float array1[SIZE], devision;

   float top = 1, bot = 3;
    for(int i = 0; i < SIZE; i++)
    {

        array1[i] = top/(double)bot;
        top +=2;
        bot +=2;
    }

   devision =  sumArray(array1);

   cout << setprecision(2) << fixed << showpoint;
   cout << "Series sum is " << devision << endl;



}
