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
        T multiply()
            {return num1 * num2;}
        T divide()
            {return (num2 != 0) ? num1 / num2 : 0;}
};

//This is all the values that only allow for one value, examle "1" "2"
void integ(numbers<int>& numo) {
    int number1;
    int number2;
    cout << "First number: " << endl;
    cin >> number1;
    cout << "Second number: " << endl;
    cin >> number2;
    numo.setvalues(number1, number2);
}

//This is for the double value, example "2.1" "4.1"
void doubl(numbers<double>& numo) {
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
    cout << "Type to choose:\n\n";
    cout << "1. integer\n";
    cout << "2. double\n";
    cout << "3. Exit Program\n";

    int selec;
    cout << "Selected: ";
    cin >> selec;

    numbers<int> num_int;       //define integer function
    numbers<double> num_dbl;    //define double function
    int typeOfVal = 0;          // 1 for integer, 2 for double

    switch(selec) { //First case, this is for the selection of integer and double values.
        case 1:
            integ(num_int);
            typeOfVal = 1;
            break;
        case 2:
            doubl(num_dbl);
            typeOfVal = 2;
            break;
        case 3:
            return 0;
        default:
            cout << "Error" << endl;
            return 1;
    }

    int typeOfOp = 0;
    cout << "Type of operation..." << endl;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cin >> typeOfOp;

    int reslint;        //result for int
    double resldbl;     // result for double

    switch(typeOfOp){ //second case function, this an if else value for the double and integer, just defines if its a 1 or a 2 1 being integer and 2 being double
        case 1:
            if (typeOfVal == 1) reslint = num_int.add(); else resldbl = num_dbl.add();
            break;
        case 2:
            if (typeOfVal == 1) reslint = num_int.subtract(); else resldbl = num_dbl.subtract();
            break;
        case 3:
            if (typeOfVal == 1) reslint = num_int.multiply(); else resldbl = num_dbl.multiply();
            break;
        case 4:
            if (typeOfVal == 1) reslint = num_int.divide(); else resldbl = num_dbl.divide();
        default:
            cout << "~Error~" << endl;
            return 1;
    }
    //This is defining as the final answer.
    cout << "The answer: " << endl;
    if (typeOfVal == 1) cout << reslint << endl;
    else cout << resldbl << endl;

    cin.get();
    return 0;
}
