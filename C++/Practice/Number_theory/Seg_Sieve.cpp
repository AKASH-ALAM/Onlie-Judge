#include <bits/stdc++.h>
using namespace std;
#define MAX 32000   
using ll = long long;
vector <int> primes;

void sieve(){
    bool isPrime[MAX];
    for(int i = 0; i < MAX; i++) isPrime[i] = true;

    for(int i = 3; i*i < MAX; i += 2){
        if(isPrime[i]){
            for(int j = i*i; j < MAX; j += i){
                isPrime[j] = false;
            }
        }
    }
}

int main(){
    /* int t;  cin >> t;
    ll l, r;    cin >> l >> r; */
    sieve();

    return 0;
}