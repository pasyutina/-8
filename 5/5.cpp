using namespace std;
#include <iostream>

int** create(int& n, int& m) {
    cout << "n = ";
    cin >> n;
    m = n;
    int** mas = new int* [n];
    for (int i = 0; i < n; ++i) {
        mas[i] = new int[m];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "mas[" << i << "][" << j << "] = ";
            cin >> mas[i][j];
        }
    }
    return mas;
}

void print(int** mass, int n, int m) 
{
    for (int i = 0; i < n; i++, cout << endl)
    {
        for (int j = 0; j < m; j++) {
            cout << mass[i][j] << "\t";
        }
    }
}

void delete_mass(int** mass, int n)
{
    for (int i = 0; i < n; i++) {
        delete[] mass[i];
    }
    delete[] mass;
}

int main()
{
    setlocale(NULL, "rus");
    int n, m, sum = 0, del = 0;
    int** a = create(n, m);
    print(a, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) {
            if (a[i][j] % 2 == 0) {
                sum += a[i][j];
                ++del;
            }
        }
    }
    cout << "Cреднее арифметическое четных элементов ниже главной диагонали = " << sum / del << endl;
    delete_mass(a, n);
    system("pause");
    return 0;
}
