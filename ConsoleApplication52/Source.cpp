#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#include<locale.h>
using namespace std;
int main()

{
	setlocale(LC_ALL, "russian");
	using namespace std;
	int task;
	cout << "vvedite # zadaniya" << endl;
	cin >> task;
	if (task == 1)
		/*/1.	������� "���������" ��������� �����: 2,1, 2,2, 2,3, ..., 2,8.*/
	{
		for (float i = 2.1;i <= 2.8;i += 0.1)
		{
			cout << i << endl;
		}


	}

	if (task == 2)
		/*/2.	���������� ������� ��������� 100, 200, 300, ..., 2000 � ������
		(��������� 1 �� ������ �������� � ����������).*/
	{
		int a;
		cout << "vvedite stoimost 100g konfet" << endl;
		cin >> a;
		for (int i = 100;i <= 2000;i += 100)
		{
			cout << i << " gramm konfet stoit " << i*a << " tenge" << endl;
		}

	}
	if (task == 3)
		/*/3.	�����:
		a.	����� ���� ����� ����� �� 100 �� 500;
		b.	����� ���� ����� ����� �� a �� 500 (�������� a �������� � ����������; a  <= 500);
		c.	����� ���� ����� ����� �� �10 �� b (�������� b �������� � ����������; b  >=10);
		d.	����� ���� ����� ����� �� a �� b (�������� a � b �������� � ����������; b >= a).
		*/
	{
		int sum = 0;
		int task;
		cout << "vvedite # zadaniya" << endl;
		cin >> task;
		if (task == 1)
		{
			for (int i = 100;i <= 500;i++)

			{
				sum += i;
				cout << i << endl;
				cout << sum << endl;
			}
		}
		if (task == 2)
		{
			int a;
			cout << "vvedite nizhnyuu granicu summy <500 " << endl;
			cin >> a;
			for (int i = a;i <= 500;i++)
			{
				sum += i;
				cout << i << endl;
				cout << sum << endl;
			}
		}
		if (task == 3)
		{
			int b;
			cout << "vvedite verhyuu granicu summy >=10" << endl;
			cin >> b;
			for (int i = -10;i <= b;i++)
			{
				sum += i;
				cout << i << endl;
				cout << sum << endl;
			}
		}
		if (task == 4)
		{
			int a, b;
			cout << "vvedite nizhnyuyu granicu summy a" << endl;
			cin >> a;
			cout << "vvedite verhnyuyu granicu summy b" << endl;
			cin >> b;
			for (int i = a;i <= b;i++)
			{
				sum += i;
				cout << i << endl;
				cout << sum << endl;
			}

		}
	}

		if (task == 4)
			/*/4.	"�������� ���". ����� ������� ������������ �� ������, ������� ��������� �� ���������� 1 �� �� ����.
			����� �� ����� ������, �� ����� ����������, ��� ����� ������ ����� ���������� ����, � ������������ �����.
			������ �������, �� ������ �������, ��������, ��� ���������� ��������� �� ������.
			������ 13 �� �� ����������� � ������, �� ����� ��������, ��� ����� ��������� ��������, ���� ��� � ��
			�������� ����. �� ���� ���, ������ ��� �������� ������, �� �������� 14 ��. ��� �� ���������� ��������,
			� ����� N �����, ������ 1/N ��, ����� ������ �������.
			����������:
			�) �� ����� ���������� �� ���� ����� ���������� ������� ����� 100-�� ����� (���� ���������, ��� ����� ��������);
			�) ����� ����� ���� �� ��� ���� �������.
			*/
		{
			double sum, sum1, sum2;
			double n;
			cout << "������� ���������� ������" << endl;
			cin >> n;
			sum = 0;
			sum1 = 0;
			sum2 = 0;

			for (int i = 1;i <= n;i++)
			{
				if (i % 2 == 0)

				{
					double sum;
					sum = i;
					sum1 += 1 / sum;
					//cout << i << endl;
					//cout << sum1 << endl;

				}
				if (i % 2 != 0)

				{
					double sum;
					sum = i;
					sum2 -= 1 / sum;
					//cout << i << endl;
					//cout << sum2 << endl;
				}



				double sum3 = sum1 + sum2;
				double sum4 = abs(sum1) + abs(sum2);
				double num = i;
				double num1 = 1 / num;
				cout << "� ����� " << i << endl;
				cout << "���������� ���������� �� ����� � " << i << " = " << num1 << endl;
				cout << "���������� �� ���� �� �� ����� � " << i << " = " << abs(sum3) << endl;
				cout << "����� �������� �� �� ����� � " << i << " = " << sum4 << endl;
			}
		}
		

		system("pause");
		return 0;
	}