#include<stdio.h>

int main()
{

    int num[100],i,n;
    printf("How manay numbers: ");
    //printf("Input element :");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&num[i]);
    }

    int max = num[0];

    for (i = 1; i < n; i++){
        if(max < num[i])
            max = num[i];
    }

    printf("Maximum is %d\n",max);
    printf("Maximum occur %d\n",max);






}

