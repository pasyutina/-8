using namespace std;
#include <iostream>
#include <ctime>


int main()
{
	setlocale(NULL, "rus");
	srand(time(NULL));
	int m, n;
	cout << "n = ";
	cin >> n;
	m = n;

	int** mas = new int* [n];
	for (int i = 0; i < n; ++i) 
	{
		mas[i] = new int[m];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			mas[i][j] = rand() % 10;
			cout.width(3);
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	int max = mas[0][0];
	int* b = new int[m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mas[i][j] > max)
			{
				max = mas[i][j];
			}
		}
	}
	cout << "Максимальный элемент: " << max << endl;
	delete[] mas;
	return 0;
}
