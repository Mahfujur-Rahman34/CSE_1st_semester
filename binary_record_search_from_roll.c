#include<stdio.h>
#include<string.h>

int Roll[10]={0,5,10,15,20,25};
int SSC_Marks[10]={0,100,300,400,500,600};
int HSC_Marks[10]={0,140,350,450,550,650};
char Name[10][30]=
{
      "\0",
      "Abul",
      "Babul",
      "Cabul",
      "Dabul",
      "Ebul"
};

char ITEM[30];
int UB=5,LB=1,MID,BEG,END;
int LOC,n;

void Binary_search();
void Show_search_result();
int main()
{
      printf("\n\nEnter name for searching: ");
      gets(ITEM);

      Binary_search();
      Show_search_result();
}

void Binary_search()
{
      BEG=LB;
      END=UB;

      MID=(BEG+END)/2;

      while(BEG<=END && ((strcmpi(Name[MID],ITEM))!=0))
      {
            n=strcmpi(ITEM,Name[MID]);
            if(n>0)
            {
                  BEG=MID+1;
            }
            else
            {
                  END=MID-1;
            }
            MID=(BEG+END)/2;
      }

      if((strcmpi(Name[MID],ITEM))== 0)
      {
            LOC=MID;
      }
      else{
            LOC=0;
      }
}

void Show_search_result()
{
      if(LOC==0)
      {
            printf("\nData is not present . ");
      }
      else
      {
            printf("\nRecord Found: \n\n");
            printf("Loc is: %d\n",LOC);
            printf("Name is : %s\n",Name[LOC]);
            printf("Roll is: %d\n",Roll[LOC]);
            printf("Marks is : %d\n",SSC_Marks[LOC]);
            printf("Marks is : %d\n\n\n",HSC_Marks[LOC]);

     }
}
