#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int x, Node* nxt) {
        data = x;
        next = nxt;
    }
};
Node* convertvecttoL(vector<int> &arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;
    for (int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> arr = {12,5,6,8};
    Node* head = convertvecttoL(arr);
    cout << head->data;

    // traversing 
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}



//LENGHT OF A LINKED LIST
int lenghtofLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

//SEARCHING IN LINKED-LIST
int checkifPresent(Node* head,int value){
    Node* temp = head;
    while(temp){
        if(temp->data != value){
            temp = temp->next;
        }
        else {
            return true;
        }
    }
}
