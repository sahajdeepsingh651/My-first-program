/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 
int main()
{
  int Number, Reminder, Reverse = 0;
 
  printf("\nPlease Enter any number to Reverse\n");
  scanf("%d", & Number);
 
  while (Number > 0)
   {
     Reminder = Number %10;
     Reverse = Reverse *10+ Reminder;
     Number = Number /10;
   }
 
  printf("Reverse of entered number is = %d\n", Reverse);
 
  return 0;
}
