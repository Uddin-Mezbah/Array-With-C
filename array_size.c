#include<stdio.h>

int main()
{
    const int n = 10;
    int values[10];

    for (int i = 0; i < 10; i++){
        values[i] = i+1;
    }

    values[4] *= 5;
    values[5] = values[1] +  values[1];

    for (int i = 0; i <10; i++){
        printf("values[%d = %d\n",i,values[i] );
            }




}

