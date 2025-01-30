#include <stdio.h>


int main() {
   char stri[100];
   int age;
   char stro[100];
   fgets(stri,sizeof(stri),stdin);
   scanf("%d",&age);
   getchar();
   fgets(stro,sizeof(stro),stdin);
   printf("Name: %str1\nAge: %d\nHobby: %s",stri,age,stro);
    return 0;
}