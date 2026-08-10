#include<iostream>
#include<math.h>
using namespace std;
int main () {
    int n;
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin >> n;
    int arr[n];
    cout << "ENTER THE ELEMENTS : ";
    for (int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i=1;i<n;i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    
}