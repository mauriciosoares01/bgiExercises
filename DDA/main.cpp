#include <iostream>
#include <stdio.h>
#include <graphics.h>
#include <math.h>

void DDA(int X1, int Y1, int X2, int Y2)
{
	int step;
	float X, Y, Xinc, Yinc;
	step = fabs(X2 - X1);
	
	if (fabs(Y2 - Y1) > step)
		step = fabs(Y2-Y1);
	
	Xinc = (X2 - X1)/step;
	Yinc = (Y2 - Y1)/step;
	X = X1;
	Y = Y1;
	
	while(X<X2){
		putpixel(round(X),round(Y),9);
		X = X + Xinc;
		Y = Y + Yinc;
   }
}


int main(int argc, char** argv) {
	
	int x1,x2,y1,y2;
	printf("Insira o valor de x1 e pressione enter, y1 e pressione enter");
	scanf("%i",&x1);
	scanf("%i",&y1);
	printf("Insira o valor de x2 e pressione enter, y2 e pressione enter");
	scanf("%i",&x2);
	scanf("%i",&y2);
	
	initwindow(380, 380, "Reta DDA");
	DDA(x1,y1,x2,y2);
	getch();
	
	return 0;
}
