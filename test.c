#include <stdio.h>

int main(){
	int empty;
	int drink;
	int i1;

	while(empty!=0){
	scanf("%d",&empty);
	drink=0;
	do{
		i1=empty/3;
		empty%=3;
		//printf("%d %d\n",i1,empty);
		drink+=i1;
		empty+=i1;
	}while(empty/3!=0);
	if(empty==2)
		drink++;
	printf("%d\n",drink);
	}
	return 0;
}
