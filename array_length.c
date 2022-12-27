#include<stdio.h>

int main()
{
    int students;
    printf("Enter number of students:");
    scanf("%d",&students);

    int mark[students];

    for (int i = 0; i < students; i++){
        printf("Enter STudent %d Mark:", i+1);
        scanf("%d",&mark[i]);
    }

    for (int i = 0; i<students; i++){
        printf("Student %d got %d marks\n",i+1,mark[i]);
    }


}

