#include <stdio.h>
void nhapmang(int ary[],int n){
	for (int i=0;i<n;i++){
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
}
void uniqueArry(int ary[], int n){
	 for (int i = 1; i < n; i++)
 for (int j = 0; j < i; j++)
 {
  if (ary[i] == ary[j])
  {
   for (int k = i; k < n; k++) 
   ary[k] = ary[k + 1];
   n--;
   i--;
  }
 }
	printf("\nmang sau khi xoa la:\n");
	for (int i = 0; i <n; i++) 
	{
		printf(" %d ", ary[i]);
	}
	
}


int main(){
	int ary[1000],n;
	do{
	
	printf("nhap phan so phan tu mang:");
	scanf("%d",&n);
     }while(n<=0);
     nhapmang(ary,n);
     uniqueArry(ary,n);
 
}

