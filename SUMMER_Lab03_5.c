//1010
#include <stdio.h>

int main()
{
    int i, j, k, t, n, m;
    long long ans;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        // mCn
        scanf(" %d %d", &n, &m);

        ans = 1;
        for (j = m - n + 1, k = 1; j <= m; j++, k++)
        {
            ans = ans * j / k;
        }

        printf("%lld\n", ans);
    }

    return 0;
}