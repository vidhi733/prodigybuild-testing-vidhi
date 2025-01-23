#include <stdio.h>
#include <string.h>

int linsearch(const char **yarr, const char *val)
{
    for(int i = 0; i < sizeof(yarr) / sizeof(yarr[0]); i++)
    {
        if(strcmp(yarr[i], val) == 0)
        {
            return 0;
        }    
    }
    return 1;
}

int main()
{
    const char *yarr[] = {"Shluck much", "much Shluck"};
    const char *val = "Shluck Much";
    linsearch(yarr, val);
    return 0;
}