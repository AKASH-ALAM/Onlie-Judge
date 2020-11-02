/**
 *    Author:  AKASH-ALAM       
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) <<endl
#define READ(filename)  freopen(filename, "r", stdin);
#define WRITE(filename)  freopen(filename, "w", stdout);
#define Fast_io     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;

int main(){
    Fast_io;
    int n, m;   cin >> n;
    vector <int> arr, brr;
    for(int i = 0; i < n; i++){
        int tmp;    cin >> tmp;
        arr.push_back(tmp);
    }
    cin >> m;
    for(int i = 0; i < m; i++) {
        int tmp;    cin >> tmp;
        brr.push_back(tmp);
    }
    for(int i = 0; i < n; i++){
        auto it = find(brr.begin(), brr.end(), arr[i]);
        if(it != brr.end()) brr.erase(it);
    }
    set <int> s;
    for(auto x : brr) s.insert(x);
    for(auto x : s) cout << x << " ";
    cout << endl;
    return 0;
}
