#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;

	printf("������� ����� �������:\t");
	scanf("%d", &n);

	if (n == 1)
	{

		//   1.	��������, ��� X �� ������ ����� A ������. ����������, ������� ����� 1 �� � Y �� ���� �� ������.

		int x = 0, a = 0;

		printf("������� ����� ������ � ��.:\t");
		scanf("%d", &x);

		printf("������� ��������� � ������:\t");
		scanf("%d", &a);

		int k = 0, y = 0;

		k = a / x;
		y = 5 * k;
		printf("1 �� ������ ����� = %d � 5 ��. ������ ����� = %d\n", k, y);



	}

	else if (n == 2)
	{

		// 2.������ �������� ��������� A�x + B = 0, �������� ������ �������������� A � B(����������� A �� ����� 0).

		float A = 0, B = 0, X = 0;
		printf("������� �������� �:");
		scanf("%f", &A);
		if (A == 0)
		{
			printf("� �� ����� ���� ����� ����\n");
		}
		else
		{
			printf("������� �������� �:");
			scanf("%f", &B);

			X = (-B / A);

			printf("�������� ��������� ��������� = %f\n", X);

		}
	}

	else if (n == 3)
	{


		//3. � ������ ����� ������ N ������ (N � �����). ����� ���������� ������ �����, ��������� � ������ �����.

		int N = 0, M = 0;

		printf("������� ������� ������ ������:\t");
		scanf("%d", &N);

		M = N / 60;
		printf("���������� ������ ����� = %d\n", M);
	}



	else if (n == 4)
	{

		//4.	�������� ������� ���������� V1 ��/�, ������� � V2 ��/�, ���������� ����� ���� S ��. 
		//���������� ���������� ����� ���� ����� T �����, ���� ���������� ������������� �������� ��������� ���� �����. 
		//������ ���������� ����� ������ �������� ���������� ���������� � ������ ����, ������������ ������������; ����� ���� = ����� � ��������� ��������.

		int V1 = 0, V2 = 0, T=0, S1=0;

		printf("������� ��������  ������� ����������:\t");
		scanf("%d", &V1);
		
		printf("������� ��������  ������� ����������:\t");
		scanf("%d", &V2);
		
		printf("������� �����:\t");
		scanf("%d", &T);
		
		printf("������� ���������� ����� ����:\t");
		scanf("%d", &S1);
		
		int Y = 0;

		Y = T*(V1 + V2);
		printf("����� ���� = %d\n", Y);

		int S2 = 0;

		S2=/S1-Y/

	}


	else
	{

	}

}