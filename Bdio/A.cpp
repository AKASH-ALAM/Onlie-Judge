#include <bits/stdc++.h>
#include <math.h>
//#include "area.h"
int get_area(int a, int b, int c) {
	if((a < (b+c)) && (b < (a+c)) && (c < (a+b)))
    {
        int s = (a+b+c)/2;
        int Area = sqrt((s*((s-a)*(s-b)*(s-c))));
        return Area;
    }
}

int main()
{
	int res = get_area(3,4,5);
	printf("%d", res);
	return 0;
}
