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
		puts("�������� ��������:");
		puts("1)���������� ������ ����");
		puts("2)�������� ������� ���� �� ������� � ��������� ������, ������� �� ��������");
		puts("3)����� ������ �������");
		puts("4)����������� ����� �������");
		puts("5)������� �������");
		puts("0)�����\n");
		i = test();
		system("cls");
		if (i == 0) break;
		else
		{
			switch (i)
			{
			case 1: if (create(&head, &tail, p) == 1)
			{
				puts("������ ��������� ��������!");
			}
					else puts("\n������ ���������.");
					break;
			case 2: if(delete_elem(&head, &tail, p, &output) == 1) 
			{
				puts("������� �����.");
			}
					else
					{
						printf("%-10s %-10s %-10d - �������.", output.fio, output.dolgnost, output.god);
					}
					break;
			case 3: read(head, tail, p);
					break;
			case 4: int l;
				l = length(head, tail);
				printf("����� �������: %d\n", l);
				break;
			case 5: if (delete_q(&head, &tail) == 1)
			{
				puts("������� �����.");
			}
					else
					{
						puts("������� �������.");
					}
					break;
			default: puts("�������� �������� �� 0 �� 5");
			}
		}
		_getch();
	}
	return 0;
}
