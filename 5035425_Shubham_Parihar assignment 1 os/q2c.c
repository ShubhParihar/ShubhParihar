 #include <stdio.h>
 #include <string.h>
 int main()

{
    char str1[]="Hello ";
    char str2[] = "Shubham";
    char str3[40];
    char str4[40];
    char str5[] = "Shubh";
     
    strcpy(str2, str1);
    strcpy(str3, "Shubh");
    strcpy(str4, str5);
    printf ("str1: %s\nstr2: %s\nstr3: %s\nstr4:%s\n", str1, str2, str3, str4);
             
    return 0;
}
