#include "Enemy.h"
#include "Boss.h"
int main() {

	Enemy* enemy[3];
	for (int i = 0;i < 2;i++) {
		if (i < 1)
			enemy[i] = new Enemy;
		else
			enemy[i] = new Boss;
	}
	for (int i = 0;i < 2;i++) {
		enemy[i]->Attack();
	}
	for (int i = 0;i < 2;i++) {
		delete enemy[i];
	}
	
	return 0;
}