#include <bits/stdc++.h>
using namespace std;

int main(){ 
    priority_queue <string> q;
    q.push("Alam");
    q.push("Pakhi");
    q.push("Sallu");
    q.push("Sajib");
    q.push("Rasel");
    q.push("Akash");

    while(!q.empty()){
        string s = q.top();
        cout << s << endl;
        q.pop();
    }

    return 0;
}