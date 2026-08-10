#include<iostream>
using namespace std;
void pattern(int n) {
    int a=1;
    for (int i=1;i<=5;i++) {
        for (int j=0;j<i;j++){
            cout << a;
            cout << " ";
            a=a+1;
        }
        cout << endl;
    }
}

int main () {
    int n;
    cin >> n;
    pattern(n);
}