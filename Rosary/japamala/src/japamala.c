
/*
 ============================================================================
 Name : rosary.c
 Author : kiranantosebastian
 Version :0.0
 Copyright : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

open()
{
	printf("Rosary\n");//intro
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
