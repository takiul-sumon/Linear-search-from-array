#include <stdio.h>

int main()
{
    int ar[5] = {1, 9, 3, 6, 7};
    int i, temp, size, b; //b= searching number s
    scanf("%d", &b);
    scanf("%d", &size);


    for (i = 0; i < size; i++)
    {
        if (ar[i] == b)                                          //checking the searching number from array
        {
            printf("%d  found in the array\n",b);
            break;
        }

    }
    if(i==size)
    {
        printf("%d  not found in the array",b);
    }



    return 0;
}
