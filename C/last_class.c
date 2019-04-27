#include <stdio.h>
struct library{
        char title[100];
        char author[20];
        char subject[10];
        int books_id;
    }a,b,c;
int main()
{
    struct library d[60];
    d[0].title = "Name";
    d[0].author = "Sajib";
    d[0].subject = "Sohel";
    d[0].books_id = 1234521;
    d[1].title = "Nothing";
    d[1].author = "Akash";
    d[1].subject = "Akash";
    d[1].books_id = 254788;
    printf(" %s\n %s\n %s\n %d\n",d[0].title,d[0].author,d[0].subject,d[0].books_id);

}
