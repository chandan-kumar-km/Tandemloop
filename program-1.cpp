 /*Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
  Calculator inputs :> ‘a’, ‘b’ and ‘type of operation’
  Datatype :> ‘a’ = double, ‘b’ = double, ‘type of operation’ = string*/

#include <iostream>
#include <string>
using namespace std;

class calculator
{

    double num1, num2;
    string operation;

public:
    calculator(double num1, double num2, string operation)
    {
        this->num1 = num1;
        this->num2 = num2;
        this->operation = operation;
    }

    void simplify()
    {
        if (operation == "+")
        {
            cout << "Result: " << (num1 + num2) << endl;
        }
        else if (operation == "-")
        {
            cout << "Result: " << (num1 - num2) << endl;
        }
        else if (operation == "*")
        {
            cout << "Result: " << (num1 * num2) << endl;
        }
        else if (operation == "/")
        {
            cout << "Result: " << (num1 / num2) << endl;
        }
        else
        {
            cout << "Error: Invalid operation type." << endl;
        }
    }
};

int main()
{
    calculator ca(2, 2, "/");
    ca.simplify();
    return 0;
}
