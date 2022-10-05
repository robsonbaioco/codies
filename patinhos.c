#include <stdio.h>
#include <windows.h>

main(){
	int n, m,i,j;
	printf("Digite quantas vadias foram passear \n");
	scanf("%d", &n);
	system("cls");
	m=n;
	for(i=m; i>1; i--){
		printf("%d vadias foram passear \n", n);
		Sleep(1000);
		printf("alem das montanhas para brincar \n");
		Sleep(1000);
		printf("o cafetao gritou \n");
		Sleep(1000);
		for(j=0; j<4; j++){
			printf("\a Quero café! \n");
			Sleep(500);
		}
		n--;
		if(n>1){
			
		}else{

			printf("mas só 1 vadia voltou de la \n");

		}
		Sleep(1500);
		system ("cls");
	}
	printf(" %d vadia foi passear \n", n);
	Sleep(1000);
	printf("alem das montanhas para brincar \n");
	Sleep(1000);
	printf("o cafetao gritou \n");
	Sleep(1000);
	for(j=0; j<4; j++){
		printf("\a Quero café! \n");
		Sleep(500);
	}
	n--;
	printf("mas nenhuma arrombada voltou de laaaaa");
	Sleep(100000000);
}
