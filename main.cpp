#include <iostream>
using namespace std;

//This class is defining both numbers that can be input.
//this was a bit advanced for the first project, but I found out I could do this so i gave it a try
template<class T>
class numbers {
    private:
        T num1;
        T num2;

    public:
        numbers() : num1(0), num2(0) {}
        void setvalues(T n1, T n2)
            {num1 = n1; num2 = n2;}
        T add()
            {return num1 + num2;}
        T subtract()
            {return num1 - num2;}
        T divide()
            {return (num2 != 0) ? num1 / num2 : 0;}
        T multiply()
            {return num1 * num2;}
};

//changing this to do both double value and integer value
void InputNumber(numbers<double>& numo) {
    double number1;
    double number2;
    cout << "First number: " << endl;
    cin >> number1;
    cout << "Second number: " << endl;
    cin >> number2;
    numo.setvalues(number1, number2);
}

/*
 * This is the basic of the main class, this is defining all the values that is caused for the basic functions.
 * But this is a little more advanced with two case values, allowing for more of a cleaner look.
 * */
int main() {
    char repeat = 'y';
    while (repeat == 'y') {
        cout << "Type to choose:\n\n";
        cout << "1. Basic Math...\n";
        cout << "3. Exit~\n";

        int selec;
        cout << "Selected: ";
        cin >> selec;

        numbers<double> numD;    //define double function

        switch(selec) { //First case, this is for the selection of integer and double values.
            case 1:
                InputNumber(numD);
                break;
            case 2:
                return 0;
            default:
                cout << "Error" << endl;
                return 1;
        }
        //Type of operation + - * /
        int typeOfOp = 0;
        cout << "Type of operation..." << endl;
        cout << "1. +" << endl;
        cout << "2. -" << endl;
        cout << "3. *" << endl;
        cout << "4. /" << endl;
        cin >> typeOfOp;

        double reslT;     // result for double

        switch(typeOfOp){ //second case function, this an if else value for the double and integer, just defines if its a 1 or a 2 1 being integer and 2 being double
            case 1:
                reslT = numD.add();
                break;
            case 2:
                reslT = numD.subtract();
                break;
            case 3:
                reslT = numD.multiply();
                break;
            case 4:
                reslT = numD.divide();
            default:
                cout << "~Error~" << endl;
                return 1;
        }
        //This is defining as the final answer.
        cout << "The answer: " << endl;
        cout << reslT << endl;

        cin.get();
        // this is for a return back to the selection to allow for another input.
        cout << "Back to selection? (y/n)";
        cin >> repeat;
    }
    return 0;
}