#include <stdio.h>
#include <conio.h>
#include <string.h>

void CapitalA()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            printf(" ");
        }
        printf("*");

        if (i == 5)
        {
            for (int j = 0; j < 11; j++)
            {
                printf("*");
            }
            printf("\n");
            continue;
        }
        for (int j = 0; j < i * 2; j++)
        {
            printf(" ");
        }
        if (i > 0)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}

void CapitalB()
{
    int height = 10;
    int width = 8;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((j == 0) ||
                (j == width - 1 && (i != 0 && i != height / 2 && i != height - 1)) ||
                ((i == 0 || i == height / 2 || i == height - 1) && j != width - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalC()
{

    int height = 10;
    int width = 8;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((i == 0 && j != 0) ||
                (i == height - 1 && j != 0) ||
                (j == 0 && i != 0 && i != height - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalD()
{
    int height = 7;
    int width = 5;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((j == 0) ||
                (i == 0 && j != width - 1) ||
                (i == height - 1 && j != width - 1) ||
                (j == width - 1 && i != 0 && i != height - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalE()
{
    for (int i = 0; i < 9; i++)
    {
        printf("*");
        if (i == 0)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }
        else if (i == 4)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }
        else if (i == 8)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalF()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*");
        if (i == 0)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }
        else if (i == 5)
        {
            for (int j = 0; j < 5; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalG()
{
    int height = 10;
    int width = 10;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((i == 0 && j != 0) ||
                (i == height - 1 && j != 0) ||
                (j == 0 && i != 0 && i != height - 1) ||
                (j == width - 1 && i >= height / 2 && i != height - 1) ||
                (i == height / 2 && j >= width / 2) ||
                (i == height / 2 + 1 && j == width / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalH()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*");
        if (i == 5)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }

        else if (i < 10)
        {
            for (int j = 0; j < 9; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalI()
{
    printf("********************\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    printf("*******************");
    printf("\n\n");
}
void CapitalJ()
{
    int height = 10;
    int width = 8;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((i == 0) ||
                (j == width / 2) ||
                (i == height - 1 && j < width / 2) ||
                (i >= height - 2 && j == 0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalK()
{
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (j == 0 || (i + j == (n - 1) / 2 && i < n / 2) || (i - j == (n - 1) / 2 && i >= n / 2))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalL()
{
    for (int i = 0; i < 10; i++)
    {
        printf("*");
        if (i == 9)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalM()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j == 1 || j == 10 || (i <= 5 && i == j) || ((i == 2 && j == 9) || (i == 3 && j == 8) || (i == 4 && j == 7 || (i == 5 && j == 6))))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalN()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j == 1 || j == 10 || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalO()
{
    int height = 7;
    int width = 7;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((i == 0 && j != 0 && j != width - 1) ||
                (i == height - 1 && j != 0 && j != width - 1) ||
                (j == 0 && i != 0 && i != height - 1) ||
                (j == width - 1 && i != 0 && i != height - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalP()
{
    for (int i = 0; i < 12; i++)
    {
        printf("*");
        if (i == 0)
        {
            printf("*********");
        }
        else if (i < 6)
        {
            for (int j = 0; j < 8; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 6)
        {
            printf("*********");
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalQ()
{
    int height = 7;
    int width = 7;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if ((i == 0 && j != 0 && j != width - 1) ||
                (i == height - 1 && j != 0 && j != width - 1) ||
                (j == 0 && i != 0 && i != height - 1) ||
                (j == width - 1 && i != 0 && i != height - 1) ||
                (i == j && i > height / 2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalR()
{
    for (int i = 0; i < 15; i++)
    {
        printf("*");
        if (i == 0)
        {
            printf("**********");
        }
        else if (i < 6)
        {
            for (int j = 0; j < 9; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 6)
        {
            printf("**********");
        }
        if (i == 7)
        {
            for (int j = 0; j < 1; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 8)
        {
            for (int j = 0; j < 2; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 9)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 10)
        {
            for (int j = 0; j < 4; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 11)
        {
            for (int j = 0; j < 5; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 12)
        {
            for (int j = 0; j < 7; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 13)
        {
            for (int j = 0; j < 8; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        if (i == 14)
        {
            for (int j = 0; j < 9; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalS()
{
    for (int i = 0; i < 11; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (i == 0 || i == 5 || i == 10 || (i < 5 && j == 0) || (i > 5 && j == 10))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalT()
{
    printf("************\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    printf("\n\n");
}
void CapitalU()
{
    int height = 7;
    int width = 5;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            if (((j == 0 || j == width - 1) && i != height - 1) ||
                (i == height - 1 && (j != 0 && j != width - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalV()
{

    int rows = 15;

    int k, l, mid;

    if (rows % 2 == 0)
    {
        printf("Please enter an odd number of rows.");
    }

    mid = (rows + 1) / 2;

    for (k = 1; k <= mid; k++)
    {
        for (l = 1; l <= rows; l++)
        {
            if (l == k || l == rows - k + 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalW()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j <= 10; j++)
        {
            if (j == 1 || j == 10 || (i >= 6 && i == j) || ((i == 9 && j == 2) || (i == 8 && j == 3) || (i == 7 && j == 4) || (i == 6 && j == 5)))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    printf("\n\n");
}
void CapitalX()
{
    int size = 10;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (i == j || j == (size - i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalY()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 1 && (j == 1 || j == 9) || (i == 2 && (j == 2 || j == 8)) || (i == 3 && (j == 3 || j == 7) || (i == 4 && (j == 4 || j == 6) || (i >= 5 && j == 5))))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
}
void CapitalZ()
{
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i == 0 || i == n - 1 || j == n - 1 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
void printLetter(char letter)
{
    switch (letter)
    {
    case 'A':
        CapitalA();
        break;
    case 'B':
        CapitalB();
        break;
    case 'C':
        CapitalC();
        break;
    case 'D':
        CapitalD();
        break;
    case 'E':
        CapitalE();
        break;
    case 'F':
        CapitalF();
        break;
    case 'G':
        CapitalG();
        break;
    case 'H':
        CapitalH();
        break;
    case 'I':
        CapitalI();
        break;
    case 'J':
        CapitalJ();
        break;
    case 'K':
        CapitalK();
        break;
    case 'L':
        CapitalL();
        break;
    case 'M':
        CapitalM();
        break;
    case 'N':
        CapitalN();
        break;
    case 'O':
        CapitalO();
        break;
    case 'P':
        CapitalP();
        break;
    case 'Q':
        CapitalQ();
        break;
    case 'R':
        CapitalR();
        break;
    case 'S':
        CapitalS();
        break;
    case 'T':
        CapitalT();
        break;
    case 'U':
        CapitalU();
        break;
    case 'V':
        CapitalV();
        break;
    case 'W':
        CapitalW();
        break;
    case 'X':
        CapitalX();
        break;
    case 'Y':
        CapitalY();
        break;
    case 'Z':
        CapitalZ();
        break;
    default:
        printf("Invalid character: %c\n", letter);
    }
}
int main()
{
    char name[100];
    printf("Enter your name in capital letters: ");
    scanf("%s", name);

    for (int i = 0; i < strlen(name); i++)
    {
        printLetter(name[i]);
    }

    return 0;
}