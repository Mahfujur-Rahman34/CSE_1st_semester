/// program that deletes kth record of link list.....

#include<stdio.h>
void Built_link_List();
void set_Avail();
void show_Link_list();
void Delete_kth_node();

int Roll[100]={0},Marks[100]={0},Link[100]={0},List_Avail[100],Loc_p[100],Locp_p[100];
int ptr,start,i,j,n,New,Avail,item;
int Loc,Locp,k;

int main()
{
      printf("Set start pointer: ");
      scanf("%d",&start);
      Built_link_List();

      printf("\n\nLink List Before Delation:\n\n");
      show_Link_list();

      printf("\n\nDelete a Node in kth position: \n");
      Delete_kth_node();

      printf("\n\nLink List After Delation:\n");
      show_Link_list();

      printf("\n\n\nMahfujur Rahman\nCSE_19-20\n\n");
}

void Built_link_List()
{
      printf("\n\nEnter record of link list: \n\n");
      ptr=start;
      for(i=1;ptr!=0;i++)
      {
            Locp_p[1]=0;
            Locp_p[i+1]=ptr;
            Loc_p[i]=ptr;

            printf("Record for student %d:\n",i);
            printf("Enter Roll : ");
            scanf("%d",&Roll[ptr]);

            printf("Set Next node index: ");
            scanf("%d",&Link[ptr]);
            if(Link[ptr]==start)
            {
                  printf("Wrong Entry of node no........");
            }
            ptr=Link[ptr];
            printf("\n");
      }

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
      printf(" Node    Roll no       Marks    Link\n");
      printf("-------------------------------------------\n");

      ptr=start;
      for(i=1;ptr!=0;i++)
      {
            printf("%4d %9d %9d\n",i,Roll[ptr],Link[ptr]);
            ptr=Link[ptr];
      }
}

void Delete_kth_node()
{
      if(start==0)
      {
            printf("Underflow..");
      }

     printf("Enter item: ");
     scanf("%d",&item);

      for(ptr=start;Link[ptr]!=0;)
      {
          if(Roll[ptr]=item)
          {
              k=ptr;
              break;
          }

          ptr=Link[ptr];
      }

      Loc=Loc_p[k];
      Locp=Locp_p[k];

      if(Locp==0)
      {
            start=Link[start];
      }
      else{
            Link[Locp]=Link[Loc];
      }

      Link[Loc]=Avail;
      Avail=Loc;
}
