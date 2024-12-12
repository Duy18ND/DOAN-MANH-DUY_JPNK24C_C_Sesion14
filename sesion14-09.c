#include <stdio.h>

int main() {
    char chuoi[1000], ky_tu;
    int i, j = 0;
    printf("Nhap mot chuoi bat ky : ");
    fgets(chuoi, sizeof(chuoi), stdin);
    printf("nhap 1 ky tu can xoa trong chuoi la:  ");
    scanf("%c", &ky_tu);  
    for(i = 0; chuoi[i] != '\0'; i++) {
        if(chuoi[i] != ky_tu) {
            chuoi[j++] = chuoi[i];
        }
    }
    chuoi[j] = '\0'; 
    printf("Chuoi sau khi xoa la:  '%c': %s\n", ky_tu, chuoi);

    return 0;
}

