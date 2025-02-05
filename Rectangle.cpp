#include "Rectangle.h"
#include "CharSet.h"

void Rectangle::Size() {
	answer = wide * height;
}

void Rectangle::Draw() {
	CharSet::SetConsoleOutputToUTF8();
	printf("area = %d\n", answer);
}
