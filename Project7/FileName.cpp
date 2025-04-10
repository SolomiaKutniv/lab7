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

  
    cout << "Çãåíåðîâàíèé ìàñèâ: ";
    for (size_t i = 0; i < n; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int sum = valArr.sum();
    int min = valArr.min();
    int max = valArr.max();
    int average = (sum) / n;

    cout << "Ñóìà åëåìåíò³â: " << sum << endl;
    cout << "Ì³í³ìàëüíå çíà÷åííÿ: " << min << endl;
    cout << "Ìàêñèìàëüíå çíà÷åííÿ: " << max << endl;
    cout << "Ñåðåäíº àðèôìåòè÷íå: " << average << endl;

    return 0;
}
