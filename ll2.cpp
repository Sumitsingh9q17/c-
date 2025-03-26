//no of node in linked list count

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
    int count = 0;
    while (temp != nullptr) {
        cout << temp->data << " ";  // Print the data of the current node
        temp = temp->next;  // Move to the next node
        count++;
    }
    cout << endl;
    cout << "Number of nodes: " << count << endl;

    return 0;
}

// using recursion

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

int countNodes(Node* head) {
    if (head == nullptr) {
        return 0;
    }
    return 1 + countNodes(head->next);
}

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

    cout << "Number of nodes: " << countNodes(head) << endl;

    return 0;
}


class Solution {
    public:
      Node *insertAtEnd(Node *head, int x) {
          // Code here
          Node* node = new Node(x);
          if(head=NULL)
      {
          head =node;
          return head;


      }
      Node *temp = head;

          while(temp->next!=NULL)
  {
      temp = temp->next;

  }

          temp->next = node;
          return head;
      }
  };


  class Solution {
    public:
      /* Should return data of middle node. If linked list is empty, then -1 */
      int getMiddle(Node* head) {
          // code here
          int count=0;
          int mid=0;
          Node*current =head;
          if(head==NULL)
          {
              return -1;
          }
  while(current!=0){
      count++;
      current = current->next;
  }
  mid=count/2+1;

  current=head;
  for(int i=0;i<mid;i++){
      current=current->next;
  }

  return current->data;

      }
  };


  class Solution {
    public:
      /* Should return data of middle node. If linked list is empty, then -1 */
      int getMiddle(Node* head) {
          // code here
          Node *fast=head->next->next;
          Node *slow = head->next;

          if(head==NULL)
          {
              return -1;
          }

          while(fast!=NULL && fast->next !=NULL){
              fast->next->next;
              slow->next;
          }

          return slow->data;
      }
  };
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode *fast = head;
            ListNode *slow = head;
    while(fast!=NULL && slow!=NULL){
            fast = head->next->next;
            slow = head->next;
    }

            if(fast == slow){
                return true;
            }

            return false;
        }
    };