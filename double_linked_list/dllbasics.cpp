#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;
    Node(int x, Node* nxt, Node* pre){
        data = x;
        next = nxt;
        back = pre;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArrToDLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printDLL(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

Node* deleteHead(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // Empty or single-node list
    }
    
    Node* prev = head;
    head = head->next;
    head->back = nullptr; 
    prev->next = nullptr; 
    
    delete prev; // Free memory in C++
    return head;
}

// Delete the Tail of the DLL
Node* deleteTail(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return nullptr; // Empty or single-node list
    }
    
    Node* tail = head;
    while (tail->next != nullptr) { // Traverse to the last element
        tail = tail->next;
    }
    
    Node* prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    
    delete tail;
    return head;
}

// Delete the K-th element of the DLL
Node* deleteKthElement(Node* head, int k) {
    if (head == nullptr) return nullptr;
    
    int count = 0;
    Node* kNode = head;
    
    while (kNode != nullptr) {
        count++;
        if (count == k) break;
        kNode = kNode->next;
    }
    
    Node* prev = kNode->back;
    Node* front = kNode->next;
    
    if (prev == nullptr && front == nullptr) {
        // Single element in the list
        delete kNode;
        return nullptr;
    } else if (prev == nullptr) {
        // We are deleting the head
        return deleteHead(head);
    } else if (front == nullptr) {
        // We are deleting the tail
        return deleteTail(head);
    }
    
    // Middle node deletion
    prev->next = front;
    front->back = prev;
    
    kNode->next = nullptr;
    kNode->back = nullptr;
    delete kNode;
    
    return head;
}

int main() {
    vector<int> arr = {12, 3, 4, 5};
    Node* head = convertArrToDLL(arr);
    printDLL(head);
    return 0;
}