/*
Jacob St Lawrence
This program gets two integers and a mathematical operator from the user, then
performs the operation on the integers provided and displays the result.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()  //create main
{
    //declare variables
    int num1, num2;
    char opr;
    
    //prompt user for input and assign to appropriate variables
    cout << "Please enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter operator: + (addition), - (subtraction), * (multiplication), / (division): ";
    cin >> opr;
    //display calculation to be performed, prepared for solution to appear
    cout << num1 << " " << opr << " " << num2 << " = ";
    
    switch (opr)    //create switch structure
    {
        //switch structure to perform requested operation and display solution
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)  //perform division only if denominator is not zero
                cout << num1 / num2 << endl;
            else    //display error message if denominator would be zero
                cout << "ERROR \n Cannot divide by zero" << endl;
            break;
        default:    //display error message if user entered anything other than one of the four acceptable operators
            cout << "Illegal operation" << endl;
    }
    
    return 0;   //end main
}
