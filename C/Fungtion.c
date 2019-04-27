#include <stdio.h>
double pi = 3.12;
void my_fnc(){
    pi = 3.1245;
    return;
}
int main ()
{
    printf("%lf\n",pi);
    my_fnc();
    printf("%lf",pi);
    return 0;
}
