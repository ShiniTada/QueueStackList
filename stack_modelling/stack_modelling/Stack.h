#ifndef STACK_H
#define STACK_H

#include <stdio.h> 
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h> 

struct node
{
	char provider[20];        //���������
	int code;                 //���_������
	char name[30];            // ������������
	char unit[10];            //������� ���������
};

int test();
int create(int *, node []);
int delete_elem(int *, node [], node *);
void read(int, node p[]);
int length(int);
int delete_q(int *);
#endif


