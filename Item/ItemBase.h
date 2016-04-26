#pragma once
#include "../Object/Object.h"


class ItemBase : public GameObject
{
public:

	//使った時の関数
	virtual void use(Vec2f _pos, Direction _direction) {};
	virtual	void update() {};
	virtual	void draw() {};

private:

};

