#include <iostream> 
using namespace std;
int main(){
    int x;
    printf("Enter the array size: ");
    scanf("%d",&x);
    int * arry = (int *) malloc(x * sizeof(int));
    for(int i = 0; i < x; i++) scanf("%d", &arry[i]);
    for(int i = 0; i < x; i++) cout<<arry[i]<<" ";
    cout<<endl;
}