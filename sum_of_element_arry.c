#include<stdio.h>

int main()
{

    int num[100],i,sum=0;

    num[0] = 10;
    num[1] = 20;
    num[2] = 30;
    num[3] = 40;
    num[4] = 50;
    //num[0] = 10;

    for(i = 0; i<=4; i++){
        sum = sum+num[i];
    }
    printf("Sum of all elements = %d\n",sum);

//    int sum = num[0]+num[1]+num[2]+num[3]+num[4];
//    printf("Sum of all elements = %d\n",sum);


}
