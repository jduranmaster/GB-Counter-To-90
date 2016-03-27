#include <gb/gb.h> 
#include <stdio.h>

void main(){
   int howmuch;
   int counter;
   counter = 0;
   howmuch=90;
   
   printf("\n GAMEBOY C TUTORIAL");
        printf("\n-------------------\n");
        printf("\t\t\t\t(\\" "\\" "_/)\t\t\t\t\t(\\" "\\" "_/)\n");
   printf("\t\t\t\t(O.o)\t\t\t\t\t(O.o)\n");
   printf("\t\t\t\t(> <)\t\t\t\t\t(> <)\n"); 
   printf("-------------------\n");
   printf("PROGRAMMED BY RYOGA");
   printf("\n");
   printf("\nPress start to count to ninety\n");
   waitpad(J_START);
   do{
      counter++;
      printf("%d\n" ,counter);
   }while(counter<howmuch);

   printf("\nProgrammed by RYOGA\n");
}