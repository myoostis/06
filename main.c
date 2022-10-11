#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer(){
	int n;
	printf("정수를 입력하세요 : ");
	scanf("%d", &n);
	
	return n;
}

int factorial(int n){
	
    int i;
    int res = 1;
	for(i=1; i<=n; i++){
		res = res*i;
	}	
	return res;	
}

int combination(int n, int r){
	return ( factorial(n) / (factorial(n-r)*factorial(r)) );
}

int main(void){
	int a, b;
	
	a = get_integer();
	b = get_integer();
	
	printf("C(%d,%d) = %d\n", a,b,combination(a,b));

	return 0;
}
