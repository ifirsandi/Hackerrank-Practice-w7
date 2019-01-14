https://www.hackerrank.com/challenges/gridland-metro/problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m, k, r, c1, c2;
    scanf("%lld %ld %lld", &n, &m, &k);
    long long count=0;
    for (int i=0; i<k; i++){
        scanf("%lld %lld %lld", &r, &c1, &c2);
        count= count + (c2-c1+1);
    }
    long long hasil= (n*m)-count;
    printf("%lld", hasil);


    return 0;
}


