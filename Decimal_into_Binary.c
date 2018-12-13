#include<stdio.h>
int main() {
	
	int n, i = 1, j, binno=0;

    printf("Enter a decimal number to convert: ");
    scanf("%d",&n);

    for(j=n; j>0; j=j/2) {
        binno = binno+(n%2)*i;
        i = i*10;
        n = n/2;
    }
     
    printf("\nThe Binary of the number is %d\n", binno);
	
	return 0;
}
