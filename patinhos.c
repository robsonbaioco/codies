#include <stdio.h>
#include <windows.h>

main(){
	int n, m,i,j;
	printf("Digite quantas rolinhas foram passear \n");
	scanf("%d", &n);
	system("cls");
	m=n;
	for(i=m; i>1; i--){
		printf("%d rolinhas foram passear \n", n);
		Sleep(1000);
		printf("alem das montanhas para brincar \n");
		Sleep(1000);
		printf("a mamae gritou \n");
		Sleep(1000);
		for(j=0; j<4; j++){
			printf("\a Quero café! \n");
			Sleep(500);
		}
		n--;
		if(n>1){
			
		}else{
			printf("mas só 1 rolinha voltou de la \n", n);//porque a variavel "n" se n printa? kkkk
		}
		Sleep(1500);
		system ("cls");
	}
	printf(" %d rolinha foi passear \n", n);
	Sleep(1000);
	printf("alem das montanhas para brincar \n");
	Sleep(1000);
	printf("a mamae gritou \n");
	Sleep(1000);
	for(j=0; j<4; j++){
		printf("\a Quero café! \n");
		Sleep(500);
	}
	n--;
	printf("mas nenhuma caralha voltou de laaaaa");
	Sleep(100000000);
}
