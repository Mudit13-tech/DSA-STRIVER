#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node(int x,Node* nxt){
        data = x;
        next = nxt;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        
    }
};
Node* removes(Node* head){
    if( head == NULL){
        return head;
    }
    Node* temp = head;
    head = head ->next;
    delete temp;
    return head;
}
Node* remoheadvesTail(Node* head){
    Node* temp = head;
    if(head == NULL || head->next == NULL){
        return  NULL;
    }
    while(temp.next.next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp-next = nullptr;
    return head;

}
int main {
    vector<int> arr = {12,3,4,5};
    Node* head = removes(head);
    print(head);
}





