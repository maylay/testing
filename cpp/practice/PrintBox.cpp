#include <stdio.h>

int main(void)
{
    HorizLine();
    VertLine();
    VertLine();
    VertLine();
    VertLine();
    HorizLine();
    return 1;
}


int VertLine(void)
{
    printf("|     |");
}

int HorizLine(void)
{
    printf("-------");
}
