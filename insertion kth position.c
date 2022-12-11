#include<stdio.h>
int main()
{
      int Roll[8];
      int SSC_Marks[8];
      char name[8][20];

      int i,j,k,N;
      N=5;

      /// taking input of the students according to roll name SSC_Marks
      for(i=1;i<=N;i++)
      {
            printf("\n\n\n\n\t\tEnter data for student %d\n\n",i);
            printf("\t\tRoll no: ");
            scanf("%d",&Roll[i]);

            printf("\t\tName is: ");
            scanf("%s",name[i]);

            printf("\t\tMarks is: ");
            scanf("%d",&SSC_Marks[i]);
      }

      //printing the data before insertion..
      printf("\n\n\n\n\t\tThe DAta Before insertion:\n\n");
      printf("\t\t-------------------------------------\n");
      printf("\t\tSl no   Roll no     Name  \tMarks\n");
      printf("\t\t-------------------------------------\n");
      for(i=1;i<=N;i++)
      {
            printf("\t\t");
            printf("%5d",i);
            printf("%5d",Roll[i]);
            printf("%15s",name[i]);
            printf("%9d",SSC_Marks[i]);
            printf("\n");
      }
      ///taking the position to insert..

      printf("\n\n\n\t\tEnter the position K : ");
      scanf("%d",&k);

      // making position k enpty..
      for(j=N;j>=k;j--)
      {
            Roll[j+1]=Roll[j];
            SSC_Marks[j+1]=SSC_Marks[j];
            strcpy(name[j+1],name[j]);
      }

      /// putting value to kth position
      printf("\n\n\t\tEnter data of position: %d\n",k);
      printf("\t\t\tRoll no =",k);
      scanf("%d",&Roll[k]);

      printf("\t\t\tName =",k);
      scanf("%s",&name[k]);

      printf("\t\t\tMarks =",k);
      scanf("%d",&SSC_Marks[k]);

      /// incrementing N...
      N=N+1;

      //printing the data after insertion..
      printf("\n\n\n\n\t\tThe DAta after insertion:\n\n");
      printf("\t\t-------------------------------------\n");
      printf("\t\tSl no   Roll no     Name  \tMarks\n");
      printf("\t\t-------------------------------------\n");
      for(i=1;i<=N;i++)
      {
            printf("\t\t");
            printf("%5d",i);
            printf("%5d",Roll[i]);
            printf("%15s",name[i]);
            printf("%9d",SSC_Marks[i]);
            printf("\n");
      }

printf("\n\n\n\n\n\t\t\t\tMd.Mahfujur Rahman\n");
printf("\t\t\t\tRoll no: R-1914037\n");
printf("\t\t\t\tSession: 2019-2020\n\n\n");


}
