#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;  // The data value
    Node* next;  // The pointer to the next node

    // Constructor that initializes the data and the next pointer
    Node(int data1) {
        data = data1;  // Initialize data with the provided value
        next = nullptr;  // Initialize next as nullptr (no next node)
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};

    // Create the head of the linked list with the first element
    Node* head = new Node(arr[0]);

    // Use a pointer to link subsequent nodes
    Node* current = head;

    // Create and link remaining nodes from the array
    for (int i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);  // Create a new node and link it
        current = current->next;  // Move the current pointer to the new node
    }

    // Print the data of all nodes in the linked list
    Node* temp = head;  // Start from the head of the list
    while (temp != nullptr) {
        cout << temp->data << " ";  // Print the data of the current node
        temp = temp->next;  // Move to the next node
    }
    cout << endl;

    return 0;
}


