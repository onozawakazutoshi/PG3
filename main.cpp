#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "CharSet.h"

int main(void) {
	CharSet::SetConsoleOutputToUTF8();
	IShape* shape[2];

	

	shape[0] = new Circle;
	shape[1] = new Rectangle;

	printf("radius = 4\nbottom = 2\nheight = 3\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Size();


	printf("\n");

	for (int i = 0; i < 2; i++)
		shape[i]->Draw();

	return 0;
}