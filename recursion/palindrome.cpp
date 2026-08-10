#include<iostream>
using namespace std;
bool palincheck(int i, string str, int n) {
    if (i >= n / 2) {
        return true;
    }
    if (str[i] == str[n - 1 - i]) {
        return palincheck(i + 1, str, n);
    } else {
        return false;
    }
}
  
int main () {
    string str;
    cout << "ENTER THE STRING : ";
    cin >> str;
    int n = str.length();
    if (palincheck(0, str, n)) {
        cout << "PALINDROME";
    } else {
        cout << "NOT A PALINDROME";
    }
    
}