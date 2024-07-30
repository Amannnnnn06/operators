//Name:Aman Prajapati
//PRN:23070123017
//Aim:Implemention of Operators

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b; // Note: This will cause a runtime error if b is 0

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
//output
//Enter the first number: 56
//Enter the second number: 7
//Sum: 63
//Difference: 49
//Product: 392
//Quotient: 8