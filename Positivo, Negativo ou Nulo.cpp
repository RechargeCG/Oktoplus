#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	scanf("%d",&x);
	if(x == 0){
		printf("nulo");
	} else if(x>0){
		printf("positivo");
	} else{
		printf("negativo");
	}

	return 0;
}
