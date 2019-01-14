https://www.hackerrank.com/challenges/taum-and-bday/problem

#include <stdio.h>


// Complete the taumBday function below.
//long long mins(long int a, long int b, long int c);
long int mins(long long a,long long b, long long c)
    {
    if(a<=b&&a<=c)
        return a;
    if(b<=a&&b<=c)
        return b;
    return c;
}

int main()
{
   int test;
   scanf ("%d", &test);
   for (int t=0; t<test; t++){
       long long b, w;
       scanf("%lld %lld", &b, &w);
       long long bc, wc, z;
       scanf ("%lld %lld %lld", &bc, &wc,&z);
       long long kasus = b*bc + w*wc;
       long long kasus1 = (b+w)*bc + w*z;
       long long kasus2 = (b+w)*wc +b*z;
       printf("%lld", mins(kasus, kasus1, kasus2));
       printf ("\n");
   }
    return 0;
}


