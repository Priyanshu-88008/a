#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    int x, a, n;
    int count = 0;

    // cout << "Enter number of trials" << endl;
    cin >> t;

    for (int ab = 0; ab < t; ab++)
    {
        // cout << "Enter the no. of fd's." << endl;
        cin >> n>>x;

        int q[n];
        int tq = 0;

        // cout << "Enter the amount of coins wanted." << endl;
        // cin >> x;

        for (int j = 0; j < n; j++)
        {
            // cout << "Enter the no. of coins in FD number - " << j + 1 << endl;
            cin >> q[j];
        }

        sort(q, q + n);

        int ps[n];

        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            ps[i] = q[j];
        }

        int m = 0;
        int p = 0;
        int r = 0;
        int s = 0;

        for (int i = 0; i < n; i++)
        {

            p = p + ps[i];

            if (p >= x)
            {
                s = i + 1;
                tq = s;
                break;
            }
        }

        if (tq > 0)
        {
            cout <<"......"<< "\n"<<tq << endl;
        }
        else
            cout <<"......"<< "\n-1" << endl;

        cout<<".................."<<endl;
    }

}
