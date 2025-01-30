#include "Enemy.h"
int main() {
	Enemy* enemy = new Enemy;
	enemy->Move();
	enemy->Atack();
	enemy->Remove();
	return 0;
}