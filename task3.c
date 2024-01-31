/*Задача 3. Количество 1 
Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.*/
#include <stdio.h>

int countOf1(int num){

    if (num > 0)
        return num % 2 + countOf1(num / 2);
    else
        return 0;   
    
}

int main(void) {
    int num;
    scanf("%d", &num);
    printf("%d \n", countOf1(num));
}