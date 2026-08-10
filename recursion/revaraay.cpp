#include<iostream>
using namespace std;
int revarray(int arr[], int n) {
    int temp;
    for (int i = 0;i < n/2; i++) {
        temp=arr[i];
        arr[i]=arr[(n-1)-i];
        arr[(n-1)-i]=temp;
    }
    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}
int main () {
    int n;
    cout << " ENTER THE SIZE OF ARRAY";
    cin >> n;
    int arr[n];
    for (int i =0;i<n;i++) {
        cin >> arr[i];
    }
    revarray(arr, n);
}