#include<stdio.h>
#include<string.h>]
#include<ctype.h>
//khai bao va gan gia tri cho 1 chuoi -- viet chuong chuong trinh so dem trong chuoi
int main(){
char c[1000];
printf("moi ban nhap mot chuoi bat ky ");
fgets(c,sizeof(c),stdin);
int sodem =0;
for(int i =0 ;c[i] -1 != '\0' ; i++ ){
if(isalpha(c[i])){
	sodem++;
			}
		}
printf("So luong chu cai trong chuoi la : %d",sodem);
return 0;
}
