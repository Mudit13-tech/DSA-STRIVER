#include<iostream>
using namespace std;
void pattern (int n) {
    for (int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            if ((i+j)%2==0) {
                cout << "1" ;
            }
            else {
                cout << "0" ;
            }
            }
            cout << endl; 
        }
        
    }

int main () {
    int n;
    cout << "ENTER THE VALUE OF N : " ;
    cin >> n;
    pattern(n);
}