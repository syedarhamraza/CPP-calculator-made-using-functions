Calculator Program - C++
========================

Overview
--------

This C++ program is a simple calculator that allows the user to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The program continues to run until the user decides to exit by choosing the "Exit" option.

Features
--------

*   **Addition**: Adds two numbers.
    
*   **Subtraction**: Subtracts the second number from the first.
    
*   **Multiplication**: Multiplies two numbers.
    
*   **Division**: Divides the first number by the second.
    
*   **Exit**: Exits the program.
    

How the Program Works
---------------------

1.  **User Input**:
    
    *   The program first asks the user to enter two numbers that they want to perform operations on.
        
    *   The user is then presented with a menu to choose an operation (Addition, Subtraction, Multiplication, Division, or Exit).
        
2.  **Choice Selection**:
    
    *   The user can select an operation by entering the corresponding number (1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division, 5 to Exit).
        
    *   If the user enters an invalid choice, the program prompts the user to enter a valid option.
        
3.  **Operations**:
    
    *   Based on the user's choice, the program calls a corresponding function (e.g., addition(), subtraction(), multiplication(), division()).
        
    *   Each function performs the respective operation and outputs the result.
        
4.  **Loop**:
    
    *   The program continues running in a loop, allowing the user to perform multiple calculations, until they choose to exit (option 5).
        
5.  **Exit**:
    
    *   When the user selects the "Exit" option, the program prints a message saying "Exiting Program" and terminates.
        

Functions
---------

*   **addition(double numOne, double numTwo)**:
    
    *   Adds numOne and numTwo and prints the result.
        
*   **subtraction(double numOne, double numTwo)**:
    
    *   Subtracts numTwo from numOne and prints the result.
        
*   **multiplication(double numOne, double numTwo)**:
    
    *   Multiplies numOne and numTwo and prints the result.
        
*   **division(double numOne, double numTwo)**:
    
    *   Divides numOne by numTwo and prints the result.
        

Conclusion
----------

This program demonstrates how to perform basic mathematical operations in C++. It's designed for simplicity, allowing users to perform operations in a clear and interactive way.