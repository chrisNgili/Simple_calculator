#include <iostream>  // For input/output operations (cout, cin)
#include <string>    // For string type (though not heavily used here)

using namespace std; // Allows using standard library elements without std:: prefix

int main(void) {     // Main function - program entry point
    // DECLARATION SECTION
    char op;         // Character variable to store the operator (+, -, *, /)
    float num1;      // Floating-point variable for first number
    float num2;      // Floating-point variable for second number
    float result;    // Floating-point variable to store calculation result
    
    // INPUT SECTION
    // Prompt user for first number
    cout << "Input number 1: ";
    cin >> num1;     // Read first number from standard input
    
    // Prompt user for second number
    cout << "Input number 2: ";
    cin >> num2;     // Read second number from standard input
    
    // Prompt user for arithmetic operator
    cout << "Input the desired operator (+, -, *, /): ";
    cin >> op;       // Read operator character
    
    // PROCESSING SECTION
    // Switch statement: evaluates the operator and performs corresponding calculation
    switch (op) {
        case '+':                    // Addition case
            result = num1 + num2;    // Add the two numbers
            cout << "Result: " << result << endl;  // Display result
            break;                   // Exit switch statement
        
        case '-':                    // Subtraction case
            result = num1 - num2;    // Subtract second number from first
            cout << "Result: " << result << endl;
            break;
        
        case '*':                    // Multiplication case
            result = num1 * num2;    // Multiply the two numbers
            cout << "Result: " << result << endl;
            break;
        
        case '/':                    // Division case
            // Note: No division by zero check - potential improvement!
            result = num1 / num2;    // Divide first number by second
            cout << "Result: " << result << endl;
            break;
            
        default:                     // Default case: invalid operator
            cout << "Enter a valid operator !!" << endl;
            break;
    }
    
    return 0;  // Program ends successfully
    // Note: return 0 indicates successful execution to the operating system
}