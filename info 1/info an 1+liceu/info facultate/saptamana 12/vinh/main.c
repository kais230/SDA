#include<stdio.h>

float suma,ls,perioada,dobanda;
void date(float suma,float ls , float perioada , float dobanda)
{

  printf("Calculator dobanda\n");

   printf("\nIntroduceti suma imprumutata (Lei): \n");
   scanf("%f", &suma);

   printf("Introduceti dobanda anuala procentuala (%): \n");
   scanf("%f", &ls);

   printf("Introduceti perioada de indatorare (Ani): \n");
   scanf("%f", &perioada);

   dobanda = (suma * ls/100 * perioada) ;
   printf("-- -- -- -- -- -- -- -- -- -- \n");
   printf("Se calculeaza...\n");
   printf("\nDobanda platita pentru imprumutul sumei de [%.2fLei] pe o perioada de [%.f ani] este de [%.2fLei]. ", suma, perioada, dobanda);
}

int main()
{
  
   date(s,l,p,d);
   return 0;
}
