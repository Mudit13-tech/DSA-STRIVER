#include<iostream>
using namespace std;
void explainPQ (){
    priority_queue<int>pq;
    // maintains the order bigger no. at top

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    
    cout<< pq.top(); //prints 8

    //MINIMUM HEAP
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); //prints 2
}
int main () {

}