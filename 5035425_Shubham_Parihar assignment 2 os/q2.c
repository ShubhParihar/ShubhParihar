#include <stdio.h>  
  
int main()  
{  
    int a, b, add;  
  
    printf("Enter 2 numbers for addition\n");  
    scanf("%d%d", &a, &b);  
  
    add = a-~b-1;   
  
    printf("Addition of %d and %d is %d\n", a, b, add);  
  
    return 0;  
}  
