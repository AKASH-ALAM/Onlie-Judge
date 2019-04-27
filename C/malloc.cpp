#include <iostream>
using namespace std;
struct mystruct{
    int age;
    float height;
};
int main(){
    struct mystruct *ps;
    ps = (struct mystruct *) malloc(sizeof(struct mystruct));
    ps -> age = 20;
    ps -> height = 5.5;
    cout<<ps->age<<endl<<ps->height<<endl;
    return 0;
}