#include <stdio.h>
#include <iostream>
#include<queue>
using namespace std;

void Perfect_Number()
{
    for (int i = 2; i < 13195; i++)
    {
        int sum = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }

    }
}

void swap(int& x, int& y)
{
    int t = x;
    x = y;
    y = t;
}

void Arrpop()
{
    queue<int> q;
    q.push(1);
    
}

void arr(char* str, char* str2 )
{
    char* p = str;
    char* n = str2;
    printf("%c\n", *p);
    printf("%c\n", *n);
    p++;
    n++;
    printf("%c\n", *p);
    printf("%c\n", *n);
    
    printf("%c\n", *str);
    str++;
    printf("%c\n", *str);
    str+=3;

    printf("p = %c || str = %c\n", *p,*str);
}


int main() {

    //Perfect_Number(); // ¿ÏÀü¼ö

    char str[] = "soojebi";
    char str2[] = "je";
    arr(str, str2);



    /*int x = 11;
    int y = 19;
    swap(x, y);
    printf("%d, %d", x, y);*/

    /*int a = 10, b = 5;
    int* p1 = &a;
    int* p2 = &b;
    int** pp = &p1;

    *pp = p2;
    **pp *= 10;

    cout << **pp << *p1 << *p2;*/

    return 0;
}