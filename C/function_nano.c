#include<stdio.h>
int name(int a){
    int result;
    if (a % 2 == 0 ){
        result = 0;
    }
    else if (a % 2 == 1){
        result = 1;
    }
    return result;
}

int main()
{
    int result= name(3);
    if(result == 0 ){
        printf("Even");
    }
    else if(result == 1){
        printf("Odd");
    }

}
