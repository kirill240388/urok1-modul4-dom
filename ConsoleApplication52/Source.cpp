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
		/*/1.	Вывести "столбиком" следующие числа: 2,1, 2,2, 2,3, ..., 2,8.*/
	{
		for (float i = 2.1;i <= 2.8;i += 0.1)
		{
			cout << i << endl;
		}


	}

	if (task == 2)
		/*/2.	Напечатать таблицу стоимости 100, 200, 300, ..., 2000 г конфет
		(стоимость 1 кг конфет вводится с клавиатуры).*/
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
		/*/3.	Найти:
		a.	сумму всех целых чисел от 100 до 500;
		b.	сумму всех целых чисел от a до 500 (значение a вводится с клавиатуры; a  <= 500);
		c.	сумму всех целых чисел от –10 до b (значение b вводится с клавиатуры; b  >=10);
		d.	сумму всех целых чисел от a до b (значения a и b вводятся с клавиатуры; b >= a).
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
			/*/4.	"Странный муж". Некий мужчина отправляется на работу, которая находится на расстоянии 1 км от дома.
			Дойдя до места работы, он вдруг вспоминает, что перед уходом забыл поцеловать жену, и поворачивает назад.
			Пройдя полпути, он меняет решение, посчитав, что правильнее вернуться на работу.
			Пройдя 13 км по направлению к работе, он вдруг осознает, что будет настоящим подлецом, если так и не
			поцелует жену. На этот раз, прежде чем изменить мнение, он проходит 14 км. Так он продолжает метаться,
			и после N этапа, пройдя 1/N км, снова меняет решение.
			Определить:
			а) на каком расстоянии от дома будет находиться мужчина после 100-го этапа (если допустить, что такое возможно);
			б) какой общий путь он при этом пройдет.
			*/
		{
			double sum, sum1, sum2;
			double n;
			cout << "Введите количество этапов" << endl;
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
				cout << "№ этапа " << i << endl;
				cout << "Расстояние пройденное на этапе № " << i << " = " << num1 << endl;
				cout << "Расстояние от дома км на этапе № " << i << " = " << abs(sum3) << endl;
				cout << "Всего пройдено км на этапе № " << i << " = " << sum4 << endl;
			}
		}
		

		system("pause");
		return 0;
	}