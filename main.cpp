#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ENGLISH");

    int a,b,s;
    string c,d,e,f;
    cout << "Should I use the screen cleaning function? (1 = optional at the end of the calculation; 2 = automatic cleaning; 3 = disable)" << endl;
    cin >> f;
    if (f == "1") {
        do {
            cout << "Enter a value for variable A" << endl;
            cin >> a;
            cout << "Enter a value for variable B" << endl;
            cin >> b;
            cout << "Enter the required character (+, -, *, /)" << endl;
            cin >> c;
            if (c == "+") {
                s = a+b;
                cout << "Sum result: " << s << endl;
            } else if (c == "-") {
                s = a-b;
                cout << "Calculation result: " << s << endl;
            } else if (c == "*") {
                s = a*b;
                cout << "The result of the multiplication: " << s << endl;
            } else if (c == "/") {
                s = a/b;
                cout << "Division result: " << s << endl;
            } else {
                cout << "There is no such sign." << endl;
            } cout << "Repeat? (y/n)" << endl;
            cin >> d;
            cout << "Clean? (y/n)" << endl;
            cin >> e;
            if (e == "y") {
                system("cls");
            }
        } while (d == "y");
        cout << "Disconnection." << endl;
    } else if (f == "2") {
        do {
            cout << "Enter a value for variable A" << endl;
            cin >> a;
            cout << "Enter a value for variable B" << endl;
            cin >> b;
            cout << "Enter the required character (+, -, *, /)" << endl;
            cin >> c;
            if (c == "+") {
                s = a+b;
                cout << "Sum result: " << s << endl;
            } else if (c == "-") {
                s = a-b;
                cout << "Calculation result: " << s << endl;
            } else if (c == "*") {
                s = a*b;
                cout << "The result of the multiplication: " << s << endl;
            } else if (c == "/") {
                s = a/b;
                cout << "Division Result: " << s << endl;
            } else {
                cout << "There is no such sign." << endl;
            } cout << "Repeat? (y/n)" << endl;
            cin >> d;
            system("cls");

        } while (d == "y");
        cout << "Disconnection." << endl;
    } else if (f == "3") {
        do {
            cout << "Enter a value for variable A" << endl;
            cin >> a;
            cout << "Enter a value for variable B" << endl;
            cin >> b;
            cout << "Enter the required character (+, -, *, /)" << endl;
            cin >> c;
            if (c == "+") {
                s = a+b;
                cout << "Sum result: " << s << endl;
            } else if (c == "-") {
                s = a-b;
                cout << "Calculation result: " << s << endl;
            } else if (c == "*") {
                s = a*b;
                cout << "The result of the multiplication: " << s << endl;
            } else if (c == "/") {
                s = a/b;
                cout << "Division Result: " << s << endl;
            } else {
                cout << "There is no such sign." << endl;
            } cout << "Repeat? (y/n)" << endl;
            cin >> d;
        } while (d == "y");
        cout << "Disconnection." << endl;
    } else {
        cout << "There is no such option.." << endl;
    }
    system("pause");
    return 0;
}