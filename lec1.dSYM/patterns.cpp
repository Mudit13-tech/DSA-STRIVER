#include<iostream>
using namespace std;
void pattern(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<i;j++) {
            cout << " ";
        }
        for (int k=5; k>=i; k--) {
            cout << "*";
        }
        for(int l=5;l>i;l--) {
            cout << "*";
        }
        
        cout << endl;
    }
    
}
int main () {
    int n;
    cin >> n;
    pattern(n); 
}