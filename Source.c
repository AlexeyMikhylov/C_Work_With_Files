#include <stdio.h>
#include <stdlib.h>

int main()
{
	run();
}

int run(void)
{
	int number;
	printf("task num: ");
	scanf_s("%d", &number);

	switch (number)
	{
	case 0:
		printf("exit"); exit(1);
	case 1:
		task1(); printf("\n"); run();
	case 2:
		task2(); printf("\n"); run();
	default:
		printf("error, try again");
	}
}

int task1(void) //вывод из файла и копирование
{
	FILE* file;
	FILE* file_copy;

	int option;

	char buffer[128];
	char filename[] = "file.txt";
	char file_copyname[] = "file(1).txt";

	file = fopen(filename, "w");
	fprintf(file, "text text text");
	fclose(file);

	scanf("%d", &option);
	switch (option)
	{
	case 1:
		file = fopen(filename, "r");
		fgets(buffer, 128, file);
		printf(buffer);
		fclose(file);

		break;
	case 2:
		file_copy = fopen(file_copyname, "w");
		file = fopen(filename, "r");
		fgets(buffer, 128, file);
		fprintf(file_copy, buffer);

		fclose(file);
		fclose(file_copy);

		break;
	default:
		printf("error");
	}
}

int task2(void)
{
	printf("2\n");
}