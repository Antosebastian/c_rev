#include<stdio.h>

enum valuetype{
	CHAR,
	INT,
	FLOAT,
	STRING
};

void printvalue(void* p, enum valuetype type)
{
	switch(type)
	{
	case CHAR:
		printf("Character: %c\n", *(char*)p);
		break;
	case INT:
		printf("Integer: %d\n", *(int*)p);
		break;
	case FLOAT:
		printf("Float: %f\n", *(float*)p);
		break;
	case STRING:
		printf("String: %s\n", (char*)p);
		break;
	default:
		printf("Unexpected valuetype used\n");
		break;
	}
}

void main()
{
	int a = 100;
	char c = 'A';
	float pi = 3.14f;

	int* pa = &a;
	char* pc = &c;
	float* ppi = &pi;

	void* p;
	p = pa;
	p = &a;
	p = &c;
	p = &pi;

	printvalue(&a, INT);
	printvalue(&c, CHAR);
	printvalue(ppi, FLOAT);
	printvalue("Hi this is a string used with void pointer", STRING);
}
