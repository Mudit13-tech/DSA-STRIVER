#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "SIZE OF ARRAY : ";
    cin >> n;
    int arr[n];
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }

    //hashing-precompute 
    int hash[100] = {0};
    for (int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    //queries
    int q; //(no. of queries)
    cout << "ENTER NO. OF QUERIES: ";
    cin >> q;
    while (q--) {
        int num;
        cout << "Enter the num: ";
        cin >> num; //(which querie)
        cout << hash[num] << endl;
    }
}