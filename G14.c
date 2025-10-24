#include <stdio.h>

int main(void)
{
    FILE *fin  = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");
    if (!fin || !fout) return 1;

    char surname[101], name[101], patronymic[101];
    if (fscanf(fin, "%100s %100s %100s", surname, name, patronymic) != 3) {
        fclose(fin);
        fclose(fout);
        return 0;
    }
    fclose(fin);

    fprintf(fout, "Hello, %s %s!", name, surname);
    fclose(fout);
    return 0;
}