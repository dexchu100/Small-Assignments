/*
Project 1 Problem 5
Description: This program will be give the user a list of things that can affect their todolist and be asked what to do to the todolist.
Name: Eric Chu
ID: 1486963
Class: COMSC110-1275
Date: 11/8/2014
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

void oNe(vector<string>&lists)
{
    string todo;
    cout << "Please add an item on the To Do List!" << endl;
    cout << "==>"; getline(cin,todo);

    lists.push_back(todo);
    cout << endl;

}
void tWo(vector<string>lists)
{
   cout << "The next item in the to do list is" << endl;
   cout << "==>" << lists[0] << endl;
   cout << endl;
}
void thRee(vector<string>&lists)
{
    cout << "Ok, time to do this list item" << endl;
    cout << "==>" << lists[0] << endl;
    lists.erase(lists.begin());
    cout << endl;

}
void foUr(vector<string>lists)
{
    for(int i = 0; i < lists.size(); i++)
    {
        cout << i + 1 << ": " <<lists[i] << "\n" << endl;
    }
}
void fiVe(vector<string>lists)
{
    ofstream file;
    file.open("todolist.txt");
    for(int i = 0; i < lists.size(); i++)
        {
            file << i + 1 << "." << lists[i] << endl;
        }
    file.close();

    cout << "Files successfully saved.\n" << endl;
}
void sIx()
{
    string x;
    ifstream load;
    load.open("todolist.txt");
    if(load.is_open())
    {
        while(!load.eof())
        {
            getline(load, x);
            cout << x << endl;
        }
    }
}

int main()
{
    string doing;
    int todo;
    vector <string>L1;

    do
    {
    cout << "What to do?" << endl;
    cout << "1 Add to the list\n" << "2 Show the next item on the list\n" << "3 Do the next item on the list and remove it" << endl;
    cout << "4 List all items\n" << "5 Save list\n" << "6 Load list\n" << "7 All done with this To Do List!\n" << endl;
    cout << "==> ";

    getline(cin,doing);
    stringstream(doing) >> todo;

    if (todo == 1 || todo == 7 || L1.size() > 0)
    {
        switch(todo)
        {
            case 1: oNe(L1);
                break;
            case 2: tWo(L1);
                break;
            case 3: thRee(L1);
                break;
            case 4: foUr(L1);
                break;
            case 5: fiVe(L1);
                break;
            case 6: sIx();
                break;
            case 7:
                {
                    cout << "Goodbye for now" << endl;
                }
                break;
        }
    }
    else
    {
        cout << "**WARNNING!!!!** There is nothing in the list." << endl;
        cout << "Press 1 to add to the list\n" << endl;
    }

    }while(todo != 7);

return 0;
}
