#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h> 
#include <conio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h> 

struct node
{
	char fio[20]; 		//фамилия работника
	char dolgnost[30];  //должность
	int god;   			//год поступления на работу
};

int test();
int create(int *, int *, node []);
int delete_elem(int *, int *, node [], node *);
void read(int, int, node[]);
int length(int , int );
int delete_q(int *, int *);
#endif

