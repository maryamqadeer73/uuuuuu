#include <iostream>

int main() {
    // Integer data types
    int intVar = 42;
    short shortVar = 32767; // Short integer
    long longVar = 2147483647; // Long integer
    unsigned unsignedVar = 4294967295; // Unsigned integer

    // Floating-point data types
    float floatVar = 3.14159265359f; // Single-precision float
    double doubleVar = 3.14159265359; // Double-precision float

    // Character data type
    char charVar = 'A';

    // Boolean data type
    bool boolVar = true;

    // Wide character data type
    wchar_t wcharVar = L'W';

    std::cout << "Int: " << intVar << std::endl;
    std::cout << "Short: " << shortVar << std::endl;
    std::cout << "Long: " << longVar << std::endl;
    std::cout << "Unsigned: " << unsignedVar << std::endl;
    std::cout << "Float: " << floatVar << std::endl;
    std::cout << "Double: " << doubleVar << std::endl;
    std::cout << "Char: " << charVar << std::endl;
    std::cout << "Bool: " << boolVar << std::endl;
    std::wcout << "Wide Char: " << wcharVar << std::endl;

    return 0;
}

