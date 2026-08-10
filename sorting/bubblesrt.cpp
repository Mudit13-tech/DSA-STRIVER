#include <iostream>
using namespace std;
void bubblesort(int arr[],int n) {
    for (int i = n-1;i>=0;i--) {
        int didSwap = 0;
        for (int j = 0;j<i;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }    
        }
        if (didSwap==0) {
            break;
        }
    }
}
int main () {
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY : "  ;
    cin >> n;
    int arr[n];
    for (int i = 0;i<n;i++) {
        cout << "ENTER THE ELEMENT AT INDEX " << i << " : ";
        cin >> arr[i];
    }
    bubblesort(arr,n);
    cout << "SORTED ARRAY :" << endl;
    for (int i = 0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}