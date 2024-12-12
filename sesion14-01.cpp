#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("Moi ban nhap mot chuoi ky tu bat ky : ");
	fgets(c,1000,stdin);
	printf("Chuoi ban vua nhap la : %s",c);
	c[strlen(c) -1] = '\0';
	printf("Do dai cua chuoi la : %d",strlen(c));
	return 0;
}
