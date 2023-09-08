A program that use all operators. 
#include <iostream>

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    int addition = a + b;
    int subtraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulus = a % b;

    // Logical operators
    bool x = true, y = false;
    bool logicalAnd = x && y;
    bool logicalOr = x || y;
    bool logicalNotX = !x;

    // Increment/decrement operators
    int num = 5;
    num++; // Post-increment
    ++num; // Pre-increment
    num--; // Post-decrement
    --num; // Pre-decrement

    // Boolean operators
    bool boolResult = (a > b) && (x || y);

    // Assignment operators
    int assignedValue = 42;
    int assignmentOperator = assignedValue;
    int doubleAssignment = assignedValue += 10; 
	// Compound assignment

    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;
    std::cout << "Division: " << division << std::endl;
    std::cout << "Modulus: " << modulus << std::endl;

    std::cout << "\nLogical Operators:" << std::endl;
    std::cout << "Logical AND: " << logicalAnd << std::endl;
    std::cout << "Logical OR: " << logicalOr << std::endl;
    std::cout << "Logical NOT: " << logicalNotX << std::endl;

    std::cout << "\nIncrement/Decrement Operators:" << std::endl;
    std::cout << "Post-increment: " << num++ << std::endl;
    std::cout << "Pre-increment: " << ++num << std::endl;
    std::cout << "Post-decrement: " << num-- << std::endl;
    std::cout << "Pre-decrement: " << --num << std::endl;

    std::cout << "\nBoolean Operators:" << std::endl;
    std::cout << "Boolean Result: " << boolResult << std::endl;

    std::cout << "\nAssignment Operators:" << std::endl;
    std::cout << "Assignment Operator: " << assignmentOperator << std::endl;
    std::cout << "Double Assignment (Compound Assignment): " << doubleAssignment << std::endl;

    return 0;
}

