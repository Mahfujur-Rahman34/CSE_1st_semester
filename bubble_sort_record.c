#include<stdio.h>
int Roll[10],Marks[10];
char Name[10][50],temp_s[10];
int i,k,ptr,temp;

void Read_record();
void Bubble_sort();
void show_record();

int main()
{
      Read_record();

      printf("\n\nBefore Bubble sort record is: \n");
      show_record();

      Bubble_sort();

      printf("\n\nAfter Bubble sort. record is : \n");
      show_record();

}

void Read_record()
{
      printf("Enter record of 5 students:\n\n");

      for(i=1;i<=5;i++)
      {
            printf("Enter Record for student %d : \n",i);
            printf("Enter Roll no: ");
            scanf("%d",&Roll[i]);

            printf("Enter Name : ");
            scanf("%s",Name[i]);

            printf("Enter Marks: ");
            scanf("%d",&Marks[i]);

            printf("\n\n");
      }
}

void show_record()
{
      printf("sl no   Roll       Name      Marks\n");
      printf("--------------------------------------\n");

      for( i=1;i<=5;i++)
      {
            printf("%2d |",i);
            printf("%7d",Roll[i]);
            printf("        %-7s",Name[i]);
            printf("%8d",Marks[i]);
            printf("\n");
      }
}

void Bubble_sort()
{
      for(k = 1; k <= 5-1; k++)
      {
          ptr = 1;
          while(ptr <= 5 - k)
          {
             if(Roll[ptr] > Roll[ptr + 1])
             {
                   // bubble sort on roll no
                  temp = Roll[ptr];
                  Roll[ptr] = Roll[ptr + 1];
                  Roll[ptr + 1] = temp;

                  // bubble sort on marks according to roll....
                  temp=0;
                  temp = Marks[ptr];
                  Marks[ptr] = Marks[ptr + 1];
                  Marks[ptr + 1] = temp;

                  //bubble sort on name accoding to roll
                  strcpy(temp_s,Name[ptr]);
                  strcpy(Name[ptr],Name[ptr+1]);
                  strcpy(Name[ptr+1],temp_s);
             }
             ptr++;
          }
      }
}
