#include "Calculator.h"
#include <iostream>

using namespace std;

void Calculator::getEnteies();
{
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
}

void Calculator::getResult()
{
    switch (_choice)
    {
    case 1:
        cout << "ADD: " << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
        break;
    case 2:
        cout << "SUBSTRICT: " << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
        break;
    case 3:
        cout << "MUTIPLY: " << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
        break;
    case 4:
        if (secondNumber == 0)
        {
            cout << "DIVIDE: "
                 << "除数不能为0" << endl;
        }
        else
        {
            cout << "DIVIDE: " << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << endl;
        }
        break;
    default:
        cout << "not a valid choice \n";
        break;
    }
}

Calculator::Calculator()
{
    firstNumber = 0;
    secondNumber = 0;
    _choice = CHOICE::INVALID;
}

void Calculator::run()
{
    _choice = CHOICE::INVALID;
    while (_choice == CHOICE::INVALID)
    {
        int choice = 0;
        cout << "press 1 for add, 2 for substrict, 3 for mutiply, 4 for divide: ";
        cin >> choice;
        if (choice > 0 && choice < 5)
        {
            _choice = static_cast<CHOICE>(choice);
        }
        else
        {
            cout << "invalid entry of \'" << choice << "\' - try again. " << endl;
        }
    }
    getEnteies();
    getResult();
}
