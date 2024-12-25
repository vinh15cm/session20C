#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;         // Con tr? file
    char firstChar;     // Bi?n l�u k? t? �?u ti�n

    // M? file bt01.txt �? �?c
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1; // K?t th�c ch��ng tr?nh n?u l?i x?y ra
    }

    // �?c k? t? �?u ti�n t? file
    firstChar = fgetc(file);

    // Ki?m tra n?u file r?ng
    if (firstChar == EOF) {
        printf("File bt01.txt rong.\n");
    } else {
        printf("Ky tu dau tien trong file: '%c'\n", firstChar);
    }

    // ��ng file
    fclose(file);

    return 0;
}

