#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<string.h>
#include<iso646.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main () {

	float notas[2][4], total;
	int a;
	int nt;
	
	for(a=0; a<2; a++){
		printf("\n Informe as notas do %do aluno:\n",a+1);
		total=0;
		for(nt=0; nt<3; nt++) {
				printf(" Digite a %da nota: ", nt+1);
				scanf("%f",&notas[a][nt]);
				total += notas[a][nt];
		}
		notas[a][3]=total/3;
	}
	printf("\n\n");
	
	for(a=0; a<2; a++){
		printf("\n\n Notas do %do aluno: \n",a+1);
		for(nt=0; nt<4; nt++) {
				if(nt<3)
					printf("%da nota: %.2f\n", nt+1, notas[a][nt]);
				else
					printf("Media %.2f", notas[a][nt]);
		}
	}

	getch();
	return 0;
}

