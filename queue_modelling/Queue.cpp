#include "Queue.h"

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


int create(int *head, int *tail, node p[])
{
	if (*tail >= N - 1) return  1;
	else
	{
		if(*head == -1) ++(*head);
		++(*tail);
		printf("Введите фамилию: ");
		scanf_s("%s", p[*tail].fio, 20);
		printf("Введите должность: ");
		scanf_s("%s", p[*tail].dolgnost, 30);
		printf("Введите год поступления на работу: ");
		p[*tail].god = test();
		return 0;
	}
}

int delete_elem(int *head, int *tail, node p[], node *output)  
{
	if (*head == -1) return 1;
	*output = p[*head];
	if (*tail != *head)
	{
		for (int i = *head, j = i + 1; j <= *tail; i++, j++)
		{
			p[i] = p[j];
		}
		(*tail)--;
	}
	else  *head = *tail = -1;
		return 0;
}


int delete_q(int *head, int *tail)
{
	if (*head == -1) return 1;
	else
	{
		*head = *tail = -1;
		return 0;
	}
}

void read(int head, int tail, node p[])
{
	if (head == -1) puts("Стек пуст.");
	else
	{
		do
		{
			printf("%-10s %-10s %-10d\n", p[head].fio, p[head].dolgnost, p[head].god);
			head++;  
		} while (head <= tail);
	}
}

int length(int head, int tail)
{
	int count = 0;

	while (head <= tail)
	{
		count++;
		head++;
	}
	return count;
}

