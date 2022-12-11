#include<stdio.h>
#include<string.h>

int main()
{
    char T[30],P[30];
    int L,R,S,MAX,K,INDEX,count;
    printf("Enter a text: ");
    gets(T);
    printf("Enter a word: ");
    gets(P);

    S=strlen(T);
    R=strlen(P);
    K=0; MAX=S-R;
    while(K<=MAX)
    {
        for(L=0;L<R;L++)
        {
            if(P[L] != T[K+L])
            {
                goto label;
            }
        }
        if(L==R)
        {
            count++;
            goto label;
        }
        else{
            label :
                K++;
        }
    }
    if(count==0)
    {
        printf("No occurance found.");
    }
    else
    {
        printf("\nThe number of occurance : %d\n\n",count);
    }
}
