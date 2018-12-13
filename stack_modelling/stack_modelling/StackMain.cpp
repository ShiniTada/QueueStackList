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
		puts("�������� ��������:");
		puts("1)���������� ������ ���� � ����");
		puts("2)�������� ���� �� �����");
		puts("3)����� ������ ���� ����� ����� �� �����");
		puts("4)����������� ����� �����");
		puts("5)������� �����");
		puts("0)�����\n");
		i = test();
		system("cls");
		if (i == 0) break;
		else
		{
			switch (i)
			{
			case 1: if (create(&top, p) == 1)
			{
				puts("������ ��������� ��������!");
			}
					else puts("\n������ ���������.");
					break;
			case 2:if (delete_elem(&top, p, &output) == 1)
			{
				puts("���� ����.");
			}
			else
			{
				printf("%-10s %-10d %-10s %-10s -\t�������.", output.provider, output.code, output.name, output.unit);
			}
				break;
			case 3: read(top, p);
					break;
			case 4: int l;
				l = length(top);
				printf("����� �����: %d\n", l);
				break;
			case 5: if (delete_q(&top) == 1)
			{
				puts("���� ����.");
			}
					else
					{
						puts("���� ������.");
					}
					break;
			default: puts("�������� �������� �� 0 �� 5");
			}
		}
		_getch();
	}
	return 0;
}