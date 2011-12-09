//Line.h

#ifndef _LINE_H
#define _LINE_H
#include "Dot.h"

class Line
{
private:
	int x1, y1, 
	    x2, y2; //the two vertex of the Line (x1,y1) (x2,y2)
	Dot dota,dotb;

public:
	Line():x1(0),y1(0),x2(0),y2(0)
	{
		dota.SetXY(x1,y1);
		dotb.SetXY(x2,y2);
	}
	Line(int in_x1, int in_y1, int in_x2, int in_y2):x1(in_x1),y1(in_y1),x2(in_x2),y2(in_y2)
	{
		dota.SetXY(x1,y1);
		dotb.SetXY(x2,y2);
	}
	
	void SetXY(int in_x1, int in_y1, int in_x2, int in_y2)
	{
		x1 = in_x1;
		y1 = in_y1;
		x2 = in_x2;
		y2 = in_y2;
		dota.SetXY(x1,y1);
		dotb.SetXY(x2,y2);
	}
	void GetXY(int &out_x1, int &out_y1, int &out_x2, int &out_y2)
	{
		out_x1 = x1;
		out_y1 = y1;
		out_x2 = x2;
		out_y2 = y2;
	}
	void Draw();
	void Draw(int in_x1, int in_y1, int in_x2, int in_y2);
};
#endif
