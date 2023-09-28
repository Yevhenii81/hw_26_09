#include <iostream>
#include <Windows.h>
using namespace std;


//Написать функцию, возвращающую среднее арифметическое элементов 
//передаваемого ей одномерного статического массива с типом элементов
// int

double calculateAverage(const int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    int average = sum / size;

    return average;
}

//2)Написать функцию, показывающую на экран минимум и максимум (значение 
// и индекс) среди элементов передаваемого ей одномерного статического
// массива с типом элементов double

void findMinMax(const double array[], int sizeNMinMax)
{
    double min = array[0];
    double max = array[0];
    int minInd = 0;
    int maxInd = 0;

    for (int x = 1; x < sizeNMinMax; x++)
    {
        if (array[x] < min)
        {
            min = array[x];
            minInd = x;
        }

        if (array[x] > max)
        {
            max = array[x];
            maxInd = x;
        }
    }

    cout << "2)Min value: " << min << ", ind " << minInd << "\n";
    cout << "  Max value: " << max << ", ind " << maxInd << "\n";

}

//3) Написать функцию, меняющую порядок следования элементов
// передаваемого ей одномерного ститеческого массива с типом элементов
// double на противоположный, например, были числа 1 2 3 4 5 ,стало
// - 5 4 3 2 1 

void reverseArray(double arrRever[], int sizeRever)
{
    for (int y = 0; y < sizeRever / 2; y++)
    {
        double temp = arrRever[y];
        arrRever[y] = arrRever[sizeRever - 1 - y];
        arrRever[sizeRever - 1 - y] = temp;
    }
}

int main()
{
    const int arrSize = 5;

    int arr[arrSize] = {1, 2, 3, 4, 5 };

    int avg = calculateAverage(arr, arrSize);
    cout << "1)Average: " << avg << "\n\n";

    double array[arrSize] = { 1.9, 21.3, 10.9, 7.8, 63.3 };
    findMinMax(array, arrSize);
    cout << "\n";

    ///////

    double arrRever[arrSize] = {1.0, 2.0, 3.0, 4.0, 5.0};
    cout << "3)Array: ";
    for (int y = 0; y < arrSize; y++)
    {
        cout << arrRever[y];
    }
    cout << "\n";

    reverseArray(arrRever, arrSize);

    cout << "  Reversed array: ";
    for (int y = 0; y < arrSize; y++)
    {
        cout << arrRever[y];
    }
    cout << "\n";

    Sleep(INFINITE);
}














// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
