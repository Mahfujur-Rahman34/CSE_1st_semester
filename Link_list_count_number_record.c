#include<stdio.h>
void Built_link_List();
void set_Avail();

int Roll[100]={0};

int Marks[100]={0};
int Link[100]={0};
int List_Avail[100];
int count=0;

int ptr,start,i,j,n,New,Avail,s_roll,found=0;

int main()
{
    printf("\n\nBe carful of giving input.\nGive index 0 to terminate\n");
    Built_link_List();
    printf("\nThe number of records : %d\n\n",count);
    show_Link_list();

    printf("\n\n\nMahfujur Rahman\nCSE_19-20\n\n");
}

void Built_link_List()
{
      printf("\nEnter start pointer: ");
      scanf("%d",&start);

      printf("\n\nEnter record of link list: \n\n");
      ptr=start;
      for(i=1;i<=100 && ptr!=0;i++)
      {
            printf("Record for student %d:\n",i);
            printf("Enter Roll : ");
            scanf("%d",&Roll[ptr]);
            printf("Enter Marks: ");
            scanf("%d",&Marks[ptr]);

            printf("Set Next node index: ");
            scanf("%d",&Link[ptr]);
            count++;

            ptr=Link[ptr];
            printf("\n");
      }

      Avail=0;
      for(i=1;i<100;i++)
      {
            if(Roll[i] == 0)
            {
                  Link[Avail]=i;
                  Avail=i;
            }
      }
}

void show_Link_list()
{
      printf(" Node    Roll no       Marks    Link\n");
      printf("-------------------------------------------\n");

      ptr=start;
      for(i=1;ptr!=0;i++)
      {
            printf("%4d %9d %12d %7d\n",i,Roll[ptr],Marks[ptr],Link[ptr]);
            ptr=Link[ptr];
      }
}
