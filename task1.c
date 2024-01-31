/*Задача 1. В прямом порядке 
Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми
строками.
Необходимо реализовать рекурсивную функцию.*/
#include <stdio.h>

void print_num(int num){

    if (num <= 0)
        return;    
    else
        print_num(num / 10);  
        
    printf("%d ", num % 10);
}

int main(void) {
    int num;
    scanf("%d", &num);
    print_num(num);
}