#include <stdio.h>

int main()
{
    for(int i = 2; i < 41; i++)
    {
        int flag = 0;
        
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                flag++;
                break;
            }
        }
        if(!flag)
        {
            printf("A prime number is %d\n", i);
        }
    }

    
    for(int i = 2; i < 81; i++)
    {
        int flag = 0;
        
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                flag++;
                break;
            }
        }
        if(!flag)
        {
            printf("A prime number is %d\n", i);
        }
    }

    for(int i = 2; i < 161; i++)
    {
        int flag = 0;
        
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                flag++;
                break;
            }
        }
        if(!flag)
        {
            printf("A prime number is %d\n", i);
        }
    }

    for(int i = 2; i < 2001; i++)
    {
        int flag = 0;
        
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                flag++;
                break;
            }
        }
        if(!flag)
        {
            printf("A prime number is %d\n", i);
        }
    }



}
