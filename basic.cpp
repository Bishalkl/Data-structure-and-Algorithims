#include <iostream>
using namespace std;
int main() {
    cout << "Hello world" << endl;

    // Type Casting 
    // Converting data from one type to another

    // implicit
    char grade = 'a';
    int value = grade;

    // explicit
    double Price = 567.98;
    int newPrice = (int) Price;
    cout << newPrice << endl;

    
    cout << value;
    return 0;
};