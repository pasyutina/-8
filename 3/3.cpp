using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    setlocale(NULL, "rus");
    int* mas, n;
    cout << "Введите количество элементов = " << endl;
    cin >> n;
    mas = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        mas[i] = rand() % 10;
        cout << mas[i] << " ";
    }
    cout << "\n";

    int min = mas[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] <= min)
        {
            min = mas[i];
            index = i;
        }
    }
    cout << "Последний минимальный элемент = " << min << "\n";
    cout << "Номер последнего минимального элемента = " << index << endl;
    delete[] mas;
    return 0;
}
