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
    
    // method for unshift
    void unshift(int value) {
        Node* newNode = new Node(value);
        if(!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Method for delete node
    void insertAt(int position, int value) {
        if(position < 0) return;
        if(position == 0) {
            unshift(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;
        for(int i = 0; temp != nullptr && i < position - 1; i++) {
            temp = temp->next;
        }
        if(temp == nullptr) return;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Method for shift
    void shift() {
        if(!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Method for removeAt
    void removeAt(int position) {
        if(position < 0) return;
        if(position == 0) {
            shift();
            return;
        }
        Node* temp = head;
        for(int i = 0; temp != nullptr && i < position - 1; i++) {
            temp = temp->next;
        }
        if(!temp || !temp->next) return;
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete; 
    }



    // display the linkedlistvalue 
    void display() {
        if(!head) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while(temp) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // creater destructor
    ~SinglyLinkedList() {
        Node* temp = head;
        while(temp) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
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

