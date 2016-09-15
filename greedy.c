/*
 *
 * Валентюкевич Егор
 * [hcs-201608]
 *
 *  Найти минимальное количество монет для выдачи сдачи.
 * 
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main(void)
{
    // объявить переменную типа float
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
    // создать переменные счетчика для каджой монеты
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    // и переменную счетчика для общего количества монет
    int counter = 0;
    
    // пока сумма >= 25c
    while(summa2 >= 25)
    {
        // уменьшить на 25c
        summa2 = summa2 - 25; 
        // увеличить счетчик на 1
        quarters = quarters + 1;
        counter++;
    }
    
    while(summa2 >= 10)
    {
        
        summa2 = summa2 - 10;
        
        dimes = dimes + 1;
        counter++;
    }
    
    while(summa2 >= 5)
    {
        
        summa2 = summa2 - 5;
        
        nickels = nickels +1;
        counter++;
    }
    
    while(summa2 >= 1)
    {
        
        summa2 = summa2 - 1;
                
        pennies = pennies + 1;
        counter++;
    }
    // вывести на экран используемое количество монет
    printf("Quarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\n\n", quarters, dimes, nickels, pennies);
    printf("All coins:%d\n", counter);
}
