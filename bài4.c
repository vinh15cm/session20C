#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;          // Con tr? file
    char firstLine[256]; // Bi?n lýu d?ng ð?u tiên

    // M? file bt01.txt ? ch? ð? ð?c
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1; // K?t thúc chýõng tr?nh n?u l?i x?y ra
    }

    // Ð?c d?ng ð?u tiên t? file
    if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
        printf("Dong dau tien trong file: %s", firstLine);
    } else {
        printf("File trong hoac khong co dong nao de doc.\n");
    }

    // Ðóng file
    fclose(file);

    return 0;
}

