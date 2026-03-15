#include<stdio.h>

int main (){
	
	int N, K, c, aux=0, j, pilhas=0, resultado=0;
	
	scanf("%d%d",&N,&K);
	
	int v[N], maior[K], copia[N];
	
	for( c = 0 ; c < N; c++) 
	{
		scanf("%d",&v[c]);
	}


	for(j = 0; j < N; j++)
		for(c = 0; c < N-1; c++ )
		{
			if( v[c]>v[c+1])
			{
				aux = v[c+1];
				v[c+1] = v[c];
				v[c]=aux;
			}
		}

	for( j = 0; j < N; j++)
	{

		for( c = N; c > 0; c--)
		{
			
	
			maior[K-j]=v[N-j];
				if(maior[K-1]=v[N-1])
				{
					maior[K-2]=v[N-3];
				}
		}
	}
	
	
	for(c = 0; c < maior[j]; c++) 
	{
		pilhas++;
	}
	
	
	for(c=0; c < K; c++)
	{
		while(v[c]<maior[0])
		{
			resultado++;
			v[c]++;
		}
	}
	
	printf("%d\n",resultado);

	return 0;
}
