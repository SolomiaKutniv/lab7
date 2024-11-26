#include <iostream>
#include <valarray>
#include <ctime>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Ukrainian");
    srand(time(0));

    const size_t n = 10; 
    int arr[n];
    for (size_t i = 0; i < n; ++i)
    {
        arr[i] = rand() % 100; 
    }

   
    valarray<int> valArr(arr, n);

  
    cout << "������������ �����: ";
    for (size_t i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int sum = valArr.sum();
    int min = valArr.min();
    int max = valArr.max();
    double average = static_cast<double>(sum) / n;

    cout << "���� ��������: " << sum << endl;
    cout << "̳������� ��������: " << min << endl;
    cout << "����������� ��������: " << max << endl;
    cout << "������ �����������: " << average << endl;

    return 0;
}
