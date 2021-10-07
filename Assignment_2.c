#include<stdio.h>
#include<stdlib.h>
void roman(unsigned long long n){
	int numbers[]={1,4,5,9,10,40,50,90,100,400,500,900,1000,
					4000,5000,9000,10000,50000,90000,100000,500000,1000000};
	char *roman[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M",
					"M|V|","|V|","M|X|","|X|","|L|","|X||C|","|C|","|D|","|M|"};
	int i;
	int B; //bases number

	while(n){
		//finding the base number
		for(i=22;i>=0;i--){
			if(n>=numbers[i]){
				B=numbers[i];
				break;
			}
		}
		//conversion
		unsigned long long q=n/B;
		n-=q*B;
		while(q>0){
			printf("%s",roman[i]);
			q--;
		}
	}

}

void binary(unsigned long long n){
	int i,k=0;
	unsigned long long r;
	int *arr=(int*)malloc(1000000*sizeof(int));
	while(n){
		r=n%2;
		arr[k]=r;
		k++;
		n=n/2;
	}
	for(i=k-1;i>=0;i--)
		printf("%d",arr[i]);
}

void unary(unsigned long long n){
	int i;
	for(i=1;i<=n;i++)
		printf("1");
}

int main(){
	printf("Enter the Arabic number: ");
	unsigned long long n;
	scanf("%llu",&n);

	printf("\nThe Roman Numeral is: ");
	roman(n);

	printf("\nThe Binary Form is: ");
	binary(n);

	printf("\nThe Unary Form is: ");
	unary(n);

	return 0;
}
