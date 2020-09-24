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
#define Fast_io    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
using namespace std;
string weightedUniformStrings(string s, int q){        
    string ans = "No";
    vector <int> v;
    int d;
    for(int i = 0; i < s.size(); i++){
        d = (int) s[i] - 96;
        v.push_back(d);
    }
    auto it = find(v.begin(), v.end(), q);
    if(it != v.end()) ans = "Yes";
    else {
        long long cnt = 0;
        int ck = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i] == v[i+1]){
                cnt += v[i];
                ck = v[i];
            } 
            else if(ck == v[i]){
                cnt += v[i];
                if(cnt == q){
                    ans = "Yes"; 
                    break;
                } 
                else cnt = 0;
            } 
            else cnt = 0; 
        }
    }
    return ans;
}
int main(){
    Fast_io;
    string s, ans;   cin >> s;
    int n, tmp; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        ans = weightedUniformStrings(s, tmp);
        cout << ans << endl;
    }
    return 0;
}
