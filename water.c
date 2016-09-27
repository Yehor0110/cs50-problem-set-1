/*
*     Валентюкевич Егор
*
*     [hcs-201608]
*
*      water.c
*      check50 --> https://sandbox.cs50.net/checks/0aa3e662820a4f64a63718dd203e6d5d
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int min, bot;
 
    do {
     printf("How much time do you spend in the shower?\n");
     min = get_int(); // запрашиваем время
     bot = (min * 12); // подсчет сколько бутылок воды использовали
     printf("Minutes: %d\n", min); // вывод время
     printf("Bottles: %d\n", bot); // вывод бутылок воды
    } 
  while (min <= 0);
}
