#include "Circle.h"
#include "CharSet.h"

void Circle::Size(){
	answer = radius * radius * 3.14f;
}

void Circle::Draw(){
	CharSet::SetConsoleOutputToUTF8();
	printf("area circle = %0.2f\n", answer);
}