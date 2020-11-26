using namespace std;
#include <ctime>
#include <iostream>


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
		mas[i] = rand() % 20;
		cout << mas[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mas[i] % 2 == 0)
			{
				mas[i] = mas[n - 1];
				n--;
			}
		}
	}
	cout << "Измененный массив = " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << " ";
	}
	delete[] mas;
	return 0;
}