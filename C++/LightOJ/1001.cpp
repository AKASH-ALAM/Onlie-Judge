#include <iostream> 
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int t; cin >> t;
    int total_prb;
    
    list <int> p1;
    list <int>::iterator it1;
    
    list <int> p2;
    list <int>::iterator it2;
    

    int temp;
    while(t--){
        cin >> total_prb;
        if(total_prb > 10){
            temp = total_prb - 10;
            total_prb = 10;
            while(1){
                it1 = find(p1.begin(), p1.end(),temp);
                it2 = find(p2.begin(), p2.end(), total_prb);
                if(it1 == p1.end() && it2 == p2.end()){
                    p1.push_back(temp);
                    p2.push_back(total_prb);
                    cout << temp << " " << total_prb << endl;
                    break;
                } else {
                    temp++;
                    total_prb--;
                }
            }
        } else {
            temp = 0;
            it2 = find(p2.begin(), p2.end(), total_prb);
            if(it2 == p2.end()){
                p1.push_back(temp);
                p2.push_back(total_prb);
                cout << temp << " " << total_prb << endl;
            } else {
                while(1){
                    temp++;
                    total_prb--;
                    it1 = find(p1.begin(), p1.end(),temp);
                    it2 = find(p2.begin(), p2.end(), total_prb);
                    if(it1 == p1.end() && it2 == p2.end()){
                        p1.push_back(temp);
                        p2.push_back(total_prb);
                        cout << temp << " " << total_prb << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}