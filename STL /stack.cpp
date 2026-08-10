#include<iostream>
using namespace std;
void explainStack() {
    //LIFO - LAST IN FIRST OUT LOGIC
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.emplace(5);  //{5,3,2,1}

    cout<< st.top(); 
    //prints 5 ; st[2] is invalid no indexing in stack
    
    st.pop(); //{3,2,1}
    st.size(); // 3 is the size

    stack<int> st1,st2;
    st1.swap(st2);

   // O(1) : TIME COMPLEXITY


}

int main (){

}