https://www.hackerrank.com/challenges/almost-sorted/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the almostSorted function below.


int main()
{
    int n;
    scanf("%d", &n);
    int ar1[n];
    int ar2[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ar1[i]);
        ar2[i]=ar1[i];
    }
    int reverse=0;
    int swap=0;
    int a, b, c, d;
    //swap
    for (int i=0; i<n; i++){
        if(ar1[i]>ar1[i+1] && i!=(n-1)){
            swap++;
            c=i;
            //printf("berhasil");
        } else if ((ar1[i]<ar1[i-1]) && (swap==1)){
            swap=-1;
            d=i;
        }
    }
    if (swap==(-1)){
        int temp=ar1[c];
        ar1[c]=ar1[d];
        ar1[d]=temp;
        for (int i=1; i<n; i++){
            if(ar1[i]<ar1[i-1]){
                swap++;
            }
        }
    }

    //reverse
    for (int i=0; i<n; i++){
        if(ar2[i]>ar2[i+1] && i!=(n-1)){
            reverse++;
            a=i;
            int temp=ar2[i];
            while(ar2[i]>ar2[i+1]){
                i++;
            }
            b=i;
            if (ar2[i+1]<temp){
                reverse++;
            }
            //printf("berhasil");
        }
    }
    if (swap==(-1)){
        printf("yes\nswap %d %d", c+1, d+1);
    } else if (reverse == 1){
        printf("yes\nreverse %d %d", a+1, b+1);
    } else {
        printf ("no");
    }

    return 0;
}


