/* the given tree is:
             G
           /   \
          H     Y
        /  \   / \
       F    M S   K
        \      \
         R      X
*/
#include<stdio.h>
#include<string.h>

char Info[17]={'\0','K','F','\0','M','G','\0','\0','Y','\0','X','\0','\0','H','R','S','\0'};
int Left[17] = {0,0,0,0,0,13,0,0,15,0,0,0,0,2,0,0};
int Right[17]={0,0,14,0,0,8,0,0,1,0,0,0,0,4,0,10,0};
int position;
int count=0;
int Stack[10],Top,ptr,Root;
char p_Info[17];
char ch;
char repla, new;
int slen;
void Pre_order();
void show_tree_in_link();

int main()
{
      show_tree_in_link();
      printf("\n\nPreorder traversal is: ");
      Pre_order();
      while(1)
      {
            printf("\n\nEnter node position to change: ");
            scanf("%d",&position);
            printf("Enter charecter: ");
            fflush(stdin);
            scanf("%c",&Info[position]);
            // replace(Info,repla,new);
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
            printf("Preorder traversal after change is: ");
            Pre_order();
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

void Pre_order()
{
      Root=5;
      Top=1;
      Stack[1]=0;

      ptr=Root;
      while(ptr!=0)
      {
            printf("%3c",Info[ptr]);
            if(Right[ptr]!=0)
            {
                  Top++;
                  Stack[Top]=Right[ptr];
            }

            if(Left[ptr] !=0)
            {
                  ptr=Left[ptr];
            }
            else {
                  ptr=Stack[Top];
                  Top--;
            }
      }
}
