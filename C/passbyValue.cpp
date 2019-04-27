#include <iostream> 
using namespace std;

void change (int x){
    //x = 10;
    cout<<x<<endl;
}
int main(){
    int x = 20;
    change(x);
    cout<<x<<endl;
    return 0;
}