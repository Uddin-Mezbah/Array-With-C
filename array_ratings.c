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


    int count[6]= {0};

    for(int i = 0; i<number_of_users;i++){
                int x = ratings[i];
                count[x]++;
            }
            for(int i = 1; i <= 5; i++){
                     printf("%d -> %d\n",i,count[i]);


            }




}



