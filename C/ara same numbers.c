#include <stdio.h>
int main()
{
    int i;
    int total_marks[] ={89,80,87,98,90,97,96,97,98,67, 89,89,87,98,90,97,96,97,94,67,89,80,57,98,90,97,96,77,98,67,89,80,87,68,90,97,96,97,98,67};
    int marks_count[101];
    for(i = 0; i < 101; i++){
            marks_count[i] = 0;
        }
        for(i = 0; i < 40; i++){
         marks_count[total_marks[i]]++;
        }
      for(i = 50; i <= 100; i++){

    printf("Marks: %d Count: %d\n", i, marks_count[i]);
}
    return 0 ;
}
