#include <stdio.h>;
#include <locale.h>


int main()
{
	setlocale(LC_ALL, ("RUS"));
	int a, b;
	printf("������� ������ ��� �����, � ������� ������ ������ ���������� ����\n");
	scanf_s("%d", &a);
	printf("���� ��� ���������� - ������� 1, ���� ��� - 0\n");
	scanf_s("%d", &b);
	switch (a)
	{
	case 1:
	{
		printf("31");
		break;
	}
	case 2:
	{
		if (b == 0)
		{
			printf("28");
		}
		else
		{
			printf("29");
		}
		break;
	}
	case 3:
	{
		printf("31");
		break;
	}
	case 4:
	{
		printf("30");
		break;
	}
	case 5:
	{
		printf("31");
		break;
	}
	case 6:
	{
		printf("30");
		break;
	}
	case 7:
	{
		printf("31");
		break;
	}
	case 8:
	{
		printf("30");
		break;
	}
	case 9:
	{
		printf("31");
		break;
	}
	case 10:
	{
		printf("30");
		break;
	}
	case 11:
	{
		printf("31");
		break;
	}
	case 12:
	{
		printf("30");
		break;
	}
	}
}