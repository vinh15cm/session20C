#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;         // Con tr? file
    char userInput[100]; // Bi?n l�u chu?i ng�?i d�ng nh?p v�o

    // M? file bt01.txt ? ch? �? ghi th�m (append)
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1; // K?t th�c ch��ng tr?nh n?u l?i x?y ra
    }

    // Y�u c?u ng�?i d�ng nh?p chu?i c?n ghi th�m
    printf("Nhap chuoi can ghi them vao file: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Ghi chu?i v�o file
    fputs(userInput, file);

    // Th�ng b�o ghi th�nh c�ng
    printf("Da ghi chuoi vao file bt01.txt.\n");

    // ��ng file
    fclose(file);

    return 0;
}

