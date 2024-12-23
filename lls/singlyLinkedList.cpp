#include <iostream> 
using namespace std;

// SinglyLinked list
 
//  first create node class
class Node {
public:
    int data;
    Node* next;

    // constructor
    Node (int data) {
        this-> data = data;
        this-> next = NULL;
    } 
 };

//  second create singlyLinkedList class
class SinglyLinkedList {
private:
    Node* head;

public:
    // constructor
    SinglyLinkedList() {
        this->head = NULL;
    }

    // method for push
    void push(int value) {
        Node* newNode = new Node(value);
        if(!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while(temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    // display the linkedlistvalue 
    void display() {
        if(!head) return;
        Node* temp = head;
        while(temp) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    SinglyLinkedList newList;
    newList.push(1);
    newList.push(2);
    newList.push(3);
    newList.push(4);
    newList.display();

    return 0;
}

