#include<iostream>
using namespace std;
void linear_print(int i,int n) {
        
        if (i<=n) {
        cout << " " << i ;
        return linear_print(i+1,n);
        }
        else return;
}
int main () {
    int n;
    cin >> n;
    int i=1;
    linear_print(i,n);

}