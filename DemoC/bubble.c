#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void bubble_sort1(int str[], int n)
{
    int i ,j, tmp;
    for(i = 0; i < n - 1; ++i)
    {
        for(j = 0; j < n-i-1; ++j)
        {
            if(str[j] > str[j+1] )
            {
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
}

void bubble_sort2(int str[], int n)
{
    int tmp,high = n-1, low = 0, j;

    while(low < high)
    {
        for(j = high; j > low; --j)
        {
            if(str[j - 1] > str[j])
            {
                tmp = str[j - 1];
                str[j - 1] = str[j];
                str[j] = tmp; 
            }
        }
        ++low;

        for(j = low; j < high; ++j)
        {
            if(str[j] > str[j + 1])
            {
                tmp = str[j+1];
                str[j + 1] = str[j];
                str[j] = tmp; 
            }
        }
        --high;
    }
}

void bubble_sort3(int str[], int n)
{
    int j, tmp, i = n - 1, pos,m = 0;
   while(i != m)
    {
        for(j = 0; j < i ; ++j)
        {
            if(str[j] > str[j+1] )
            {
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
                pos = j ;
            }
        }
        //printf("pos:%d\n", pos);
        m = i;
        i = pos;
    }
}

int  recyle(int str[], int n)
{
    int tmp;
    int m = n;

    if(0 == m - 1)
    {
        return 0;
    }

    recyle(str, m-1);
    for(; m >= 2; m--)
    {
       //printf("m:%d\n", m);
        if(str[m-2] > str[m-1])
        {
            tmp = str[m-2];
            str[m - 2] = str[m-1];
            str[m - 1] = tmp; 
        } 
    }
}

int main()
{
#define MAX_SIZE 10
    time_t  t1, t2;
    DWORD start, stop;
    
    int i;
    int str[MAX_SIZE];
    srand((unsigned)100*time(NULL));
    for(i = 0; i < MAX_SIZE; ++i)
    {
        str[i] = rand()%MAX_SIZE;
    }
    
    start = GetTickCount();
    // recyle(str ,MAX_SIZE);
    //bubble_sort3(str, MAX_SIZE);
    //bubble_sort1(str, MAX_SIZE);
    //bubble_sort2(str, MAX_SIZE);
    stop = GetTickCount();
    printf("difference:%d\n",stop-start);
    /* t1 = time(NULL);
    printf("t1:%d\n",t1);
    t2 = time(NULL);
    printf("t2:%d\n",t2);
    printf("difference:%d\n",t2-t1); */
    for(i = 0; i < MAX_SIZE; i++)
    {
         printf("%d\n", *(str + i));
    }
}