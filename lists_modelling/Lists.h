#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> 
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h> 

struct node
{
	int number;         //№ карточки
	char name[30];      //наименование банка
	int code;           //личный код
	int sum;            //сумма

};

int test();
void input(node [], int);
int create(int *, node [], int []);
int add(int *, node [], int []);
int delete_elem(int *, int, node[], int[], node *);
void read(int , node [], int []);
int search(int, int, node [], int []);
int length(int );
int delete_q(int *, int []);
#endif
