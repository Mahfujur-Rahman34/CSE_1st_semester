#include<stdio.h>

int MIN(int ,int);
int main()
{
      printf("\n\n**************************************************\n      WARSHALL's Shortest path Algorithm\n**************************************************\n");

      int W[5][5]={{0},{0},{0},{0},{0}};
      int Q[5][5];
      int i,j,k,a;

      W[1][2]=2;
      W[1][3]=5;
      W[1][4]=4;

      W[2][4]=1;
      W[2][3]=3;

      W[3][2]=7;
      W[4][3]=5;

      W[3][4]=0;
      W[4][4]=0;

      printf("\n\nWeight Matrix of Graph G:\n");
      for(i=1;i<=4;i++)
      {
            for(j=1;j<=4;j++)
            {
                  printf("%8d",W[i][j]);
            }
            printf("\n");
      }

      for(i=1;i<=4;i++)
     {
           for(j=1;j<=4;j++)
           {
                if(W[i][j]==0)
                {
                      Q[i][j]=9999;
                }
                else{
                      Q[i][j]=W[i][j];
                }
           }
     }

     for(k=1;k<=4;k++)
     {
           for(i=1;i<=4;i++)
           {
                for(j=1;j<=4;j++)
                {
                      Q[i][j]=MIN(Q[i][j],Q[i][k]+Q[k][j]);
                }
           }
     }

     // printing the the Shortest path matrix..
     printf("\n\nThe shortest Path Matrix is : \n");
     for(i=1;i<=4;i++)
     {
          for(j=1;j<=4;j++)
          {
                // if(Q[i][j]== 9999)
                // {
                //       printf(" INFINITY ");
                // }
                // else
                // {
                     printf("%8d",Q[i][j]);
                // }

          }
          printf("\n");
     }
printf("\n\n\n\n\n\n\n\nMd.Mahfujur Rahman.\nRoll no: R-1914037\nsession: 2019-2020\n\n");
}

int MIN(int x,int y)
{
      if(x<y)
      {
            return(x);
      }
      else
      {
            return(y);
      }
}
