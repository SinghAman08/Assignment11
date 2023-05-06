// Write a function to print PASCAL Triangle. (TSRN)
/*  PASCAL tringle...

     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1

*/
#include <stdio.h>
void pascal(int r);
int main()
{
    int r;
    // if we enter non-five integer number as row then we need to write number of colum(r+4) in array manualy in pascal()
    printf("Enter a number as row\n");
    scanf("%d", &r);
    pascal(r);
    return 0;
}
void pascal(int r)
{
    int c = r + 4;
    // int i,j for loop
    int i, j;
    int min = 5, max = 5, odd ;
    int one = 1, array[5][9] = {0};
    for (i = 1; i <= 5; i++)
    {
        if (i % 2 != 0)
            odd = 1;
        else
            odd = 2;

        if (i > 1)
        {
            min = 5 - (i - 1);
            max = 5 + (i - 1);
        }
        for (j = 1; j <= max; j++)
        {
            if (((j >= min) && (j <= max)) && (odd % 2 != 0))
            {
                if ((i == 1) || (i == 2))
                {
                    array[i - 1][j - 1] = one;
                    printf("%d",one);
                }
                else
                {
                    if ((j == min) || (j == max))
                        array[i - 1][j - 1] = one;
                    else
                        array[i - 1][j - 1] = array[i - 2][j - 2] + array[i - 2][j];
                printf("%d", array[i - 1][j - 1]);
                }
            }
            else
            {
                printf(" ");
            }
            odd++;
        }
        printf("\n");
    }
    printf("\n\n");
}
