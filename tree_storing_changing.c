// problem 16...
/*
      the given tree is:
              G
           /    \
          H      Y
        /  \    / \
       F    M  S   K
        \       \
         R       X
*/
#include<stdio.h>
#include<string.h>

char Info[17]={'\0','K','F','\0','M','G','\0','\0','Y','\0','X','\0','\0','H','R','S','\0'};
int Left[17] = {0,0,0,0,0,13,0,0,15,0,0,0,0,2,0,0};
int Right[17]={0,0,14,0,0,8,0,0,1,0,0,0,0,4,0,10,0};
int position, count=0,Stack[10],Top,ptr,Root,i,j,found;
char p_Info[17],ch,repla,new;
char left_sub[30],leftchar;

void show_tree_in_link();

int main()
{
      show_tree_in_link();

      Root=5;j=1;
      ptr=Left[Root];
      while(ptr!=0)
     {
         left_sub[j]=ptr;
         if(Right[ptr]!=0)
         {
             j++;
             left_sub[j]=Right[ptr];
         }

         if(Left[ptr]!=0)
         {
             j++;
             left_sub[j]=Left[ptr];
         }
         ptr=Left[ptr];
         j++;
     }

     printf("\n\nEnter node to search left of G: ");
     leftchar=getchar();

     found=0;
     for(int i=1;i<10;i++)
     {
        j=left_sub[i];
           if(Info[j]==leftchar)
           {
               found=1;
                     printf("The node is : PRESENT in left sub tree.....");
                 break;
           }
     }
     if(found==0)
     {
         printf("The node is : NOT PRESENT in the left subtee of G...");
     }
      while(1)
      {
            printf("\n\nEnter node position to change: ");
            scanf("%d",&position);

            printf("Enter charecter: ");
            fflush(stdin);
            scanf("%c",&Info[position]);

            printf("Enter  charecter to be replaced: ");
            fflush(stdin);
            repla=getchar();

            fflush(stdin);
            printf("Enter new charecter : ");
            new =getchar();

            for(int i=0;i<17;i++)
            {
                  if(Info[i]==repla)
                  {
                        Info[i]= new;
                  }
            }
            show_tree_in_link();
      }
printf("\n\n");
}

void show_tree_in_link()
{
      printf("\n\nThe Tree Nodes are shown below: \n\n");
      printf("Node id    Info    Left    Right\n--------------------------------\n");
      for(int i=1;i<=15;i++)
      {
            if(Info[i] =='\0')
            {
                  continue;
            }
            printf("%4d %9c %7d %8d\n",i,Info[i],Left[i],Right[i]);
      }
}
