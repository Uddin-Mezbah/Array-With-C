#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int anser[t];

    for(int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        int freq_ary[n];

        for(int j = 0; j < n; j++){
            scanf("%d", &freq_ary[j]);
        }

        for(int j = 0; j < n; j++){
            int count = 0;
            for(int k = 0; k < n; k++)
            {
                if(freq_ary[j] == freq_ary[k]){
                    count++;
                }
            }

            if(count == 1){
                anser[i] = j + 1;
            }
        }
    }

    for(int i = 0; i < t; i++){
        printf("%d\n", anser[i]);
    }
}



