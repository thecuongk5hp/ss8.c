#include<stdio.h>
int main() {
	int n,i,add_value,add_index;
	printf("nhap n");
	 scanf("%d", &n);
	int a[n+1];
	for (i=0;i<n;i++) {
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	printf("nhap so can chen va vi tri chen");
	 scanf("%d%d",&add_value, &add_index);
	for (i=n;i>=0;i--){
		a[i] = a[i-1];
		if (i==add_index)
		a[i] = add_value;
		break; 
	}
	for (i=0;i<=n;i++) printf("%d ",a[i]);
}
	
