#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[1000];
    int i;
    printf("Nhap mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    for(i = 0; chuoi[i] != '\0'; i++) {
        if (i == 0 || chuoi[i-1] == ' ') {
            chuoi[i] = toupper(chuoi[i]);
        }
    }
    printf("Chuoi sau khi viet hoa chu dau la : %s\n", chuoi);

    return 0;
}

