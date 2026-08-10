#include<iostream>
using namespace std;
void explainVector() {
    vector<int> v;
    v.push_back(1); // pushback creates an empty container and pushback(1) puts 1 in thatt {1}
    v.emplace_back(2); //increases the size and puts 2 also in the container aa=nd it becomes {1,2}

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    // or you can use emplace_back as well:
    vec.emplace_back(1,2);

    vector<int> v(5,100);
    // v is an array ; v= {100,100,100,100,100}

    vector<int> v1(5);
    // v1 will noww have either 0 or some garbage value instead of 100

    vector<int> v2(5,20);
    vector<int> v3(v2); //creates a copy of v2

    /*
    ITERATORS:
    SIMILAR TO POINTERS 
    BASICALLY IT STORES THE MEMORY ADDRESS AND IF WE USE * THEN IT POINTS TO THE VALUE AT THAT MEMORY
    */
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) << " ";
    it=it+2;
    cout<< *(it) << " ";
    vector<int>::iterator it = v.end();
    vector<int>::reverse_iterator rit = v.rend();
    vector<int>::reverse_iterator rit2 = v.rbegin();

    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++) {
        cout << *(it) << " ";
    }
    //v.end() points to the theoretical element just after the last eleement 

    for(auto it = v.begin(); it!=v.end();it++){
        cout << *(it) << " ";
    }

    for(auto it : v) {
        cout << it << " ";
    }

    //{10,20,30,12,35}
    v.erase(v.begin()+1,v.begin()+4);
    // {10,30,35}. {start,end} for end give the address of the element next to the element to be deleted
    

    //INSERT FUNCTION 
    vector<int> v(2,100);
    v.insert(v.begin(),300);
    v.insert(v.begin()+1,2,10);
    // v.insert(position , no. of elements , which element)
    // {10,20,30} - initial
    // {10,10,10,20,30} - final

    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout<< v.size(); //gives no. of elements in the vector

    v.pop_back(); //deletes the last element

    //v1={10,20}
    //v2={30,40}
    v1.swap(v2); //v1 = {30,40} , v2 = {10,20}

    v.clear(); //erases the entire vector
    cout << v.empty(); 


}
int main() {

}