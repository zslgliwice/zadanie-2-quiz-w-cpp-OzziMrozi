#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string name;
string answer;
int points = 0;
int main()
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(handle, 11);

    //Start---------------------------------------------------

    cout << "What's your name: ";
    cin >> name;
    cout << "Hello! " << name << ", *topic* quiz will start in...";
    Sleep(3500);
    system("cls");

    //Counting----------------------------------------------

    SetConsoleTextAttribute(handle, 12);
    cout<< "3";
    Sleep(1000);
    system("cls");
    SetConsoleTextAttribute(handle, 6);
    cout<< "2";
    Sleep(1000);
    system("cls");
    SetConsoleTextAttribute(handle, 10);
    cout<< "1";
    Sleep(1000);
    system("cls");
    SetConsoleTextAttribute(handle, 12);
    cout<< "Start !!!";
    Sleep(1300);
    system("cls");

    //Questions-------------------------------------------------

    SetConsoleTextAttribute(handle, 10);
    cout << "First question: *question*."<<endl;
    SetConsoleTextAttribute(handle, 15);
    cout << "a) "<<endl;
    cout << "b) "<<endl;
    cout << "c) "<<endl;
    SetConsoleTextAttribute(handle, 13);
    cout << "\nYour answer: ";
    cin >> answer;

    if(answer == "b")
    {
        SetConsoleTextAttribute(handle, 10);
        cout << "\nGood job ! You score 1 point";
        points++;
    }
    else
    {
        SetConsoleTextAttribute(handle, 12);
        cout << "\nBad answer :/\nCorrect answer is: B";
    }
    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(handle, 10);
    cout << "Second question: *question*."<<endl;
    SetConsoleTextAttribute(handle, 15);
    cout << "a) "<<endl;
    cout << "b) "<<endl;
    cout << "c) "<<endl;
    SetConsoleTextAttribute(handle, 13);
    cout << "\nYour answer: ";
    cin >> answer;
    if(answer == "a")
    {
        SetConsoleTextAttribute(handle, 10);
        cout << "\nGood job ! You score 1 point";
        points++;
    }
    else
    {
        SetConsoleTextAttribute(handle, 12);
        cout << "\nBad answer :/\nCorrect answer is: A";
    }
    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(handle, 10);
    cout << "Third question: *question*."<<endl;
    SetConsoleTextAttribute(handle, 15);
    cout << "a) "<<endl;
    cout << "b) "<<endl;
    cout << "c) "<<endl;
    SetConsoleTextAttribute(handle, 13);
    cout << "\nYour answer: ";
    cin >> answer;
    if(answer == "b")
    {
        SetConsoleTextAttribute(handle, 10);
        cout << "\nGood job ! You score 1 point";
        points++;
    }
    else
    {
        SetConsoleTextAttribute(handle, 12);
        cout << "\nBad answer :/\nCorrect answer is: B";
    }
    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(handle, 10);
    cout << "Fourth question: *question*."<<endl;
    SetConsoleTextAttribute(handle, 15);
    cout << "a) "<<endl;
    cout << "b) "<<endl;
    cout << "c) "<<endl;
    SetConsoleTextAttribute(handle, 13);
    cout << "\nYour answer: ";
    cin >> answer;
    if(answer == "c")
    {
        SetConsoleTextAttribute(handle, 10);
        cout << "\nGood job ! You score 1 point";
        points++;
    }
    else
    {
        SetConsoleTextAttribute(handle, 12);
        cout << "\nBad answer :/\nCorrect answer is: C";
    }
    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(handle, 10);
    cout << "Fifth question: *question*."<<endl;
    SetConsoleTextAttribute(handle, 15);
    cout << "a) "<<endl;
    cout << "b) "<<endl;
    cout << "c) "<<endl;
    SetConsoleTextAttribute(handle, 13);
    cout << "\nYour annswer: ";
    cin >> answer;
    if(answer == "a")
    {
        SetConsoleTextAttribute(handle, 10);
        cout << "\nGood job ! You score 1 point";
        points++;
    }else
    {
        SetConsoleTextAttribute(handle, 12);
        cout << "\nBad answer :/\nCorrect answer is: A";
    }
    Sleep(3000);
    system("cls");

    //End---------------------------------------------------
    SetConsoleTextAttribute(handle, 10);
    for(int i=1; i<=3; i++)
    {
        Sleep(500);
        system("cls");
        cout << "!!! END OF QUIZ !!!";
        Sleep(500);
        system("cls");
        cout << "    END OF QUIZ    ";
    }
    system("cls");

    if(points = 1)
    {
        cout << "You scored: "<<points<<" point";
    }else
    {
        cout << "You scored: "<<points<<" points";
    }
    


    return 0;
}


