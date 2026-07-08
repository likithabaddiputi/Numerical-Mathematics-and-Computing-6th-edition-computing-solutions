#include <stdio.h>

int main()
{
    float fn, gn, hn;
    for (int i = 1; i < 51; i++)
    {
        fn = 1.0f / i;      
        gn = fn;            
        for (int j = 0; j < i - 1; j++)   
        {
            gn += fn;
        }
        hn = i * fn;
        printf("%d %f %f %f\n", i, fn, gn, hn);
    }
    return 0;
}
