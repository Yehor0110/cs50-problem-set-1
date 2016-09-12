#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
    printf("Введите целое число(от 1 до 23): ");
    int counter = 1;
    int height;
    height = GetInt(); //запрашиваю у пользователя значение для высоты
        while(counter > 0) {
        if( height >= 1 && height <= 23) { // проверяем чтобы получить нужное значение
            for(int i = 0; i < height; i++) { 
                counter--;
                for(int space = 0; space < height; space++) { 
                    if(space < height - 1 - i) { // количество пробелов в соответствии с высотой
                        printf(" ");
                            } else {
                        printf("#");
                            }
                        } printf("#\n"); // # - чтобы получить первые два столбика одинаковой высоты
                    }
                } else {
                    printf("Попробуйте ещё разок: ");
                    height = GetInt();
                } 
            }
}
