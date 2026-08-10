// when a functions keeps on running then it is called a stack overall when numerous fxn calls are waiting 
#include<iostream>
using namespace std;
void name(int i, int n) {
    if (i<=n) {
        cout << " Name ";
        return name(i+1,n);
        }
    else return;

}
int main () {
    int n;
    int i = 0;
    cin >> n;
    name(i, n);
}