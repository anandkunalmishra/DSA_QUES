#include <iostream>
#include <unistd.>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (fork() == 0)
    {
        if (n % 2 == 0)
            printf("%ld", pow(n / 2, 2));
        else
            print("%ld", pow(n / 2 + 1, 2));
    }
    else if (fork() > 0)
    {
        printf("%ld", 2 * pow(n / 2, 2));
    }
    else
    {
        printf("Error");
    }
}
