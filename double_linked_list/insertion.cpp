#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* back;
    Node(int x,Node* nxt,Node* pre){
        data = x;
        next = nxt;
        back = pre;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
        
    }
}

// Insert a new node before the Head
Node* insertBeforeHead(Node* head, int val) {
    // New node pointing next to current head, and back to nullptr
    Node* newHead = new Node(val, head, nullptr);
    if(head != nullptr){
        head->back = newHead; // Point current head's back to newHead
    }
    return newHead;
}

// Insert a new node before the Tail
Node* insertBeforeTail(Node* head, int val) {
    if (head->next == nullptr) { 
        return insertBeforeHead(head, val); // Single element case
    }
    
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    
    Node* prev = tail->back;
    
    // Create new node pointing next to tail, and back to prev
    Node* newNode = new Node(val, tail, prev); 
    prev->next = newNode;
    tail->back = newNode;
    
    return head;
}

// Insert before the K-th Element
Node* insertBeforeKthElement(Node* head, int k, int val) {
    if (k == 1) {
        return insertBeforeHead(head, val);
    }
    
    Node* temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        if (count == k) break;
        temp = temp->next;
    }
    
    Node* prev = temp->back;
    
    // Create new node in the middle
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    
    return head;
}

// Insert before a given Node (Guarantee: It is never the head)
void insertBeforeGivenNode(Node* node, int val) {
    Node* prev = node->back;
    
    Node* newNode = new Node(val, node, prev);
    prev->next = newNode;
    node->back = newNode;
}

Node* insertBeforeTail(Node* head, int val) {
    if (head->next == nullptr) { 
        return insertBeforeHead(head, val); // Single element case
    }
    
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    
    Node* prev = tail->back;
    
    // Create new node pointing next to tail, and back to prev
    Node* newNode = new Node(val, tail, prev); 
    prev->next = newNode;
    tail->back = newNode;
    
    return head;
}

// Insert before the K-th Element
Node* insertBeforeKthElement(Node* head, int k, int val) {
    if (k == 1) {
        return insertBeforeHead(head, val);
    }
    
    Node* temp = head;
    int count = 0;
    while (temp != nullptr) {
        count++;
        if (count == k) break;
        temp = temp->next;
    }
    
    Node* prev = temp->back;
    
    // Create new node in the middle
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    
    return head;
}
int main (){
    vector<int> arr = {10,20,30,40}

}