#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;         // Con tr? file
    char userInput[100]; // Bi?n lýu chu?i ngý?i dùng nh?p vào

    // M? file bt01.txt ? ch? ð? ghi thêm (append)
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1; // K?t thúc chýõng tr?nh n?u l?i x?y ra
    }

    // Yêu c?u ngý?i dùng nh?p chu?i c?n ghi thêm
    printf("Nhap chuoi can ghi them vao file: ");
    fgets(userInput, sizeof(userInput), stdin);

    // Ghi chu?i vào file
    fputs(userInput, file);

    // Thông báo ghi thành công
    printf("Da ghi chuoi vao file bt01.txt.\n");

    // Ðóng file
    fclose(file);

    return 0;
}

