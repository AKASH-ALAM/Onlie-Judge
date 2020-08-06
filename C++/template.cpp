#include <bits/stdc++.h>
#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;
 
bitset<MAX> marked;
vector<int> primes;
 
void sieve() {
    for (int i = 3; i * i <= MAX; i += 2) {
        if(marked[i] == false) {
            for (int j = i * i; j <= MAX; j += 2 * i) {
                marked[j] = true;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= MAX; i += 2) {
        if(marked[i] == false)
            primes.push_back(i);
    }
}
 
int main()
{
    Fast_io;
    sieve();

    return 0;
}