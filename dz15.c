#include <stdio.h>

//задание 1
//Реализовать простейшую хеш - функцию.На вход функции подается строка, на выходе сумма кодов символов.

int get_hash(char * str)
{
	int a = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		a += str[i];
	}

	return a;
}
//задание 2
//Имеются монеты номиналом 50, 10, 5, 2, 1 коп.Напишите функцию которая минимальным количеством монет наберет сумму 98 коп.
//Для решения задачи используйте “жадный” алгоритм.

int surrender(int money)
{
	int penny[] = { 7,5,1 };

	int test_summ = 0;

	for (size_t i = 0; i < 3; i++)
	{
		while(( money - penny[i])>=0)
		{
			printf("%d ", penny[i]);
			test_summ += penny[i];
			money -= penny[i];
		}
	}
	return test_summ;
}



int main()
{
	char*str = "aaa";
	printf("%d\n", get_hash(str));

	for (size_t i = 0; i < 100; i++)
	{
	 printf (" | %d = %d\n", i, surrender(i));

	 if (i != surrender(i))
		printf("error");

	}

	 int penny[] = { 7,5,1 };
	 exch(penny, 3, 98);

}

