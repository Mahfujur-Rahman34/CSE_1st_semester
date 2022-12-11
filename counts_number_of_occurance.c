#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int word_count(char *string, char *word);

int i,j;
int main(void)
{
          char s1[20];
          printf("Enter Text: ");
          gets(s1);

          char w1[20];
          printf("Enter word: ");
          gets(w1);
          int result1 = word_count(s1, w1);
          printf("Result 1: %d\n", result1);

          return 0;
}

int word_count(char *string, char *word)
{
  int slen = strlen(string);
  int wlen = strlen(word);
  int end = slen - wlen + 1;
  int count = 0;
  for ( i = 0; i < end; i++)
  {
    int word_found = 1;
    for ( j = 0; j < wlen; j++)
    {
          if (word[j] != string[i + j])
          {
              word_found = 0;
              break;
          }
    }

    if( (word_found==1))
    {
        count++;
    }
  }
  return count;
}
