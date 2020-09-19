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

int main(){
    Fast_io;
    int query;  cin >> query;
    map <string, int> m;
    int type, mark;
    string name;
    while(query--){
        cin >> type;
        switch(type){
            case 1:
                cin >> name >> mark;
                if(m.find(name) != m.end()){
                    mark += m[name];
                    m[name] = mark;
                } 
                else m.insert(make_pair(name, mark));
                break;
            case 2:
                cin >> name;
                m.erase(name);
                break;
            default:
                cin >> name;
                cout << (m.find(name) != m.end() ? m[name] : 0) << endl;
                break;
        }
    }
    return 0;
}
