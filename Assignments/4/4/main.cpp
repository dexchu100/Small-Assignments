/*
Project 1 Problem 4
Description: This program will prompt the user to enter an operator, the program will parse the input, do the calculation, and print the
result to 3 decimal places.
Name: Eric Chu
ID: 1486963
Class: COMSC110-1275
Date: 11/8/2014
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <sstream>

using namespace std;

void removespace(string& x)
{
    for(int i = 0; i < x.size();)
    {
        if (isspace(x[i]))
            {
                x.erase(i, 1);
            }
            else
            {
            i++;
            }
    }
}

string newSqrtLine(string x)
{
    string temp = "";

    for(int i = 0; i < x.size(); i++)
    {
        if (isdigit(x[i]))
        {
            temp += x[i];
        }
    }

    return temp;
}

float sqrtf(string x)
{
    float answ, a;

    stringstream(x) >> a;

    answ = sqrt(a);

    return answ;
}


float numberanws(string x)
{
    float a, b, answ;
    char op;
    stringstream(x) >> a >> op >> b;

    switch (op)
    {
        case '+':
                answ = a + b;
            break;
        case '-':
                answ = a - b;
            break;
        case '*':
                answ = a * b;
            break;
        case '/':
                answ = a/b;
            break;
        case '^':
                answ = pow(a,b);
            break;
    }

    return answ;
}

float binaryconv(int dec)
{
    int rem,i=1,sum=0;
    do
    {
        rem = dec % 2;
        sum += (i * rem);
        dec = dec / 2;
        i = i * 10;
    }while(dec > 0);

    return sum;
}

int main()
{
    float answer;
    string equation;
    ofstream output;

    cout << "Welcome to Calculator 110\n" << endl;

    output.open("calc.txt");
    do
    {
        cout << "Please input an operation: ";
        getline(cin,equation);

        removespace(equation);

        if(equation[0] == 's')
        {
            char op = 251;
            answer = sqrtf(newSqrtLine(equation));
            equation = op + newSqrtLine(equation);

        }
       else
        {
            answer = numberanws(equation);
        }

    cout << "Result: " << equation << " = " << fixed << setprecision(3) << answer;
    cout << setw(15) << "Hex = " << hex << (int) answer;
    cout << setw(15) << "Oct = " << oct << (int) answer;
    cout << setw(15) << "Bin = "  << fixed << setprecision(0) << binaryconv(answer) << endl;
    cout << endl;
    output << "Result: " << equation << " = " << fixed << setprecision(3) << answer;
    output << setw(15) << "Hex = " << hex << (int) answer;
    output << setw(15) << "Oct = " << oct << (int) answer;
    output << setw(15) << "Bin = "  << fixed << setprecision(0) << binaryconv(answer) << endl;
    output << endl;

    }while(equation != "exit");

    output.close();

    cout << "Good Bye!";

return 0;
}
