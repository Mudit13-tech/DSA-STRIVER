#include<iostream>
using namespace std;
void explainPair() {
    pair<int,int> p1 ={1,3};
    cout << p1.first << " " << p1.second;
    
    //FOR STORING 3 VARIABLES-NESTED PAIR
    pair<int,pair<int,int>> p2={1,{2,3}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first;


    //NESTED-NESTED PAIRS
    pair<int,pair<int,pair<int,int>>> p3= {1,{2,{3,4}}};


    //PAIR- ARRAY 
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
}


int main() {
    explainPair();
}