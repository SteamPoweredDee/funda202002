#pragma once
#include <GL/glew.h>

class Sprite
{
private:
	float x;
	float y;
	int witdh;
	int height;
	//TODO VBO
public:
	Sprite();
	~Sprite();
	void init(float _x, float _y, int _witdh, int _height);
	void draw();
};