//Dot.h

#ifndef _DOT_H
#define _DOT_H
#include "InitWindow.h"

const GLfloat REAL_X=2.0/WIN_WIDTH;
const GLfloat REAL_Y=2.0/WIN_HEIGHT;

class Dot
{
private:
	int x,y;//the position of the Dot

public:
	Dot():x(0),y(0){};
	Dot(int in_x, int in_y):x(in_x),y(in_y){};
	
	virtual void SetXY(int in_x, int in_y)
	{
		x = in_x;
		y = in_y;
	}
	virtual void GetXY(int &out_x, int &out_y)
	{
		out_x = x;
		out_y = y;
	}
	virtual void Draw();
	virtual void Draw(int in_x, int in_y);
};

#endif
