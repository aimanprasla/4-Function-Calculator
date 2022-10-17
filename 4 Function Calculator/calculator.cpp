//Simple 4 function calculator
#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char operation;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the operation (+,-,*,/): " << endl;
    cin >> operation;
    if(operation == '+')
        cout << "The sum of these two numbers is: " << num1 + num2;
    else if(operation == '-')
        cout << "The difference of these two numbers is: " << num1-num2;
    else if(operation == '*')
        cout << "The product of these two numbers is: " << num1*num2;
    else
        cout << "The quotient of these two numbers is: " << num1/num2;
}