#include<iostream>
using namespace std;
    void arrrev(int i,int arr[],int n) {
        if (i>=n/2) {
            return;
        }
        swap(arr[i],arr[(n-1)-i]);
        arrrev(i+1,arr,n);
    }
int main () {
    int n;
    cout << "ENTER THE SIZE OF ARRAY " ;
    cin >> n;
    int arr[n];
   
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    cout << "THE ARRAY IS : {" ;
    for (int i=0;i<n;i++) {
        cout << arr[i] << " " ;
    }
    cout << "}" << endl;

    arrrev(0,arr,n);
    cout << "THE REVERSED ARRAY IS : {" ;
    for (int i=0;i<n;i++) {
        cout << arr[i] << " " ;
    }
    cout << "}" ;

}