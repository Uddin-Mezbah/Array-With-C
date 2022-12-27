#include<stdio.h>

int main()
{
    const int n = 20;
    scanf("%d",&n);
    int values[n];

    printf("%d",sizeof(values)/sizeof(values[0]));


}

