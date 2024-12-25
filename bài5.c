#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int numLines;
    char buffer[256];

    // M? file bt05.txt ? ch? �? ghi
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the tao file bt05.txt.\n");
        return 1;
    }

    // Nh?p s? d?ng t? ng�?i d�ng
    printf("Nhap so dong: ");
    scanf("%d", &numLines);
    getchar(); // Lo?i b? k? t? xu?ng d?ng c?n s�t trong b? �?m

    // Nh?p n?i dung t?ng d?ng v� ghi v�o file
    for (int i = 0; i < numLines; i++) {
        printf("Nhap noi dung dong thu %d: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        fprintf(file, "%s", buffer);
    }

    // ��ng file sau khi ghi
    fclose(file);

    // M? file bt05.txt ? ch? �? �?c
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt05.txt de doc.\n");
        return 1;
    }

    // �?c n?i dung t? file v� in ra m�n h?nh
    printf("\nNoi dung file bt05.txt:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // ��ng file
    fclose(file);

    return 0;
}

