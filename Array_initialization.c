#include<stdio.h>

int main()
{
//  double values [10];
//
//  for (int i = 0; i < 10; i++){
//    values[i] = i +1;
//  }
//  for (int i = 0; i <10; i++){
//    printf("%lf\n",values[i]);
//

    //double values[5] = {1, 2, 3, 4, 5};
    double values[] = {1, 2, 3, 4, 5};
    //double values[5] = {1, 2, 3};

    int sz = sizeof(values)/sizeof(values[0]);
    printf("Size = %d\n",sz);
    for (int i = 0; i < 5; i++){
        printf("%lf\n",values[i]);
    }


}

/**

Type name[size] = {value0,value1.....};

*/


