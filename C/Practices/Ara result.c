#include <stdio.h>
int main()
{
    int ft_marks[40] = {62, 87, 89, 80, 67, 56, 90, 91, 92, 82, 47, 52, 51, 47, 43, 56, 57, 67, 56, 71, 72, 73, 74, 75, 76, 78, 80, 66, 69, 68, 78, 87, 89, 80, 67, 56, 90, 91, 92, 82},
    st_marks[40] =     {78, 87, 89, 80, 67, 56, 90, 91, 92, 82, 78, 87, 89, 80, 67, 56, 90, 91, 92, 82, 71, 72, 73, 74, 75, 76, 78, 80, 66, 69,47, 52, 51, 47, 43, 56, 57, 67, 56, 71},
    final_marks [40] = {78, 87, 89, 80, 67, 56, 90, 91, 92, 82, 71, 72, 73, 74, 75, 76, 78, 80, 66, 69,47, 52, 51, 47, 43, 56, 57, 67, 56, 71, 76, 78, 80, 66, 69, 68, 78, 87, 89, 80};
    int i;
    double total_marks[40];
    for(i = 0; i < 40; i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] /2.0;
    }
    for(i = 1; i <= 40; i++){
        printf("Roll Number: %d\t Total marks: %.lf\n", i, total_marks [i-1]);
    }
    return 0;
}

