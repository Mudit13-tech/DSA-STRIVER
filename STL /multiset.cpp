#include<iostream>
#include<set>
using namespace std;
void explainMultiset() {
    // everything same as set
    // but stores duplicate elements alsoo

    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //removes all occcurances of 1

    ms.erase(ms.find(1));
    // find points at the iterator so we delete that particular address to remove a single element

}