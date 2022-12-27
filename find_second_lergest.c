#include<stdio.h>

int main(){

    int ara[100],i,large1,large2,temp;
    printf("Enter element: ");
    for (i-0;i<5;i++){
        scanf("%d",&ara[i]);
    }
    large1=ara[0];
    large2=ara[1];

    if(large1<large2)
    {
        //temp=large1;
        large1=large2;
        //large2=temp;
    }

    for(i=2;i<5;i++)
    {
        if(ara[i]>=large1)
        {
            large2 = large1;
            large1 = ara[i];
        }
        else if(ara[i]>= large2)
        {
            large2 = ara[i];
        }

    }


            printf("Second largest number %d\n",large2);


}
