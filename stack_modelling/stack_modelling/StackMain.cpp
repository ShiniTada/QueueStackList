#include "Stack.h"

#define N 15

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int top = -1;
	node p[N];
	node output;
	int i;
	while (1)
	{
		system("cls");
		puts("Выберите действие:");
		puts("1)Добавление нового узла в стек");
		puts("2)Удаление узла из стека");
		puts("3)Вывод данных всех узлов стека на экран");
		puts("4)Определение длины стека");
		puts("5)Очистка стека");
		puts("0)Выход\n");
		i = test();
		system("cls");
		if (i == 0) break;
		else
		{
			switch (i)
			{
			case 1: if (create(&top, p) == 1)
			{
				puts("Список полностью заполнен!");
			}
					else puts("\nЗапись добавлена.");
					break;
			case 2:if (delete_elem(&top, p, &output) == 1)
			{
				puts("Стек пуст.");
			}
			else
			{
				printf("%-10s %-10d %-10s %-10s -\tудалено.", output.provider, output.code, output.name, output.unit);
			}
				break;
			case 3: read(top, p);
					break;
			case 4: int l;
				l = length(top);
				printf("Длина стека: %d\n", l);
				break;
			case 5: if (delete_q(&top) == 1)
			{
				puts("Стек пуст.");
			}
					else
					{
						puts("Стек очищен.");
					}
					break;
			default: puts("Выберите действие от 0 до 5");
			}
		}
		_getch();
	}
	return 0;
}