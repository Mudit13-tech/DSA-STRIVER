#include<iostream>
using namespace std;
void check_prime(int n) {
    int count=0;
    for (int i=1;i*i<=n;i++) {
        if (n%i==0) {
            count+=1;
            if ((n/i)!=i) {
                count +=1;
            }
        }
    }
    if (count==2) {
        cout << n << " is a Prime Number";
    }
    else {
        cout << n << " is not a Prime Number";
    } 
}
int main() {
    int n;
    cout << "ENTER THE NO.";
    cin >> n;
    check_prime(n);
}



// to count prime numbers : but time limit exceeded in this case ; revise
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        int prime = 0;     
        for (int i=2;i<n;i++) {
            for (int j=1;j*j<=i;j++){
                if (i%j==0){
                    count +=1;
                    if ((i/j)!=j){
                        count +=1;
                    }
                }
            }
            if (count == 2) {
                prime +=1 ;
            }  
            count = 0 ;     
        }
        return prime;
    }
};

//OPTIMAL WAY TO SOLVE FOR INTERVIEWS :
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n,true);
        if (n<2){
            return 0;
        }
        isPrime[0]= false;
        isPrime[1]= false;

        for (int i=2;i*i<n;i++){
            if (isPrime[i]) {
                for(int j=i*i ; j<n ; j+=i) {             
                    isPrime[j]=false;
                }
            }
        }
        int count =  0;
        for (int i=2;i<n;i++) {
            if (isPrime[i]) {
                count += 1;
            }
        }
    return count;   
    }
};