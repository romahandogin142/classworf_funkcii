#include <iostream>
#include <ctime>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;
double min(double *x, double *y);
//
//int zd3(int mas[5][6], int *cred);
void massiv(int *mas, int *sum, int *proizvedenie, int razm);
void str(char *mas);
void main()
{

	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "To exit, press enter'" << endl;
		cout << "Vedite nomer zadaniya : ";
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			//������� ����������
			int one = 99;
			int * refone, *refThree;
			refone = &one;
			refThree = refone;
			cout << "�������� �� ������ refone �  reftThree " << *refone << " - " << *refThree << endl;;
			//������ 
			cout << &one << endl;
			cout << "�������� ���������� refone �  reftThree " << refone << " - " << refThree<<endl;

		}break;

		case 2:
		{
			double x, y;
			x = 5;
			y = 10;
			cout << min(&x, &y) << endl;


		}break;



		case 3:
		{
			/*1.	�������� �������, ������� �������� ��������� �� ���-��� � ��� ������, � ���������� ����� � ������������ ��� ��������� � ���� ����������-�������.*/
			int mas[15],sum=0,proizvedenie=1;
			for (int i = 0; i < 15; i++)
			{
				mas[i] = 1 + rand() % 20;
				cout << i << " - " << mas[i] << " " << endl;
			}
			cout << "Proizvedenie " << proizvedenie << endl;
			cout << "Summa  " << sum << endl;
			massiv(mas,&sum,  &proizvedenie, 15);
			cout << "Proizvedenie " << proizvedenie << endl;
			cout << "Summa  " << sum << endl;
		}break;
		
		//case 4:
		//{
		//	/*3.	�������� �������, ������� �������� ��������� �� ���-������ ������ � ��� ������, � 
		//	���������� ������� �������������� ��������� �������, � ����� ���������� ������ � ��������
		//	���������, ��������� �������� ���-���.*/
		//	int mas[5][6],cred=0;
		//	for (int i = 0; i < 5; i++)
		//	{
		//		for (int h = 0; h < 6; h++)
		//		{
		//			mas[i][h] = 1 + rand() % 20;
		//			cout << i << " - " << mas[i][h] << " " << endl;
		//		}
		//	}
		//	zd3(&mas[0][0],&cred);
		//		cout << "Crednee arifmeticheskoe  " << cred << endl;
		//}break;

		case 5:
		{
			/*6.	������� �������, ����������� ��������� ���� ������-��� � ����� �������.*/
 char  mas[100] = "Roman";
 str(mas);
 cout << mas<< endl;;
 
		}

		case 6:
		{
			/*7.	������� �������, ����������� ��������� ���� ������-���, ������� � ������������� ������� �������.*/


		}



		}















		system("pause");

	} while (tm != 200);



}
double min(double *x, double *y)
{
	if (*x > *y)
		return *x;
	else
		return*y;
}	
void massiv(int *mas,int *sum,int *proizvedenie,int razm )
{
	for (int i = 0; i < razm; i++)
	{
		*proizvedenie *= mas[i];
		*sum += mas[i];
	}
}
 
//int zd3(int *mas[5][6],int *cred)
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int  h = 0; h <  6; h++)
//		{
//			*cred = *mas[i][h]/30;
//		}
//	
//	}
//
//}

void str(char *mas)
{
	char name[100];

	cout << " ������ ��� "<<endl;
	cin >> name;

	strcat(mas, name);
	
}