#include <iostream>
#include <stdio.h>
#include <math.h>
#include <graphics.h>


void CircleSimple(int xc, int yc, int r,int c){
	
	int x,y;
	float step;
	
	
	
}


//	putpixel(round(x),round(y),c);


int main(int argc, char** argv) {
	
	int XC,YC,R,C;
	
	printf("Insira as coordenadas para o centro do círculo, em X e enter, em Y e enter:\n");
	scanf("%d",&XC);
	scanf("%d",&YC);
	printf("Insira o raio:\n");
	printf("Insira a cor, entre 0-15:\n");
	scanf("%d",&C);
	
	initwindow(620, 380, "Circulo por simetria");
	CircleSimple(XC,YC,R,C);
	getch();	

	return 0;
}
