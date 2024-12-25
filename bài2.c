#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;         // Con tr? file
    char firstChar;     // Bi?n lýu k? t? ð?u tiên

    // M? file bt01.txt ð? ð?c
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1; // K?t thúc chýõng tr?nh n?u l?i x?y ra
    }

    // Ð?c k? t? ð?u tiên t? file
    firstChar = fgetc(file);

    // Ki?m tra n?u file r?ng
    if (firstChar == EOF) {
        printf("File bt01.txt rong.\n");
    } else {
        printf("Ky tu dau tien trong file: '%c'\n", firstChar);
    }

    // Ðóng file
    fclose(file);

    return 0;
}

