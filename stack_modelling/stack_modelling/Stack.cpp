#include "Stack.h"

#define N 15

int test()
{
	int res2, i;
	do {
		res2 = scanf_s("%d", &i);
		while (getchar() != '\n');
		if (res2 != 1) printf("Введите число!\n");
	} while (res2 != 1);
	return i;
}


int create(int *top, node p[])
{
	if (*top >= N-1) return 1;
	else
	{
		++(*top);
		printf("Введите фамилию поставщика: ");
		scanf_s("%s", &p[*top].provider, 20);
		printf("Введите код детали: ");
		p[*top].code = test();
		printf("Введите наименование: ");
		scanf_s("%s", &p[*top].name, 30);
		printf("Введите единицу измерения: ");
		scanf_s("%s", &p[*top].unit, 10);
		return 0;
	}
}

int delete_elem(int *top, node p[], node *output)
{
	if (*top == -1) return 1;
	else
	{
		*output = p[*top];
		--(*top);
		return 0;
	}
}


int delete_q(int *top)
{
	if (*top == -1) return 1;
	else
	{
		*top = -1;
		return 0;
	}
}

void read(int top, node p[])
{
	if (top == -1) puts("Стек пуст.");
	else
	{
		while (top != -1)
		{
			printf("%-10s%-10d%-10s%-10s\n", p[top].provider, p[top].code, p[top].name, p[top].unit);
			top--;
		}
	}
}

int length(int top)
{
	int count = 0;
	while (top != -1)
	{
		count++;
		top--;
	}
	return count;
}
