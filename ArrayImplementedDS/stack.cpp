#include <iostream>
using namespace std;

// Stack class banako
class Stack {
// chaine member lai ani ani private banako 
private:
    int* arr;
    int top;
    int capacity;


// constructor banako
public: 
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1; // Kinaki stack suruma empty nai hunxa nita 
    }


    // Destructor banako clear gare paxi afai memory clear garxa 
    ~Stack() {
        delete[] arr;
    }

    // Yo method chai khali xa ki xaina  check garna ko lagi 
    bool isEmpty() {
        return top == -1;
    }
    
    // Yo method chai full xaki xiana check garna ko lagi
    bool isFull() {
        return top == capacity - 1;
    } 

    // yo method value lai push garnako lagi
    void push(int value) {
        if(isFull()) {
            cout << "Your stack is overflow" << endl;
        } else {
            arr[++top] = value; 
        }
    }

    // Yo method chai value pop garana ani delete garna 
    int pop() {
        if(isEmpty()) {
            cout << "Your stack is Empty" << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    // Yo method chai value peak garna ko lagi
    int peak() {
        if(isEmpty()) {
            cout << "Your stack is Empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    // Yo method chai display garna ko lagi 
    void display() {
        if(isEmpty()) {
            cout << "Your stack is Empty" << endl;
        } else {
            for(int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

};


// Yo function chai main function
int main() {
    Stack stack(5);
    stack.push(6);
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1); //include gardaina kinaki overflow bhai sako stack

    // check garaxa empty xa ki xaina 
    if(stack.isEmpty()) {
        cout << "It is empty" << endl;
    } else {
        cout << "It is not empty" << endl;
    }

    // display garxa spai stack ko value 
    stack.display();


    // check garxa full xaki xaina 
    if(stack.isFull()) {
        cout << "It is full" << endl;
    } else {
        cout << "It is not full" << endl;
    }

    // Peak test ko lagi
    cout << "Top element is: " << stack.peak() << endl; 

    // Pop test
    cout << "Pooped element: " << stack.pop() << endl;

    // antim ma feri display
    stack.display();
    
    return 0;
}


