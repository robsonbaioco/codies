#include <stdio.h>
#include <windows.h>

main(){
	int n, m,i,j;
	printf("Digite quantos patinhos foram passear \n");
	scanf("%d", &n);
	system("cls");
	m=n;
	for(i=m; i>1; i--){
		printf("%d patinhos foram passear \n", n);
		Sleep(1000);
		printf("alem das montanhas para brincar \n");
		Sleep(1000);
		printf("a mamae gritou \n");
		Sleep(1000);
		for(j=0; j<4; j++){
			printf("\a Qua! \n");
			Sleep(500);
		}
		n--;
		if(n>1){
			
		}else{
			printf("mas 1 patinho voltou de la \n", n);
		}
		Sleep(1500);
		system ("cls");
	}
	printf(" %d patinho foi passear \n", n);
	Sleep(1000);
	printf("alem das montanhas para brincar \n");
	Sleep(1000);
	printf("a mamae gritou \n");
	Sleep(1000);
	for(j=0; j<4; j++){
		printf("\a Qua! \n");
		Sleep(500);
	}
	n--;
	printf("mas nenhum patinho voltou de la");
	Sleep(100000000);
}
