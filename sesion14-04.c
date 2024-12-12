#include<stdio.h>
#include<string.h>
int main(){
	//gan cho 1 chuoi bat ky -- yeu cau nguoi dung nhap 1 ky tu -- tinh so lan lap lai cua ky tu
char c[] = "Doan Manh Duy";
printf("Chuoi hien tai la : %s\n ",c);
char result;
int sodem =0;
	printf("Moi ban nhap mot ky tu ");
	scanf("%c",&result);
	for(int i=0; c[i] != '\0'; i++){
		if(result == c[i]){
			sodem++;
		}
	}
	printf("So lan lap lai ky tu %c la %d",result,sodem);
	
	return 0;
}
