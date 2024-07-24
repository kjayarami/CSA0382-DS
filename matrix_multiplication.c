#include<stdio.h>
int main(){
	int i,j,k,m,n,p,q;
	printf("Enter the values of m and n : ");
	scanf("%d %d",&m,&n);
	printf("Enter the values of p and q : ");
	scanf("%d %d",&p,&q);
	int data1[m][n];
	int data2[p][q];
	if(n==p){
	printf(" Enter the values into first matrix : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&data1[i][j]);
		}
	}
	printf(" Enter the values into second matrix : \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&data2[i][j]);
		}
	}
	printf(" first matrix : \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf(" %d ",data1[i][j]);
		}
		printf("\n");
	}
	printf(" second matrix : \n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf(" %d ",data2[i][j]);
		}
		printf("\n");
	}
	int data3[m][q];
for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
            	data3[i][j] = 0;
                for (k = 0; k < n; k++) {
                    data3[i][j] += data1[i][k] * data2[k][j];
                }
            }
        }
        printf(" Matrix Multiplication is...\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf(" %d ",data3[i][j]);
            }
            printf("\n");
        }
	}else
	{	
		printf("Matrix multiplication is not possible..");
	}
	}
