#include<stdio.h>
#include<string.h>

int main()
{
    char T[30],P[30],item;
    int S,R,L,K,count,MAX;

    printf("Enter a text: ");
    gets(T);
    printf("Enter a pattern: ");
    gets(P);
    S=strlen(T);
    R=strlen(P);
    K=0; MAX=S-R;

    while(K<=MAX)
    {
        for(L=0;L<R;L++)
        {
            if(P[L]!=T[K+L])
            {
                goto label;
            }
        }
        if(L==R)
        {
            count++;
            goto label;
        }
        else
        {
            label:
                K=K+1;
        }
    }

    printf("The number of occurance: %d\n\n",count);
}
