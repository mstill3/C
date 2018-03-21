#include <stdio.h>
 
int main()
{  
   int ID;
   char name[20];
  
   printf("Enter your ID: ");
   scanf("%d", &ID);
   printf("Enter you name: ");
   scanf("%s", name);   //remember that array name is a pointer. 
   printf("Entered ID:%d", ID);
   printf("Entered Name: %s", name);
   printf("Pleased Enter another ID & name: ");
   scanf("%d %s", &ID, &name);
   printf("Entered ID:%d", ID);
   printf("Entered Name: %s", name);
   printf("testing string type -- enter last name\n");
   scanf("%s", lastname);
   printf("%s\n", lastname);
   return(0);
}	