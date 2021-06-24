#include <iostream>
#include <ctime> 
#include <iomanip> 
#include <string>
using namespace std;
#define Debug "PressF"




int main()
{
	setlocale(LC_ALL, "Russian");
	int z;
	do {
		cout << "Введите номер задания для его дальнейшего выполнения (для выхода - 0): ";
		cin >> z;
		switch (z) {
		case 1: {
			cout << "Создайте функцию, которая организует простейшей сжатие входящей символьной строки произвольного масштаба.\n Сжатие происходит по следующему принципу: если в строке есть последовательность повторяющихся символов,\nто она заменяется на пару​ код​ символа и количество его повтора в строчке.\n Обеспечьте возможность ввода строки с клавиатуры.\n​";
			string Strr, smen = "";
			cout << "Введите шо угодно тока без скобок '(' ')'\n";
			cin >> Strr;
			int kolv = 1;
			for (int c = 0; c < Strr.length(); c++) {

				if (kolv != 1) {
					if (Strr[c] == Strr[c + 1])
						kolv++;
					else {
						smen += "_" + to_string(kolv) + ")";
						kolv = 1;
					}
				}

				else {
					if (Strr[c] == Strr[c + 1]) {
						smen += "(" + to_string(Strr[c]);
						kolv++;
					}
					else
						smen += Strr[c];

				}
			}
#ifdef Debug
			cout << "\n\n" << smen << "\nЦе ваши значки только с укорачиванием вида аааа = (97_4), а то что вышло только на 2 символа длинее - не моя проблема\n"; //прямо как смысл жизни
#endif // Debug

		}
			  break;
		case 2: {
			cout << "Реализуйте сортировку массива вставками.(массив из целых чисел).\n";
			srand((int)time(0));
			int n;
			do
			{
				cout << "Enter n: "; cin >> n;
				if (n < 2 || n >= 8) {
					cout << "введите 2<=n<8 ...\n";
					system("pause");
					system("cls");
				}
			} while (n < 1 || n >= 8);
			int* arr = new int[n];

			for (int i = 0; i < n; i++)
			{
				arr[i] = rand() % 100;
				cout << arr[i] << "\t";
			}
			cout << endl;
			int fict;
			for (int i = 1, j; i < n; i++)
			{
				fict = arr[i];
				for (j = i - 1; j >= 0 && arr[j] > fict; j--)
					arr[j + 1] = arr[j];
				arr[j + 1] = fict;
			}

			for (int i = 0; i < n; i++)
				cout << arr[i] << "\t";
			cout << endl;
			delete[]arr;
		}
			  break;
		case 3: {
			cout << "Создайте программу, позволяющую находить в строке подстроку\nи заменять её на другую произвольную подстроку в каждом месте обнаружения.\n";
			string Str;
			cout << "Введите строку:\t";
			cin >> Str;
			string toReplace;
			cout << "Введите заменяемую подстроку:\t";
			cin >> toReplace;
			string replaceWith;
			cout << "Введите новую подстроку:\t";
			cin >> replaceWith;

			size_t pos = 0, cnt = 0;

			while ((pos = Str.find(toReplace, pos)) != string::npos)
			{
				Str.replace(pos, toReplace.size(), replaceWith);
				pos += replaceWith.size();
				cnt++;
			}
			cout << Str << endl << "Количество замен: " << cnt << endl;
		}
			  break;

		}

		system("pause");
		system("cls");
	} while (z != 0);
	cout << "\n\n\n\n\t\t\tСделал Пахнин Григорий\n\n\n\n\n";
	return 0;
}