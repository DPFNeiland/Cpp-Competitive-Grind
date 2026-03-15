#include <stdio.h>

int angulo(int G){
	int angulo=G;
  	while(G<360)
	{
    	G=G+angulo; 
  	}
 	if(G==360)
	{
    	return G;
  	} else
	{
  		printf("N\n");
  		return 0;
  	}
} 

int main() {

  int A, B, R, G;

  scanf("%d%d%d%d",&A,&B,&R,&G);

	if( A < R*2 || B < R*2){
		printf("N\n");
		return 0;
	}
	
  if(angulo(G)==360){
    printf("S\n");
    return 0;
  }
}
