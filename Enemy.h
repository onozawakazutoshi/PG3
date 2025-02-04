#pragma once
#include<Windows.h>
#include <stdlib.h>
#include<stdio.h>


class Enemy
{
public:
	//Enemy();
	//~Enemy();
	void Initializ();
	void Move();
	virtual void Attack();
	void Remove();
	void Load();

};

