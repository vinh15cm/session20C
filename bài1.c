#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;         // Con tro file
    char str[1000];     // Mang luu chuoi nguoi dung nhap

    // Mo file bt01.txt de ghi (neu file chua ton tai, no se duoc tao moi)
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the tao hoac mo file.\n");
        return 1; // Ket thuc chuong trinh neu loi xay ra
    }

    // Nhap chuoi tu nguoi dung
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);

    // Ghi chuoi vao file
    fprintf(file, "%s", str);

    // Dong file
    fclose(file);

    printf("Da ghi chuoi vao file bt01.txt thanh cong.\n");

    return 0;
}

