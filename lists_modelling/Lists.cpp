#include "Lists.h"

#define N 15

int test()
{
	int res2, i;
	do {
		res2 = scanf_s("%d", &i);
		while (getchar() != '\n');
		if (res2 != 1) printf("¬ведите число!\n");
	} while (res2 != 1);
	return i;
}

void input(node p[], int start)  
{
	printf("¬ведите є карточки: ");
	p[start].number = test();
	printf("¬ведите наименование банка: ");
	scanf_s("%s", p[start].name, 30);
	printf("¬ведите личный код: ");
	p[start].code = test();
	printf("¬ведите сумму: ");
	p[start].sum = test();
}

int create(int *start, node p[], int dop[])    
{
	if (*start != -1) return 1;
	else
	{
		for (int i = 0; i < N; i++)
		{
			dop[i] = -2;
		}
		++(*start);
		input(&p[*start], *start);
		dop[*start] = 0;
		return 0;
	}
}

int add(int *start, node p[], int dop[])   
{
	if (*start == -1) return 1;
	if (*start >= N - 1) return  2;
	++(*start);
	printf("¬ведите є карточки: ");
	p[*start].number = test();
	printf("¬ведите наименование банка: ");
	scanf_s("%s", p[*start].name, 30);
	printf("¬ведите личный код: ");
	p[*start].code = test();
	printf("¬ведите сумму: ");
	p[*start].sum = test();
	/////////////////////////////////////////input(&p[*start], *start);
	int flag = 0;
	for (int i = 0; i < *start; i++)
	{
		if (p[dop[i]].number > p[*start].number)
		{
			for (int j = *start; j > i; j--)
			{
				dop[j] = dop[j-1];
			}
			dop[i] = *start;
			flag++;
			break;
		}
	}
	if (flag == 0)
	{
		dop[*start] = *start;
	}
	
	return 0;
}


void read(int start, node p[], int dop[])
{
	if (start == -1) puts("—писок пуст.");
	else
	{
		for(int i = 0; i <= start; i++)
		{
			printf("%-10d%-10s%-10d%-10d\n", p[dop[i]].number, p[dop[i]].name, p[dop[i]].code, p[dop[i]].sum);
		}
	}
}

int search(int start, int key, node p[], int dop[])
{
	if (start == -1) return -2;
	else
	{
		for (int i = 0; i <= start; i++)
		{
			if (p[dop[i]].number == key)
			{
				return i;
			}
		}
		return -2;
	}
}

int delete_elem(int *start, int key, node p[], int dop[], node *output)
{
	if (*start == -1) return 1;
	int n;
	n = search(*start, key, p, dop);
	if (n == -2) return 1;
	else
	{
		*output = p[dop[n]];
		while(n < *start)
		{
			dop[n] = dop[n + 1];
		}
		dop[*start] = -2;
		(*start)--;
		return 0;

	}
}

int delete_q(int *start, int dop[])
{
	if (*start == -1) return 1;
	else
	{
		*start = -1;
		for (int i = 0; i < N; i++)
		{
			dop[i] = -2;
		}
		return 0;
	}
}

int length(int start)
{
	int count = 0;

	while (start != -1)
	{
		count++;
		start--;
	}
	return count;
}
