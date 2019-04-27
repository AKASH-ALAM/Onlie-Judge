#include<stdio.h>
int suma(int a){
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
    int save = suma(6);
    if(save % 2 == 0){
       printf("Even.\n");
    }
    else{
        printf("Odd.\n");
    }

}
