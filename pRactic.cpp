#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");


	int chislo, answer;
	cout << " ������� �����: ";
	cin >> chislo;
	for (int i = 1; i < 10; i++)
	{
		cout << "������ ������: " << chislo << " x " << i << endl << "�����: ";
		cin >> answer;
		if (answer == chislo * i) cout << "������ ����� ���������!\n\n";
		else
		{
			cout << "������, ������ ����� �������!";
			break;
		}
		if (i == 9) cout << "������� ������, �����������! ";
	}

}