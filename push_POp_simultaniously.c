#include<stdio.h>
#include<string.h>

int STACK[11]={0,5,10,15,20,25,0};
int TOP,MAXSTACK=10;
int ITEM,ITEM2,c;

void Instract();
void PUSH();
void POP();
void show_Stack();
void Display_Stack();

int main()
{
      TOP=5;
      Instract();

      while(1)
      {
            printf("\n\nEnter your choice: ");
            scanf("%d",&c);

            switch(c)
            {
                  case 1:
                  PUSH();   // calling PUSH function for PUSH Operation..
                  break;

                  case 2:
                  POP();    // calling POP function for POP Operation..
                  break;

                  default:
                  printf("Invalid choice.............");
            }
      }
}

void Instract()
{
      printf("\n\nThe Given STACK is :   ");
      for(int k=1;k<=10;k++)
      {
            printf("%d  ",STACK[k]);
      }
      printf("\nMAXSTACK is : %d",MAXSTACK);

      printf("\n\n\n\t Enter your choice:\n");
      printf(" \t\tFor PUSH: 1\n \t\tFor POP : 2 \n");
}

// Push operation code............
void PUSH()
{
      printf("\n\nPUSH operation.\n");

      if(TOP==MAXSTACK)
      {
            printf("Overflow..........No item can not be Inserted...\n");
      }
      else
      {
            printf("Enter item to be PUSHED: ");
            scanf("%d",&ITEM);

            TOP=TOP+1;
            STACK[TOP]=ITEM;
      }
      Display_Stack();
}
// Pop operation code.................
void POP()
{
      printf("\n\nPOP Operation:\n");
      if(TOP==0)
      {
            printf("Underflow........ No available item to delete.....\n\n");
      }
      else
      {
            ITEM2=STACK[TOP];
            STACK[TOP]=0;
            TOP--;
      }
      Display_Stack();
}


void Display_Stack()
{
      printf("The stack is:  ");
      for(int j=1;j<=10;j++)
      {
            printf("%d   ",STACK[j]);
      }
}
