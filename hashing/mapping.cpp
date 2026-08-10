#include<iostream>
#include<map>
using namespace std;
int main () {
    int n;
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    map<int,int> mpp;
    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }

    int q;
    cout << "ENTER NO. OF QUERIES : ";
    cin >> q;
    while(q--) {
        int nums;
        cin >> nums;
        cout << mpp[nums];
    }
    

}