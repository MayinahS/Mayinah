#include<stdio.h>
#include<stdlib.h>

    int main()

    int Luhn(int t[], int s)

    {   int i=0;
        int sum=0;

        for(i=0; i<s; i++)

    {   if((i%2)==0)
        {t[i]= t[i]*2;

        if(t[i]>=10)
        {
            t[i]=-9;
        }
        }
    }

    for(i=0;i<s; i++)
    {
        sum=t[i];
    }

    if((sum%10)==0)

    {printf("%i is even", 1);}

    else
    {printf("%i is odd", 0);}

        return 0;
    }