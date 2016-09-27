/*
 *
 *              Валентюкевич Егор
 *                [hcs-201608]
 *
 *  Найти минимальное количество монет для выдачи сдачи.
 *
 *  check50 --> https://sandbox.cs50.net/checks/10dcb72762424b0bbc83c477964a004b
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main(void)
{

    float summa;
 
    // получить ввод от пользователя
    // если зачение меньше нуля, спрашивать повторно, пока не получит правильный ответ
    do
    {
        printf("Введите сумму: ");
        summa = GetFloat();
    }
    while (summa < 0);
    
    // так как вклад в в долларах, умножить на 100, чтобы получить центы
    summa = summa * 100; 
    // округлить значение "summa" с плавающей запятой, до ближайшего целого 
    summa = roundf(summa);
    
    // изменить float "summa" в integer "summa"
    int summa2 = (int) summa;

    int counter = 0;
    
    while(summa2 >= 25)
    {
        summa2 = summa2 - 25; 
        counter++;
    }
    
    while(summa2 >= 10)
    {
        summa2 = summa2 - 10;
        counter++;
    }
    
    while(summa2 >= 5)
    {
        summa2 = summa2 - 5;
        counter++;
    }
    
    while(summa2 >= 1)
    {
        summa2 = summa2 - 1;
        counter++;
    }
    // вывести на экран используемое количество монет
    printf("%d\n", counter);
}
