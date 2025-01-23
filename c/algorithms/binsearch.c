#include <stdio.h>
#include <stdlib.h>

int binsearch(const int *yarr, int element)
{
    int mid = 10 / 2;
    int left = mid;
    int right = 10 - left;
    extern int i;

    if (element == yarr[mid])
    {
        printf("%d", yarr[mid]);
    }

    if (element != yarr[right])
    {
        for (i = 0; i < left; i++)
        {
            if (element == yarr[i])
            {
                printf("%d", yarr[i]);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int yarr[10];
    for (int i = 0; i < 10; i++)
    {
        yarr[i] = atoi(argv[i + 1]);
    }
    int element = atoi(argv[11]);
    binsearch(yarr, element);
    return 0;
}