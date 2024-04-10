#include <bits/stdc++.h>
using namespace std;
int64_t n, d, x, s, b = 1e9, v[100005], i, j, k;
main()
{
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = -1; i <= 1; i++)
    {
        for (j = -1; j <= 1; j++)
        {
            d = v[1] + j - v[0] - i;
            s = abs(i);
            for (k = 1; k < n; k++)
            {
                x = abs(v[k] - (v[0] + i + k * d));
                if (x > 1)
                    break;
                s += x;
            }

            if (k == n)
                b = min(b, s);
        }
    }
    cout << (b < 1e9 ? b : -1);
}