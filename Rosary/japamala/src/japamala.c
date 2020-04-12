/*
 ============================================================================
 Name : rosary.c
 Author : kiranantosebastian
 Version :
 Copyright : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

open()
{
	printf("Rosary\n");
}

void menu()
{
	int select;
	open(); //this is the introduction screen
	printf("1. Daily Rosary\n2. Today's mystery\n");
	scanf("%d", &select);//select
}

int main()
{
	menu();
	return 0;
}
