using namespace std;
#include <iostream>
#include <ctime>

int main()
{
	setlocale(NULL, "rus");
	int* mas, n;
	cout << "Размерность массива = " << endl;
	cin >> n;
	mas = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		mas[i] = rand() % 30;
		cout << mas[i] << " ";
	}
	cout << "\n";

	int a, b;
	cout << "Введите промежуток = " << endl;
	cin >> a >> b;
	if (a > b) 
	{
		cout << "Ошибка! Неправильно введен интервал!" << endl;
		system("pause");
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (mas[i] >= a && mas[i] <= b)
		{
			mas[i] = 0;
		}
		cout << mas[i] << " ";
	}
	return 0;
}
