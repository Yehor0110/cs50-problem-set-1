/*
*
*   Валентюкевич Егор
*
*     [hcs-201608]
*
*      mario.c
*
*      check50 --> https://sandbox.cs50.net/checks/ce5588904d50404ea967a22bb81c8958
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
            
    do {
    printf("Введите целое число(от 1 до 23): "); //запрашиваю у пользователя значение для высоты
    height = GetInt();
    if (height == 0)
    return 0;
    }
    while ( height < 0 || height > 23 );
    
    if( height >= 1 && height <= 23) // проверяем чтобы получить нужное значение
    { 
        for(int i = 0; i < height; i++) 
        { 
            for(int space = 0; space < height; space++) 
            { 
                if(space < height - 1 - i) { // количество пробелов в соответствии с высотой 
                    printf(" ");
                    } else {
                    printf("#");
                    }
            } 
            printf("#\n"); // # - чтобы получить первые два столбика одинаковой высоты
        }
    } else {
        printf("Попробуйте ещё разок: ");
        height = GetInt();
        } 
}
