#include <iostream>
using namespace std;
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
    cout << "Введите начало и конец интервала = " << endl;
    cin >> a >> b;

    if (a > b)
    {
        cout << "Ошибка! Неправильно введен интервал!" << endl;
        system("pause");
        return 0;
    }
    cout << std::endl;
    cout << "Элементы = ";

    for (int i = 0; i < n; ++i)
    {
        if (i < a || i > b)
        {
            cout << mas[i] << " ";
        }
    }
    cout << endl;
    delete[] mas;
    return 0;
}