#include <bits/stdc++.h>
using namespace std;

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */
    int n, t, k, d; cin >> n >> t >> k >> d;
    int time_left, oven_one, oven_two, total_time, total_cake = 0;

    total_time = (n / k) * t;
    cout << "Total time : " << total_time << endl;
    oven_two = d + t;
    time_left = total_time - oven_two;
    total_cake += k;
    oven_one = (oven_two / t) * k;
    total_cake += oven_one;
    
    /* cout << "Time left: " << time_left << endl;
    cout << "Total Cake : " << total_cake << endl; */

    if(total_cake >= n && time_left > 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}