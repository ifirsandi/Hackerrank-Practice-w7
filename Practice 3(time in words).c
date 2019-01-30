https://www.hackerrank.com/challenges/the-time-in-words/problem

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char words[][21] = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};

int main()
{
    int h,m;
    scanf("%d", &h);
    //printf("%s", words[h]);
    scanf("%d", &m);
    if (m==0){
        printf("%s %s", words[h], words[m]);
    }
    else{ 
        if (m<=30){
            if (m==30){
                printf("half ");
            }
            else if (m==15){
                printf("%s ", words[m]);
            }
            else if (m==1){
                printf("%s minute ", words[m]);      
            }
            else if (m<21){
                printf("%s minutes ", words[m]);      
            }
            else {
                printf("%s %s minutes ", words[20], words[m-20]);
            }
            printf ("past ");
        }
        else {
            m=60-m;
            if (m==15){
                printf("%s ", words[m]);
            }
            else if (m==1){
                printf("%s minute ", words[m]);      
            }
            else if (m<21){
                printf("%s minutes ", words[m]);      
            }
            else {
                printf("%s %s minutes ", words[20], words[m-20]);
            }
            printf ("to ");
            h++;
        }
        printf("%s", words[h]);
    }

    //printf("%s", words[h]);

    return 0;
}


