#include <iostream>
using namespace std;

int main() {
    char repeat = 'y';
    while (repeat == 'y') {
        cout << "Type to choose:\n\n";
        cout << "1. Basic Math...\n";
        cout << "2. Exit~\n";

        int Case2;
        cout << "Selected: ";
        cin >> Case2;

        double num1;
        double num2;
        char operation;
        double Answer;

        switch(Case2) {//First case, this is for the selection of integer and double values.
            case 1:
                cout << "Num One: " << endl;
                cin >> num1;
                cout << "Num Two: " << endl;
                cin >> num2;
                break;
            case 2:
                return 0;
            default:
                cout << "Error" << endl;
                return 1;
        }

        //Type of operation + - * /
        cout << "Type of operation... '+,-,*,/' " << endl;
        cout << "Input Operation: ";
        cin >> operation;

        switch(operation){ //second case function, this an if else value for the double and integer, just defines if its a 1 or a 2 1 being integer and 2 being double
            case '+':
                Answer = num1 + num2;
                break;
            case '-':
                Answer = num1 - num2;
                break;
            case '*':
                Answer = num1 * num2;
                break;
            case '/':
                Answer = num1 / num2;
            default:
                cout << "~Error~" << endl;
                return 1;
        }
        //This is defining as the final answer.
        cout << "The answer: " << endl;
        cout << Answer << endl;

        // this is for a return back to the selection to allow for another input.
        cout << "Back to Main? (y/n)";
        cin >> repeat;
    }
    return 0;
}