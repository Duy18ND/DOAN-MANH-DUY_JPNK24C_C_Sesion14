#include<stdio.h>
#include<string.h>
int main(){
	//gan gia tri cho 1 chuoi bat ky va in chuoi ky tu cach nhau 1 dau cach
	
	char string_1[] = {"Doan Manh Duy"};
	printf("Ky tu cua chuoi la : ");
	for(int i=0; i<string_1[i] != '\0'; i++){
		printf("%c",string_1[i]);
		if(string_1 != '\0'){
		printf(" ");
		}
	}
	return 0;
}
