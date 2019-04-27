
#include<stdio.h>
int main()
{
    char s[16]="AkasH";
    char s1[16]="Rahim";
    int i,count=0;
    for(i=0;s[i]!='\0';i++){
        count++;


        }
     for(i=0;i<=count-1;i++){
            if(s[i]>='a' && s[i]<='z'){
             printf("%c",(s[i]-32));
            }
            else{
                printf("%c",s[i]);
            }
    }
}
