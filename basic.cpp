#include <iostream>
using namespace std;


int main() {
    cout << "Hello world" << endl;

    // Type Casting 
    // Converting data from one type to another

    // implicit
    char grade = 'a';
    int value = grade;
    cout << value << endl;

    // explicit
    double Price = 567.98;
    int newPrice = (int) Price;
    cout << newPrice << endl;

    // Garbage value 
    int age;
    cout << "Garbage value of age: " << age << endl;

    return 0;
};