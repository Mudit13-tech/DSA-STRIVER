#include<iostream>
using namespace std;
void pattern(int n) {
    for (int i=1;i<=n;i++) {
        for (int a=5;a>i;a--) {
            cout << " ";
        }
        for (int b=1;b<=i;b++) {
            cout << "*";
        }
        for (int c=1;c<i;c++) {
            cout << "*";
        }       
        cout << endl;
    }
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