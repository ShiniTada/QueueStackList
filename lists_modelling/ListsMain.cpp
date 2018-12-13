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
		puts("�������� ��������:");
		puts("1)��������� ������������ ������");
		puts("2)���������� ������ ���� � ������������� �� �����");
		puts("3)�������� ���� c �������� ������");
		puts("4)����� ������ ���� ����� ������ �� �����");
		puts("5)����� ���� �� �����");
		puts("6)����������� ����� ������");
		puts("7)������� ������");
		puts("0)�����\n");
		i = test();
		system("cls");
		if (i == 0) break;
		else
		{
			switch (i)
			{
			case 1: if (create(&start, p, dop) == 1)
			{
				puts("������ ���� ��� ������!");
			}
					else puts("\n������ ���������.");
					break; 
			case 2: int res;
				res = add(&start, p, dop);
				if (res == 2) puts("������ ��������� ��������!");
				else
				{
					if (res == 1) puts("������ ���� ��� �� ������!");
					else puts("\n������ ���������.");
				}
				break;
			case 3: printf("������� /� ��������, ������� ����� �������: ");
				key = test();
				if (delete_elem(&start, key, p, dop, &output) == 1)
				{
					puts("�������� �� �������");
				}
				else
				{
					printf("%-10d%-10s%-10d%-10d - �������.\n", output.number, output.name, output.code, output.sum);
				}
				break;
			case 4: read(start, p, dop);
					break;
			case 5: printf("������� /� ��������, �� ������� ����� �����: ");
				key = test();
				output_index = search(start, key, p, dop);
				if (output_index == -2)
				{
					puts("�������� �� �������");
				}
				else
				{
					printf("%-10d%-10s%-10d%-10d\n", p[dop[output_index]].number, p[dop[output_index]].name, p[dop[output_index]].code, p[dop[output_index]].sum);
				}
				break;
			case 6: int l;
				l = length(start);
				printf("����� ������: %d\n", l);
				break; 
			case 7: if (delete_q(&start, dop) == 1)
			{
				puts("������ ����.");
			}
					else
					{
						puts("������ ������.");
					}
					break;
			default: puts("�������� �������� �� 0 �� 7");
			}
		}
		_getch();
	}
	return 0;
}
