#include <iostream>
using namespace std;

// Create stack
class Stack {
// private data member 
private:
    int* arr;
    int top;
    int capacity;


// constructor
public: 
    Stack(int size) {
        this->arr = new int[size];
        this->capacity = size;
        this->top = -1; // Stack is initially empty
    }


    // Destructor
    ~Stack() {
        delete[] arr;
    }

    // method to check stack is empty or not
    bool isEmpty() {
        return this->top == -1;
    }
    
    // method to check stack is full or not
    bool isFull() {
        return this->top == this->capacity - 1;
    } 

    // method for push opeartion
    void push(int value) {
        if(isFull()) {
            cout << "Your stack is overflow" << endl;
        } else {
            this->arr[++top] = value; 
        }
    }

    // method for pop operation
    int pop() {
        if(isEmpty()) {
            cout << "Your stack is Empty" << endl;
            return -1;
        } else {
            return this->arr[top--];
        }
    }

    // method for peak
    int peak() {
        if(isEmpty()) {
            cout << "Your stack is Empty" << endl;
            return -1;
        } else {
            return this->arr[top];
        }
    }

    // methodf for display stack data
    void display() {
        if(isEmpty()) {
            cout << "Your stack is Empty" << endl;
        } else {
            for(int i = 0; i <= this->top; i++) {
                cout << this->arr[i] << " ";
            }
            cout << endl;
        }
    }

};


// Main function
int main() {
    Stack stack(5);
    stack.push(6);
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1); //it will cause overflow

    // check it is empty or not
    if(stack.isEmpty()) {
        cout << "It is empty" << endl;
    } else {
        cout << "It is not empty" << endl;
    }

    // to display all the stack data
    stack.display();


    // check it is full or not 
    if(stack.isFull()) {
        cout << "It is full" << endl;
    } else {
        cout << "It is not full" << endl;
    }
    return 0;
}


