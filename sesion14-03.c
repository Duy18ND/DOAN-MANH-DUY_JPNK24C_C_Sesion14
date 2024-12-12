#include<stdio.h>
#include<string.h>
int main(){
	//gan gia tri 1 chuoi bat ky va in ra chuoi dao nguoc
	char string_1[] = {"Doan Manh Duy"};
	printf("Chuoi khi chua dao nguoc la : %s\n",string_1);
	printf("Chuoi dao nguoc la :");
int result = strlen(string_1);
	for(int i=result -1 ; i >= 0; i--){
		printf("%c",string_1[i]);
	}
	
	return 0;
}
