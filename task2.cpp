#include <iostream>
using namespace std;
int main() 
{
    float num1,num2;
    char operation;
    cout << "Enter number 1: ";
    cin >> num1 ;
    cout << "Enter number 2: ";
    cin >> num2 ;
    cout << "Enter an operator from (+, -, *, /): ";
    cin >> operation;
    switch(operation) 
    {
        case '+':
            cout << "Addition: " << num1 + num2;
            break;
        case '-':
            cout << "Subtraction: " << num1 - num2;
            break;
        case '*':
            cout << "Multiplication: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Division: " << num1 / num2;
            else
                cout << "Error! Division by zero!";
            break;
        default:
            cout << "Invalid operation!";
            break;
    }
    return 0;
}

