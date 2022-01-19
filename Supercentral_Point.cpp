#include <iostream>
using namespace std;

int main()
{
    int n, x, y, count = 0;

    cin >> n;
    int xarr[n], yarr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        xarr[i] = x;
        yarr[i] = y;
    }
    for (int i = 0; i < n; i++)
    {
        bool left(false), right (false), up (false), down (false);
        for (int j = 0; j < n; j++)
        {
            if (xarr[j] > xarr[i] && yarr[j] == yarr[i])
            {
                right = true;
            }
            if (xarr[j] < xarr[i] && yarr[j] == yarr[i])
            {
                left = true;
            }
            if (xarr[j] == xarr[i] && yarr[j] > yarr[i])
            {
                up = true;
            }
            if (xarr[j] == xarr[i] && yarr[j] < yarr[i])
            {
                down = true;
            }
        }
        if (left && right && up && down)
        {
            count++;
        }
    }

    cout<<count<<endl;
}