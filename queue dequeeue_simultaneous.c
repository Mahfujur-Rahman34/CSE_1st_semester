/// Enquee dequeue operation,......
#include<stdio.h>
#include<string.h>

int QUEUE[11]={0,0,10,14,34,0};
int N=10;

int front;
int rear;

int item;

void Enqueue();
void Dequeue();
void Display();

int c;

int main()
{
      front=2;
      rear=4;

      printf("\n\nThe Given QUEUE is :   ");
      for(int k=1;k<=10;k++)
      {
            printf("%d  ",QUEUE[k]);
      }
      printf("\nfront is : %d",front);
      printf("\nRear  is : %d",rear);

      printf("\n\n\n\t Enter your choice:\n");
      printf(" \t\tFor ENQUEUE : 1\n \t\tFor DEQUEUE : 2 \n");

      while(1)
      {
            printf("\n\n\nEnter your choice: ");
            scanf("%d",&c);

            switch(c)
            {
                  case 1:
                  Enqueue();  // calling PUSH function for PUSH Operation..
                  break;

                  case 2:
                  Dequeue();    // calling POP function for POP Operation..
                  break;

                  default:
                  printf("Invalid choice.............");
            }
      }
}

void Enqueue()
{
      printf("\n\nENQUEUE operation...\n---------------------------\n");
      printf("Enter the data to be inserted:");
      scanf("%d",&item);

      if((front==1&&rear==N)||(front==(rear+1)))
      {
            printf("Overflow..... \n\n");
      }
      else if(rear == N)
      {
            rear=1;
      }
      else if(front == 0  && rear== 0)
      {
            front=1;
            rear=1;
      }
      else
      {
            rear=rear+1;
      }
      QUEUE[rear]=item;
      Display();

};

//// neeed to work in this section.........
void Dequeue()
{
      printf("\n\nDEQUEUE operation...\n----------------------------\n");
      if(front==0)
      {
            printf("UNDERFLOW condition..\n");
      }
      else if(front==rear)
      {
            QUEUE[front]=0;
            front=0;
            rear=0;
      }
      else if(front==N)
      {
            QUEUE[front]=0;
            front=1;
      }
      else{
            QUEUE[front]=0;
            front=front+1;
      }
      Display();
};

/// display function for Dequeue...
void Display()
{
      printf("The QUEUE :  ");
      int i;
      for(i=1;i<=N;i++)
      {
            printf("%d   ",QUEUE[i]);
      }
};
