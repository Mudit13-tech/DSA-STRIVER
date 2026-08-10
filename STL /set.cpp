#include<iostream>
#include<set>
using namespace std;
void explainSET () {
    // stores unique and sorted order 
    set<int> st;
    // {1,2,3,4,5}
    auto it = st.find(3);
    // this will give the address of 3

    auto it = st.find(6);
    // this will give the address of the set after the last element
}