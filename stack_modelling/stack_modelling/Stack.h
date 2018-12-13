#ifndef STACK_H
#define STACK_H

#include <stdio.h> 
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h> 

struct node
{
	char provider[20];        //поставщик
	int code;                 //код_детали
	char name[30];            // наименование
	char unit[10];            //единица измерения
};

int test();
int create(int *, node []);
int delete_elem(int *, node [], node *);
void read(int, node p[]);
int length(int);
int delete_q(int *);
#endif


