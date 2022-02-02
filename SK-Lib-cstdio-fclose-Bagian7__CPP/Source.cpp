#pragma warning(disable:4996)

#include <cstdio>
#include <conio.h>
#include <errno.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    FILE* fp;

    rename("file.txt", "newfile.txt");
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        perror("Error: ");
        return (-1);
    }

    fclose(fp);

    _getch();
    return (0);
}