#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h> 
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h> 

struct node
{
	char fio[20]; 		//������� ���������
	char dolgnost[30];  //���������
	int god;   			//��� ����������� �� ������
};

int test();
int create(int *, int *, node []);
int delete_elem(int *, int *, node [], node *);
void read(int, int, node[]);
int length(int , int );
int delete_q(int *, int *);
#endif

