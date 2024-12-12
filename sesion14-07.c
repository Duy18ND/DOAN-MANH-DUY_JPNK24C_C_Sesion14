#include <stdio.h>
#include <ctype.h> 

int main() {
    char chuoi[1000];
    int i, chu_cai = 0, number = 0, dac_biet = 0; 
    printf("Nhap mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    for(i = 0; chuoi[i] != '\0'; i++) {
        if(isalpha(chuoi[i])) {
            chu_cai++;
        }
        else if(isdigit(chuoi[i])) {
            number++;
        }
        else if(!isspace(chuoi[i])) {
          dac_biet++;
        }
    }
    printf("So ký tu la chu cai: %d\n", chu_cai);
    printf("So ký tu la chu so: %d\n", number);
    printf("So ký tu dac biet: %d\n", dac_biet);

    return 0;
}

