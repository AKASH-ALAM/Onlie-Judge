#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        vector <int> li;
        vector <int>::iterator it, jt;

        int n, a; cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            li.push_back(a);
        }

        for(it = li.begin(); it != li.end(); it++){
            bool flag = true;
            for(jt = li.end() - 1; jt >= li.begin(); jt--){
                int a = *it;
                int b = *jt; 
                cout << a << " " << b << endl;
                int tmp = abs(b - a);
                if(tmp > 1) flag = false;
                if(tmp <= 1){
                    flag = true;
                    if(a < b){
                        li.erase(it);
                        it = li.begin();
                    } 
                    else{
                        li.erase(jt);
                        jt = li.end();
                    } 
                }
            }
            if(!(flag)) break;
        }
        /* for(it = li.begin(); it != li.end(); it++){
            cout << *it << " ";
        } cout << endl; */

        if(li.size() == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}