#include <stdio.h>

int main()
{

    char day[10];

    if(gets(day) == "Friday")
    {
        printf("You don't have to go to college");
    }
    else
    {
        printf("something wrong");
    }
    return 0;
}
