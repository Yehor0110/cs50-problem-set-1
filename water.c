#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int min, bot;
    do {
     printf("Сколько времени вы проводите в душе?\n");
     min = get_int(); // запрашиваем время
     bot = (min * 12); // подсчет сколько бутылок воды использовали
     printf("Minutes: %d\n", min); // вывод время
     printf("Bottles: %d\n", bot); // вывод бутылок воды
    } 
  while (min <= 0);
}
