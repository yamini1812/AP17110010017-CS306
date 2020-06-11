#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     int state=0;
     char mystr[100];
     scanf("%s",mystr);
     int m=strlen(mystr);
     if(mystr[m-1]==mystr[m-2])
     {
           printf("Accepted");
     }
     else printf("Rejected");
}