 #include <stdio.h>
  void isEvenNumber( int m, int a, int b){
  		int t= m%2;
		if (t==0){
			printf("0");
			}else {
				printf("1");
				}
		
 	printf("\nso chan giua %d va %d la:",a,b);
	 
	for (int i=a;i<b;i++){
	  if (i % 2==0){
	  	printf("\t%d",i);
		  }
	 }
	}  

int main(){
 int m,a,b,l;
    printf("nhap vao so m: ");
    scanf("%d",&m);
printf("nhap vao so a: ");
    scanf("%d",&a);
printf("nhap vao so b: ");
    scanf("%d",&b);
    
    isEvenNumber(m,a,b);

	}

 
