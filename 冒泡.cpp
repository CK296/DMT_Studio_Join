#include <cstdio>
int main()
{
    int v[6] = { 8, 3, 6, 2, 7, 1 };
    for (int i = 0; i < 5; i++)
    {
        bool swapped = false;
        for (int j = 0; j < 5 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", v[i]);
    }
    return 0;
}