#include <iostream>
using namespace std;

int main()
{
    int n, day;
    // int day = 0, ite = 0;
    cin >> n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    while (n > 0)
    {
        for (int i = 0; i < 7; i++)
        {
            n = n - arr[i];
            if (n <= 0)
            {
                day = i+1;
                break;
            }
            // n = n - arr[ite];
            // if(day > 6){
            //     day = 0;
            // }
            // if(ite > 6){
            //     ite = -1;
            // }
            // ite ++;
            // day ++;
        }
    }
    cout << day << endl;
}