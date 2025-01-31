template <typename T1,typename T2>
#include <stdio.h>
class Box{
public:
	T1 x;
	T2 y;
	Box(T1 x, T2 y) :x(x), y(y){}

	T1 Min() {
		if (x < y) {
			return x;
		}
		else {
			return y;
		}
	}

};
int main() {
	Box<int, int> b1(10, 20);
	printf("Min:%d", b1.Min());
	return 0;
}