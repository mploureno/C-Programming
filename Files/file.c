#include <stdio.h>
 int main()
{
    char str[10];
    int year;
    FILE * fp= fopen ("file.txt", "w");
    fprintf(fp, "%s", "We are in 2012");
    fclose(fp);

    fp= fopen ("file.txt", "r");
    fscanf(fp, "%s", str);
    fclose(fp);
    printf("Read String |%s|\n", str );
    return 0;
}
