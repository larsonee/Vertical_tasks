#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char B;
	int I;

	I = -10;
	B = I;
	printf("one %d two\n", B);
	printf("one %с two", B);

	// char - число размером в 1 байт. Диапазон значений - -128 - 127 ( что позволяет проиндексировать ASCII таблицу
	// результат работы с char зависит от контекста использования
	// если к нему обращаться в контексте целого числа - получим число, если подразумевается элемент ASCII таблицы - получаем его
	// В нашем случае мы используем char со знаком поэтому результат легко спрогнозировать

	return EXIT_SUCCESS;
}
