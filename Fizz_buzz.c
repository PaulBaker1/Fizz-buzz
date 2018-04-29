#include <stdio.h>
#include <windows.h>
int main(void)
{
    for (int x = 1; x <= 100; x ++)
    {
        if (x % 15 == 0)
        {
            puts("FizzBuzz!");
        }
        else if (x % 3 == 0)
        {
            puts("Fizz");
        }
        else if (x % 5 == 0)
        {
            puts("Buzz");
        }
        else
        {
            printf("%d\n", x);
        }
        Sleep(100);
    }
    return 0;
}
