#include <iostream>
#include <stdio.h>
#include <graphics.h>
#include <math.h>

void DDA(int X1, int Y1, int X2, int Y2)
{
	//printf("\nvariaveis\n");
	//printf("%d %d %d %d\n", X1, Y1,X2,Y2);
	int step;
	float X, Y, Xinc, Yinc;
	step = fabs(X2 - X1);
	
	if (fabs(Y2 - Y1) > step)
		step = fabs(Y2-Y1);
	
	//printf("step\n");
	//printf("%d\n",step);
	
	Xinc = (X2 - X1)/(float)step;
	Yinc = (Y2 - Y1)/(float)step;
	X = X1;
	Y = Y1;
	
	//printf("\nInc\n");
	//printf("%f %f\n", Xinc, Yinc);
	
	while(X<X2){
		putpixel(round(X),round(Y),9);
		X = X + Xinc;
		Y = Y + Yinc;
   }
}


int main(int argc, char** argv) {
	
	int x1,x2,y1,y2;
	printf("Insira o valor de x1 e pressione enter, y1 e pressione enter");
	scanf("%d",&x1);
	scanf("%d",&y1);
	printf("Insira o valor de x2 e pressione enter, y2 e pressione enter");
	scanf("%d",&x2);
	scanf("%d",&y2);
	
	initwindow(380, 380, "Reta DDA");
	DDA(x1,y1,x2,y2);
	getch();
	
	return 0;
}
