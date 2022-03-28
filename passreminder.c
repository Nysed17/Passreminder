#include <stdio.h>
#include <stdlib.h>
int i;

int main(){

	FILE *fl;
	char sito[20];
	char user[20];
	char passw[20];

	if ((fl=fopen("passrem.txt","wt")) == NULL){
		printf("Error!");
		exit(1);
	}
	
	printf("Nome del Sito:");
	scanf("%s", sito);
	printf("Username usato:");
	scanf("%s", user);
	printf("Password:");
	scanf("%s", passw);
	fflush(stdin);
	fprintf(fl,"sito: %s\nuser: %s\npassword: %s\n", sito, user, passw);
	fclose(fl);

	return 0;
}
