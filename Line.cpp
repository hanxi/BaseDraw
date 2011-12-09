//Line.cpp

#include "Line.h"

//the worst way to get a line
void Line::Draw(int in_x1, int in_y1, int in_x2, int in_y2)
{
	float k=(y2-y1)/(x2-x1);
	for (int x=in_x1; x<=in_x1+(in_x2-in_x1)/2; x++)
	{
		dota.SetXY(x,y1-k*(x-x1));
		dota.Draw();
	}
	for (int x=in_x2; x<=in_x2-(in_x2-in_x1)/2; x--)
	{
		dotb.SetXY(x,y1-k*(x-x1));
		dotb.Draw();
	}

}
