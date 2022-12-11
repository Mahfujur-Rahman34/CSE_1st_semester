#include<stdio.h>
void Built_link_List();
void search_link_list();
void set_Avail();

int Roll[30];
int Marks[30];
int Link[30];
int List_Avail[30];

int ptr,start,i,j,n,New,Avail,item_roll,found=0;

int main()
{
      Built_link_List();
      search_link_list();
}

void Built_link_List()
{
      printf("\n\nEnter record of link list: \n\n");

      printf("Set start pointer: ");
      scanf("%d",&start);

      ptr=start;
      for(i=1;i<=5 &&ptr!=0;i++)
      {
            printf("Record for student %d:\n",i);
            printf("Enter Roll : ");
            scanf("%d",&Roll[ptr]);
            printf("Enter Marks: ");
            scanf("%d",&Marks[ptr]);

            printf("Set Next node index: ");
            scanf("%d",&Link[ptr]);

            ptr =Link[ptr];
            printf("\n");
      }

      Avail=0;
      for(i=1;i<30;i++)
      {
            if(Roll[i] == 0)
            {
                  Link[Avail]=i;
                  Avail=i;
            }
      }
}

void search_link_list()
{
      printf("Enter roll for search: ");
      scanf("%d",&item_roll);

      ptr=start;
      while(ptr !=0)
      {
            if(Roll[ptr]==item_roll)
            {
                  found=1;
                  printf("\nsuccess.... Record Found.\n");
                  printf("Roll is : %d\n",Roll[ptr]);
                  printf("Marks is : %d\n",Marks[ptr]);
                  printf("Next pointer is: %d\n",Link[ptr]);
                  break;
            }
            else
            {
                  ptr=Link[ptr];
            }
      }
      if(found==0)
      {
            printf("Data Not Found...");
      }
}
