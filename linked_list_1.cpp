// https://www.youtube.com/watch?v=vcQIFT79_50&index=5&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
};

int main() {
    cout << "TEST\n";

    // A variable 'A' to access our linked list
    Node* A;
    A = NULL;   // Init to NULL, no info yet

    // Temp var to store the first node being added to the linked list
    Node* temp = new Node();

    // Initialise the data in the first node of the list. Link is NULL as it's the last element (only one also)
    temp->data = 2;
    temp->link = NULL;
    // Make A point to the first node in the list. Should remain like this unless the whole list is deleted
    A = temp;

    cout << A << endl;
    cout << A->data << endl;
    cout << A->link << endl;

    // New node for the end of the list
    temp = new Node();
    temp->data = 4;     // New data
    temp->link = NULL;  // Same every time this node you create is added to end of list

    // New node used to loop through all of the nodes in our list, or TRAVERSE the list
    Node* temp1 = A;
    // Keep going until you find the last node, where link == NULL
    while(temp1->link != NULL) {
        temp1 = temp1->link;    // Increments the node you are looking at
    }
    temp1->link = temp;     // Point the final node you find to your new node, so now there is a new final node

    // Custom print
    cout << "Printing out ALL DATA in the linked list\n\n";
    temp1 = A;
    cout << "Element 1:\n";
    cout << temp1->data << endl;
    cout << temp1->link << endl;

    temp1=temp1->link;
    cout << "Element 2:\n";
    cout << temp1->data << endl;
    cout << temp1->link << endl;

    // Whoops, only added 2...
    // temp1=temp1->link;
    // cout << "Element 3:\n";
    // cout << temp1->data << endl;
    // cout << temp1->link << endl;
}
