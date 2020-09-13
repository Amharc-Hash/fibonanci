#include<stdio.h>
main()
{
    int a;
    long n0 = 0, n1 = 1, ans;
    scanf("%ld", &a);
    for (int i = 0; i < a; i++)
    {
        ans = n0 + n1;
        n0 = n1;
        n1 = ans;
        printf("%ld,", ans);
    }
    printf("\nSum is : %ld", n0 + n1);
    return 0;
}