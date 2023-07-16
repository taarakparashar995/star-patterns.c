//(7/16/2023)
// Author: Taarak Parashar

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input;
    int m = 1;
    printf("ENTER NUMBER :");
    scanf("%d", &input);

    // 1.down left hollow half triangle :
    // for (int i = input; i>=1; i--)
    //  {
    //      for (int j = 1; j <=i; j++)
    //      {
    //           if (i==j||j==1||i==input)
    //           {
    //             printf("*");
    //           }
    //           else{
    //          printf(" ");
    //           }
    //      }
    //      printf("\n");
    //  }

    // 2.down left half triangle
    //     for (int i = input; i>=1; i--)
    //      {
    //          for (int j = 1; j <=i; j++)
    //          {
    //              printf("* ");
    //          }
    //          printf("\n");
    //      }

    // 3.right hollow half triangle:
    //    for (int i = input; i >=1; i--)
    //     {
    //         for (int j =1; j <=i-1; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 1; k <=m; k++)
    //         {
    //            if(k==1 || k==m || m==input)
    //         printf("*");
    //         else
    //         printf(" ");
    //         }
    //         printf("\n");
    //         m++;
    //     }

    // 4.right half triangle:
    //    for (int i = input; i >=1; i--)
    //     {
    //         for (int j =1; j <=i-1; j++)
    //         {
    //             printf(" ");
    //         }
    //         for (int k = 1; k <=m; k++)
    //         {
    //             printf("*");
    //         }
    //         printf("\n");
    //         m++;
    //     }

    // 5.right triangle hollow:
    //     for (int i = 1; i <=input; i++)
    //      {
    //          for (int j = 1; j <=i; j++)
    //          {
    //              if (j==1||i==input||i==j)
    //              {
    //                   printf("*");
    //              }
    //              else{
    //                  printf(" ");
    //              }
    //         }
    //         printf("\n");
    //     }

    // 6.mirror hollow rhombus:
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= input; k++)
    //     {
    //         if (i == 1 || i == input || k == 1 || k == input)
    //         {
    //             printf("*");
    //         }
    //         else
    //             printf(" ");
    //     }
    //     printf("\n");
    // }

    // 7.mirror rhombus:
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= input; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 8.hollow rhombus:
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = i; j < input; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= input; k++)
    //     {
    //             if(i==1 || i==input || k==1 || k==input)
    //         printf("*");
    //         else
    //         printf(" ");
    //     }
    //     printf("\n");
    // }

    // 9.rhombus:
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = i; j < input; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= input; k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    // 10.hollow square with cross:
    // for (int i =1 ; i <=input; i++)
    // {
    //     for (int j = 1; j <=input; j++)
    //     {
    //         if (i==1||i==input||j==1||j==input)
    //         {
    //            printf("*");
    //         }
    //         else if (i==j||i+j==input+1)
    //         {
    //             printf("*");
    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // 11.hollow square:
    // for (int i =1 ; i <=input; i++)
    // {
    //     for (int j = 1; j <=input; j++)
    //     {
    //         if (i==1||i==input||j==1||j==input)
    //         {
    //            printf("*");
    //         }
    //         else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    // 12.left half triangle
    //    for (int i = 1; i <=input; i++)
    //     {
    //         for (int j = 1; j <=i; j++)
    //         {
    //             printf("* ");
    //         }
    //         printf("\n");
    //     }

    // 13.square/rectangle:
    //  for (int i = 1; i <=input; i++)
    //  {
    //      for (int j = 1; j <=input; j++)
    //      {
    //          printf(" *");
    //      }
    //      printf("\n");
    //  }

    // 14.full triangle/pyramid:
    //  for (int i = input; i >=1 ; i--)
    //  {
    //    for (int j = 1; j <i; j++)
    //    {
    //     printf(" ");
    //    }
    //    for (int k = 1; k <=m ; k++)
    //    {
    //      printf("* ");
    //    }
    //   printf("\n");
    //   m++;
    //  }

    // 15. full triangle hollow:
    // for (int i = input; i >= 1; i--)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for (int k = 1; k <= m; k++)
    //     {
    //         if (k == 1 || m == input || k == m)
    //         {
    //             printf(" *");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    //     m++;
    // }

    // 16. downward full triangle:
    // for (int i = 1; i <= input; i++)
    // {

    //     for (int j = 1; j <= input; j++)
    //     {
    //         if (i > j)
    //         {
    //             printf(" ");
    //         }
    //         else
    //         {
    //             printf("* ");
    //         }
    //     }
    //     printf("\n");
    // }

    // 17. downward hollow full triangle:
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = 1; j <= input; j++)
    //     {
    //         if (i > j)
    //         {
    //             printf(" ");
    //         }
    //     }
    //     for (int k = input; k >= m; k--)
    //     {
    //         if (k == m || i == 1 || k == input)
    //         {
    //             printf("* ");
    //         }
    //         else
    //         {
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    //     m++;
    // }

    // 18. right arrow:
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for (int i = input-1; i >=1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 19.left arrow:
    // for (int i = input-1; i >=1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for (int i = 1; i <= input; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    // 20.+ pattern:
    // for (int i = 1; i <= input; i++)
    // {
    //     if (i == (input / 2) + 1)
    //     {
    //         for (int j = 1; j <= input; j++)
    //         {
    //             printf("+");
    //         }
    //     }
    //    else{
    //     for (int j = 1; j <= input/2; j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("+");
    //    }
    //    printf("\n");
    // }

    //21. x pattern:
    // for (int i =1; i <=input; i++)
    // {
    //     for (int j = 1; j <=input; j++)
    //     {
    //       if (i==j||i+j==input+1)
    //       {
    //         printf("*");
    //       }
    //       else{
    //         printf(" ");
    //       }
    //     }
    //     printf("\n");
    // }
    

    return 0;
}
