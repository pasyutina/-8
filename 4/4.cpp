using namespace std;
#include <iostream>
#include <ctime>

int** create(int& n, int& m) 
{
	cout << "n = ";
	cin >> n;
	cout << "m = ";
	cin >> m;
	int** mass = new int* [n];
	for (int i = 0; i < n; ++i)
	{
		mass[i] = new int[m];
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << "mass[" << i << "][" << j << "] = ";
			cin >> mass[i][j];
		}
	}
	return mass;
}
void print(int** mass, int n, int m) 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << mass[i][j] << "\t";
		}
	}
}

int main()
{
	setlocale(NULL, "rus");
	int n, m;
	int** mas = create(n, m);
	print(mas, n, m);
	int min = -mas[0][0] * 111;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (min < mas[i][j] && mas[i][j] < 0)
			{
				min = mas[i][j];
			}
		}
	}
	if (min < 0 && min != -mas[0][0] * 111) {
		cout << "Максимум из отрицательных элементов = " << min << endl;
	}
	else 
	{
		cout << "Отрицательных чисел нет" << endl;
	}
	delete[] mas;
	return 0;
}