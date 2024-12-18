#include <stdio.h>

int main () 
{
    int n,p,max=0,count_modus=1,res=0;
	
    scanf("%d", &n);
	int arr[11]  = {0};

	for(int i = 0; i < n; i++) {
		scanf("%d", &p);
		arr[p] = arr[p] + 1;
	}
	for(int i = 1; i <= 10; i++){
		if(arr[i] > max){
			max = arr[i];
			res = i;
		}
	}
	for(int i = 1; i <= 10; i++){
		if(arr[i] == max && i != res){
			count_modus++;
		}
	}

	if(count_modus > 1){
		printf("-1");
	} else{
		printf("%d\n", res);
		printf("%d", n -max);
	}

	return 0;

}