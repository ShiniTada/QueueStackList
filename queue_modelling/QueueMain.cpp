#include "Queue.h"

#define N 15

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int head = -1, tail = -1;
	node p[N];
	node output;
	int i;
	while (1)
	{
		system("cls");
		puts("Выберите действие:");
		puts("1)Добавление нового узла");
		puts("2)Удаление первого узла из очереди с возвратом данных, которые он содержал");
		puts("3)Вывод данных очереди");
		puts("4)Определение длины очереди");
		puts("5)Очистка очереди");
		puts("0)Выход\n");
		i = test();
		system("cls");
		if (i == 0) break;
		else
		{
			switch (i)
			{
			case 1: if (create(&head, &tail, p) == 1)
			{
				puts("Список полностью заполнен!");
			}
					else puts("\nЗапись добавлена.");
					break;
			case 2: if(delete_elem(&head, &tail, p, &output) == 1) 
			{
				puts("Очередь пуста.");
			}
					else
					{
						printf("%-10s %-10s %-10d - удалено.", output.fio, output.dolgnost, output.god);
					}
					break;
			case 3: read(head, tail, p);
					break;
			case 4: int l;
				l = length(head, tail);
				printf("Длина очереди: %d\n", l);
				break;
			case 5: if (delete_q(&head, &tail) == 1)
			{
				puts("Очередь пуста.");
			}
					else
					{
						puts("Очередь очищена.");
					}
					break;
			default: puts("Выберите действие от 0 до 5");
			}
		}
		_getch();
	}
	return 0;
}
