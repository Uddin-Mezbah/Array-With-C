#include<stdio.h>

int main()
{
    //int n = 3;
    int mark[3];

    for (int i = 0; i < 3; i++){
        printf("Enter STudent %d Mark:", i+1);
        scanf("%d",&mark[i]);
    }
    for (int i = 0; i <3; i++){
        mark[i] += 3;
    }

    for (int i = 0; i<3; i++){
        printf("Student %d got %d marks\n",i+1,mark[i]);
    }


//    printf("STuddent 1 got %d marks\n",mark1);
//    printf("STuddent 2 got %d marks",mark2);
//    printf("STuddent 3 got %d marks",mark3);

}

///TYPE name [size];
