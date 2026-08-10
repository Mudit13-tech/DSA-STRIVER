#include<iostream>
using namespace std;
int main () {
    string s;
    cin >> s;

    //pre compute 
    int hash[256]={0};
    for (int i=0;i<s.length();i++){
        hash[s[i]]++;
    }

    int q; //(no. of queries)
    cout << "ENTER NO. OF QUERIES: ";
    cin >> q;
    while (q--) {
        char c ;
        cout << "Enter the character: ";
        cin >> c; //(which querie)
        cout << hash[c] << endl;
    }

}