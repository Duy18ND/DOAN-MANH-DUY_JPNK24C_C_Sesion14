#include<stdio.h>
#include<string.h>]
#include<ctype.h>//isalnum
//khai bao va gan gia tri cho 1 chuoi -- viet chuong chuong trinh so dem trong chuoi
int main(){
char c[1000];
printf("moi ban nhap mot chuoi bat ky ");
fgets(c,sizeof(c),stdin);
c[strlen(c)-1 ] = '\0';
int result = strlen(c);
int sodem =0;
int check =0;
for(int i =0 ; i <  result ; i++ ){
if(isalnum(c[i])){
	if(check == 0){
		sodem++;
		check = 1;
		}
	}else{
			check = 0;
		}	
}
printf("So luong trong chuoi la : %d",sodem);
return 0;
}
