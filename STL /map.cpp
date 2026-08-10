#include<iostream>
#include<map>
using namespace std;

void explainMap() {
    // similar to dictionaries key: value pair
    // key is unique, first one is key
    map<int,int> mpp;
    map<int, pair<int,int>> mpp;

    mpp[1] = 2; //{1,2}
    mpp.emplace(3,1); // {1,2},{3,1}
    
    //keys are stored in a sorted order
    

}