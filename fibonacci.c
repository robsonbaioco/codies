#include <stdio.h>
#include <windows.h>

float fib(float n){
	if (n==1) return 1;
	else
	if (n==2) return 1;
	else return fib(n-1) + fib(n-2);
}

int main(void){
	float m, n;
	scanf("%f", &n);
	system ("cls");
	m=n;
	n=1;
    while(n<m+1){
	printf(" \n %.f ------------- termo %.0f", fib(n), n);
	n++;
    }
	return 0;
}
