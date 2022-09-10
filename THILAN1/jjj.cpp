#include<stdio.h>

bool kt(float n){
  
  if(n-(int)n==0){
    return true;
  }else{
    return false;
  }

}
int main(){
	int  n;
	printf("nhap n");
	scanf("%d",&n);
	if (kt(n)){
		printf("dung");
		}
	}
