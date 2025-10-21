#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");


	int chislo, answer;
	cout << " Введите число: ";
	cin >> chislo;
	for (int i = 1; i < 10; i++)
	{
		cout << "Решите пример: " << chislo << " x " << i << endl << "Ответ: ";
		cin >> answer;
		if (answer == chislo * i) cout << "Пример решен правильно!\n\n";
		else
		{
			cout << "Ошибка, пример решен неверно!";
			break;
		}
		if (i == 9) cout << "Примеры решены, поздравляем! ";
	}


}
