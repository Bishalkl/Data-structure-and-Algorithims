#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;
    Node* next;

    //Constructor to initiallize a node 
    Node(int val) {
        data = val;
        next = nullptr;
    }
};


// Define the LinkedList class
class LinkedList {
private: 
    Node* head; // Pointer to the head of the list 

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* nextNode = temp->next;
            delete temp; // Free the current node
            temp = nextNode;
        }
    }

    // Function to insert a node at the head
    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a node at the tail
    void insertAtTail(int val) {
        Node * newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }


    // Function to display the linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    LinkedList list;
    list.insertAtHead(10);
    list.insertAtHead(10);
    list.insertAtHead(10);
    list.insertAtHead(10);
    list.insertAtHead(10);
    list.insertAtHead(10);
    list.insertAtHead(10);
    
    list.display();

    return 0;
}