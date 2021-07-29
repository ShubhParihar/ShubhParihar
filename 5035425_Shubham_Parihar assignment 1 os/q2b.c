#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{

   char example[100];


   strcpy(example, "Shubham ");


   strcat(example, "is over 10 ");
   strcat(example, "years old.");

  printf("%s\n", example);

   return 0;
}
