#include <stdio.h>
int main()
{
    int n,k;
    int ary[100],sum=0;
    scanf("%d%d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&ary);
    }
    for(int i=0;i<n;i++){
        if(ary[i]>=ary[k-1]&&ary[i]>0)
            sum++;

    }
    printf("%d\n",sum);

}


//#include<stdio.h>
//
//int main()
//{
//    int n,k,a[50],sum=0,i;
//    scanf("%d%d",&n,&k);
//    for(i=0; i<n; i++)
//    {
//        scanf("%d",&a[i]);
//    }
//    for(i=0; i<n; i++)
//    {
//        if(a[i]>=a[k-1]&&a[i]>0)
//            sum++;
//    }
//    printf("%d\n",sum);
//    return 0;
//
//}
