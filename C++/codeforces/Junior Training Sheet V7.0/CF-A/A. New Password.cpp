#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */

    int n, k; cin >> n >> k;
    int tmp = k;
    char ch = 'a';
    string s;
    int i = 1;
   
    while(tmp--){
        s += ch;
        ch = ch + i;
        if(ch == 'z'){
            ch = 'a';
            i = 1;
        }
    }

    for(int i = 0; i < n; i++){
        if(s[i] == '\0') i = 0;
        else cout << s[i];
    } cout << endl;

    return 0;
}