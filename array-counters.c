#include<stdio.h>

int main()
{
    int number_of_users;
    scanf("%d",&number_of_users);

    int ratings[number_of_users];
    for (int i = 0; i<number_of_users; i++){
        scanf("%d",&ratings[i]);
    }

    int sum = 0;
    for (int i = 0; i<number_of_users; i++){
        sum += ratings[i];
        //printf("%d",ratings[i]);
    }

    double average = (double)(sum)/number_of_users;
    printf("Average = %lf",average);


    //int count[];

    for(int val = 1; val<=5; val++){
            int count = 0;
            for(int i = 0; i<number_of_users;i++){
                if (ratings[i]==val){
                    count++;
                }

            }
            printf("%d -> %d\n",val,count);

    }


}



