#include <stdio.h>


int main()
{
    int n;
    scanf("%d",&n);

    int array[n];
    for(int i = 0; i<n;i++){
        scanf("%d",&array[i]);
    }

    int array2[n];
    for(int i=0; i<n; i++){
        array2[n-1-i] = array[i];
    }

    for(int i=0; i<n; i++){
        printf("%d ",array2[i]);
    }
}

