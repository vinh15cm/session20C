#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;          // Con tr? file
    char firstLine[256]; // Bi?n l�u d?ng �?u ti�n

    // M? file bt01.txt ? ch? �? �?c
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1; // K?t th�c ch��ng tr?nh n?u l?i x?y ra
    }

    // �?c d?ng �?u ti�n t? file
    if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
        printf("Dong dau tien trong file: %s", firstLine);
    } else {
        printf("File trong hoac khong co dong nao de doc.\n");
    }

    // ��ng file
    fclose(file);

    return 0;
}

