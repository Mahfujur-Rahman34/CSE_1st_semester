#include<stdio.h>
void Build_link_List();
void set_Avail();
void find_last();
void show_Link_list();
void Insert_Last_node();

int Roll[10]={0},Marks[10]={0},Link[10]={0},List_Avail[10];
int ptr,start,i,j,n,New,Avail,Last;

int main()
{
      start=6;
      Build_link_List();
      set_Avail();

      printf("\n\nLink List Before Insertion:\n\n");
      show_Link_list();

      printf("\n\nInsert a Node as Last node: \n");
      Insert_Last_node();

      printf("\n\nLink List After Insertion:\n");
      show_Link_list();

      printf("\n\n\nMahfujur Rahman\nCSE_19-20\n\n");
}

void Build_link_List()
{
      printf("\n\nEnter record of link list: \n\n");
      ptr=start;
      for(i=1;i<=5;i++)
      {
            printf("Record for student %d:\n",i);
            printf("Enter Roll : ");
            scanf("%d",&Roll[ptr]);
            printf("Enter Marks: ");
            scanf("%d",&Marks[ptr]);

            printf("Set Next node index: ");
            scanf("%d",&Link[ptr]);
            if(Link[ptr]==start)
            {
                  printf("Wrong Entry of node no........");
                  exit(1);
            }
            ptr=Link[ptr];

            printf("\n");
      }
}

void set_Avail()
{
      Avail=0;
      for(i=1;i<10;i++)
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
      printf(" Node    Roll no       Marks     Link\n");
      printf("-------------------------------------------\n");

      ptr=start;
      for(i=1;ptr!=0;i++)
      {
            printf("%4d %9d %12d %9d\n",i,Roll[ptr],Marks[ptr],Link[ptr]);
            ptr=Link[ptr];
      }
}

void Insert_Last_node()
{
      if(Avail==0)
      {
            printf("Overflow");
            exit(1);
      }

      New=Avail;
      Avail=Link[Avail];

      printf("Enter Roll: ");
      scanf("%d",&Roll[New]);

      printf("Enter Marks: ");
      scanf("%d",&Marks[New]);

      /// finding the last position...
      find_last();

      //insertinga as last node..
      Link[New] = 0;
      Link[Last]=New;
}

void find_last()
{
      ptr=start;
      while(Link[ptr] !=0)
      {
            Last=Link[ptr];
            ptr=Link[ptr];
      }
}
