#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int a, int b);

int commonChild( char *X, char *Y, int m, int n )
{
	//int mat[m+1][n+1];
	int **mat = (int **)malloc(sizeof(int *)*n +1);
	
	int i, j;
	for (i=0; i <=n; i++)
		mat[i] = (int *)malloc(sizeof(int)*m +1);

	for (i=0; i<=m; i++)
	{
		for (j=0; j<=n; j++)
		{
			if (i == 0 || j == 0)
				mat[i][j] = 0;

			else if (X[i-1] == Y[j-1])
				mat[i][j] = mat[i-1][j-1] + 1;

			else
				mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
		}
	}
	
	// imprimir a matriz	
	#if 0
	for (i = 0; i <=m; i++)
	{
		for (j = 0; j <=n; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
	#endif

	return mat[m][n];
}

int max(int a, int b)
{
	return (a > b)? a : b;
}

int main()
{
	//char X[] = "AGGTAB";
	//char Y[] = "GXTXAYB";

	//char X[6000], Y[6000];
	char *X, *Y;
	X = (char *)malloc(sizeof(char)*5001);
	Y = (char *)malloc(sizeof(char)*5001);

	scanf("%s",X);
	scanf("%s",Y);

	int m = strlen(X);
	int n = strlen(Y);

	//printf("m = %d e n = %d", m, n);

	printf("%d\n", commonChild( X, Y, m, n ) );
	free(X);
	free(Y);

	return 0;
}
