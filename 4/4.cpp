using namespace std;
#include <iostream>
#include <ctime>


int main()
{
	setlocale(NULL, "rus");

	srand(time(NULL));

	const int k = 10;
	int mas[k];

	for (int i = 0; i < k; i++)
	{
		mas[i] = rand() % (-20) + (-10);
		cout << mas[i] << " ";
	}
	cout << "\n";

	int max = mas[0];
	int num2;
	for (int i = 0; i < k; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
			num2 = i;
		}
	}
	cout << "Максимум массива = " << max << endl;
	delete[] mas;
	return 0;
}