//   nhâp 1 so n tu ban phim va in ra cac so chan be hon n
#include<stdio.h>
int main(){
	int n;
	printf("Nhap 1 so nguyen duong:");
	scanf("%d",&n);
	int i;
	for(i=1;i<n;i++){
	   
	   if(i%2==0){
	   	
	   	printf("%d ",i);
	   }
	}
	return 0;
}
