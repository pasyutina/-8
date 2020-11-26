using namespace std;
#include <ctime>
#include <iostream>

int* create(int& n) 
{
	cout << "n = ";
	cin >> n;
	int* mass = new int[n];
	for (int i = 0; i < n; ++i) {
		cout << "mass[" << i << "] = ";
		cin >> mass[i];
	}
	return mass;
}
void output(int* pMass, int& size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(&pMass[i]) << " ";
	}
	cout << std::endl;
}

int main()
{
	setlocale(NULL, "rus");
    int n, a, b;
    int* mas = create(n);
    cout << "Введите интервал \na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (a >= b) 
    {
        cout << "Ошибка! Неправильно задан интервал!" << endl;
        system("pause");
        return 0;
    }
    cout << "Исходный массив = " << endl;
    output(mas, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mas[i] >= a && mas[i] <= b)
            {
                mas[i] = mas[n - 1];
                n--;
            }
        }
    }
    cout << "Новый массив = " << endl;
    output(mas, n);
    delete[] mas;
    system("pause");
    return 0;
}