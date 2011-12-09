//Dot.cpp

#include "Dot.h"

// 画点
void Dot::Draw()
{
	glBegin(GL_POINTS);
	glVertex2f(x*REAL_X, y*REAL_Y);
	glEnd();
}

void Dot::Draw(int in_x, int in_y)
{
	x=in_x;
	y=in_y;
	glBegin(GL_POINTS);
	glVertex2f(in_x*REAL_Y, in_y*REAL_Y);
	glEnd();
}

