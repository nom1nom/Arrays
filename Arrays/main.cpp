#include<iostream>
using namespace std;

//#define TASK1_0
//#define TASK2_0
//#define TASK3_0
//#define TASK4_0
//#define TASK5_0
//#define TASK6_0
//#define TASK7_0
//#define TASK8_0

//      �������
//#define TASK1//�������� ������ �� 5 ���������
#define TASK2//��������� ������


void main()
{
	setlocale(LC_ALL, "");

#if defined TASK1_0

	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

#endif 

#if defined TASK2_0 //y=k*x+b, x=0,1,2,..99 //  y[0]=k*0+b, y[1]=k*1+b...

	float y[100];
	int k = 2;
	int b = 5;
	for (int x = 0; x < 100; x++)
		y[x] = k * x + b;
	for (int x = 0; x < 100; x++)
		cout << y[x] << " ";

#endif

#if defined TASK3_0 //����� ������� ���� ������

	int m[10];
	float s=0;
	for (int i = 0; i < 10; i++) {
		m[i] = rand() % 4 + 2;//�����.����.�����, �������� ���������� ������
	}
	for (int i = 0; i < 10; i++) {
		s = s + m[i];
		cout << m[i] << " ";
		}
	cout << "������� ���� =" << s / 10 << " "; cout<<endl;

#endif

#if defined TASK4_0//������� ������ � ������ �������
	const int SIZE = 100;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}
	cout << endl;

#endif

#if defined TASK5_0//������� ������ � �������� �������
	const int SIZE = 100;
	int arr[SIZE];
	for (int i = SIZE - 1; i >= 0; i--)
	{
		arr[i] = i;
		cout << arr[i] << endl;
	}
#endif

#if defined TASK6_0//��������� ����� ��������� �������
	const int SIZE = 3;
	int arr[SIZE];
	int s = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� �������� �������:\t"; cin >> arr[i];
		s = s + arr[i];
	}
	cout << "����� ��������� ������� =" << s << " "; cout << endl;

#endif

#if defined TASK7_0//��������� ������� ���������. ��������� �������

	const int SIZE = 3;
	int arr[SIZE];
	float s = 0;
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� �������� �������:\t"; cin >> arr[i];
		s = s + arr[i];
	}
	cout << "������� �������.��������� ������� =" << s / SIZE << " "; cout << endl;

#endif

#if defined TASK8_0 //������ �� ��������� �����
	const int SIZE = 5;
	int arr[SIZE];
//���������� ������� ���������� �������
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100;
	}
//����� ������� �� �����
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
    }
	cout << endl;

#endif

// �������

#if defined TASK1 //�������� ������ �� 5 ���������

	int arr[5]= {7,4,5,8,5};
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " "; 
	}
	cout << endl;

#endif

#if defined TASK2

	const int SIZE =3 ;
	int arr[SIZE];
	int s = 0;

//2.������� ��� �������� ������� � ����������
	for (int i = 0; i < SIZE; i++)
	{
		cout << "������� �������� �������:\t"; cin >> arr[i]; 
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << "arr[" << i << "]= " << arr[i] << "\n"; 
	}
		cout << endl;
//3.������� ������ � ������ �������
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
		cout << endl;
//4.������� ������ � �������� �������
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
//5.��������� ����� ��������� �������
	for (int i = 0; i < SIZE; i++)
	{
	s = s + arr[i];
	}
	cout << "����� ��������� ������� =" << s << " "; cout << endl;

//6.��������� ������� ���������. ��������� �������
	cout << "������� �������.��������� ������� =" << (float)s / SIZE << " "; cout << endl;

//7.����� �������
	int number_of_shifts;
	cout << "������� ���������� �������:"; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
	for (int i = 0; i < SIZE; i++) //����� ������� �� �����
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

//8.�����. � ����.�������� �������
	
	int min,max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "����������� �������� � ������� =" << min << " "; cout << endl;
	cout << "������������ �������� � ������� =" << max << " "; cout << endl;

#endif








}


