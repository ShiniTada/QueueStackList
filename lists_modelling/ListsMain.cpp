#include "Lists.h"

#define N 15

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int start = -1;
	node p[N], output;
	int dop[N], key, output_index;
	int i;
	while (1)
	{
		system("cls");
		puts("Выберите действие:");
		puts("1)Начальное формирование списка");
		puts("2)Добавление нового узла с упорядочением по ключу");
		puts("3)Удаление узла c заданным ключом");
		puts("4)Вывод данных всех узлов списка на экран");
		puts("5)Поиск узла по ключу");
		puts("6)Определение длины списка");
		puts("7)Очистка списка");
		puts("0)Выход\n");
		i = test();
		system("cls");
		if (i == 0) break;
		else
		{
			switch (i)
			{
			case 1: if (create(&start, p, dop) == 1)
			{
				puts("Первый узел уже создан!");
			}
					else puts("\nЗапись добавлена.");
					break; 
			case 2: int res;
				res = add(&start, p, dop);
				if (res == 2) puts("Список полностью заполнен!");
				else
				{
					if (res == 1) puts("Первый узел еще не создан!");
					else puts("\nЗапись добавлена.");
				}
				break;
			case 3: printf("Введите /№ карточки, которая будет удалена: ");
				key = test();
				if (delete_elem(&start, key, p, dop, &output) == 1)
				{
					puts("Карточка не найдена");
				}
				else
				{
					printf("%-10d%-10s%-10d%-10d - удалено.\n", output.number, output.name, output.code, output.sum);
				}
				break;
			case 4: read(start, p, dop);
					break;
			case 5: printf("Введите /№ карточки, по которой будет поиск: ");
				key = test();
				output_index = search(start, key, p, dop);
				if (output_index == -2)
				{
					puts("Карточка не найдена");
				}
				else
				{
					printf("%-10d%-10s%-10d%-10d\n", p[dop[output_index]].number, p[dop[output_index]].name, p[dop[output_index]].code, p[dop[output_index]].sum);
				}
				break;
			case 6: int l;
				l = length(start);
				printf("Длина списка: %d\n", l);
				break; 
			case 7: if (delete_q(&start, dop) == 1)
			{
				puts("Список пуст.");
			}
					else
					{
						puts("Список очищен.");
					}
					break;
			default: puts("Выберите действие от 0 до 7");
			}
		}
		_getch();
	}
	return 0;
}
