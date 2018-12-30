#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char *filename = "log.txt";
  FILE *inp = fopen(filename, "r");
  char *line = (char *)malloc(255*sizeof(char));
  size_t len = 0;
  ssize_t read;
  int total=0, sumval=0;

  while((read=getline(&line, &len, inp))!=-1)
  {
    printf("%s\n",line);
    
    int count = 0;  
    int i = 0;
    for (int n = strlen(line); i < n; i++)
    {      
      if (line[i] == ' ')
        count++;

      if (count == 5)
        break;
    }
    char temp[10];
    int index = 0;    
    for(; line[i]!='\0'; i++, index++)
    {
      temp[index]=line[i];
    }
    temp[index] = '\0';
    int val = atoi(temp);
    if (val > 5000 )
    {
      sumval += val;
      total += 1;
    }
  }

  char *pref=(char *)malloc(200*sizeof(char));
  strcpy(pref, "bytes_");
  strcat(pref, filename);

  FILE *outp = fopen(pref, "w");
  fprintf(outp, "%d\n%d", sumval, total);
  printf("%d %d\n", sumval, total );
  
  fclose(inp);
  fclose(outp);
  return 0;
}
