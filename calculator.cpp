#include<iostream>
using namespace std;

void addition(double numOne, double numTwo);
void subtraction(double numOne, double numtwo);
void multiplication(double numOne, double numtwo);
void division(double numOne, double numtwo);

int main() {
    int choice = 0;
    double num1 = 0;
    double num2 = 0;

    do {

        cout << "**********************************************************" << endl;
        cout << "************Welcome to my Calculator Program**************" << endl;
        cout << "**********************************************************" << endl;
        cout << "Enter two numbers that you want to perform operations on: ";
        cin >> num1 >> num2;
        cout << "You entered: " << num1 << " and " << num2 << endl;
        cout << "Choose an operation(1-5):" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;
        
        switch(choice) {
            case 1: 
                addition(num1, num2);
                break;
            case 2: 
                subtraction(num1, num2);
                break;
            case 3:  
                multiplication(num1, num2);
                break;  
            case 4: 
                division(num1, num2);
                break;
            case 5: 
                cout << "Exiting Program" << endl;
                break;
            default: 
                cout << "Sahi number dalo yar.\n";
        }
    } while (choice != 5);

    return 0;
}


void addition(double numOne, double numTwo) {
    double addition = numOne + numTwo;
    cout << "The Addition is: " << addition << endl;
}

void subtraction(double numOne, double numtwo) {
    double subtraction = numOne - numtwo;
    cout << "Subtraction is: " << subtraction << endl;
}

void multiplication(double numOne, double numtwo) {
    double multiplication = numOne * numtwo;
    cout << "Multiplication is: " << multiplication << endl;
}

void division(double numOne, double numtwo) {
    double division = numOne / numtwo;
    cout << "Division is: " << division << endl;
}
