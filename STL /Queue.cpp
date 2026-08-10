#include<iostream>
using namespace std;
void explainQueue() {
    // FIFO : FIRST IN FIRSTT
    queue<int> q;
    q.push(1); //{1}
    q.push(4); //{1,4,5}
    q.back()+=5;
    // this means adding 5 to the last element

    cout << q.back(); //prints 10
    q.pop(); // q={4,10}

    cout<< q.front(); //prints 4
    

}

int main (){

}
