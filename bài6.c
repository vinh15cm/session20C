#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // M? file bt01.txt ð? ð?c
    sourceFile = fopen("bt01.txt", "r");
    if (sourceFile == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1;
    }

    // M? file bt06.txt ð? ghi
    destFile = fopen("bt06.txt", "w");
    if (destFile == NULL) {
        printf("Khong the tao file bt06.txt.\n");
        fclose(sourceFile);
        return 1;
    }

    // Sao chép n?i dung t? bt01.txt sang bt06.txt
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt thanh cong.\n");

    // Ðóng c? hai file
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

