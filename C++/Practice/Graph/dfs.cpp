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
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int adj[100][100];
int color[100];
int node, edge;

void dfsVisite(int x){
    color[x] = GRAY;
    for(int i = 0; i < node; i++){
        if(adj[x][i] == 1){
            if(color[i] == WHITE){
                dfsVisite(i);
            }
        }
    }
    color[x] = BLACK;
}
void dfs(){
    for(int i = 0; i < node; i++){
        color[i] = WHITE;
    }
    for(int i = 0; i < node; i++){
        if(color[i] == WHITE){
            dfsVisite(i);
        }
    }
}
int main(){
    Fast_io;
    freopen("input.txt", "r", stdin);
    cin >> node >> edge;
    int n1, n2;
    for(int i = 0; i < edge; i++){
        cin >> n1 >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
    dfs();
    return 0;
}
