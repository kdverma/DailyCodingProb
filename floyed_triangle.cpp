#include <iostream>

int _main_2()
{
    int rows,num = 1;
    printf("how many rows\n");
    scanf("%d",&rows);

    for(int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }

        printf("\n");
    }
    return 0;
}