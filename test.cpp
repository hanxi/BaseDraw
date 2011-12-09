//test.cpp

#include "Line.h"

void display(void)
{
	Dot dot(5,5);
	Line line(0,0,5,5);	
	/* clear all pixels */
	glClear (GL_COLOR_BUFFER_BIT);

	glClearColor(0.0,0.0,0.0,0.0);
	//将窗口清为黑色
	glClear(GL_COLOR_BUFFER_BIT);
	//将颜色缓存清为glClearColor命令所设置的颜色
	//即背景色
	//glColor3f (1.0, 100.0, 100.0);
	//glBegin(GL_POINTS);

	//dot.Draw();
	//dot.Draw(250,200);
	dot.Draw(0,0);
	line.Draw(0,0,300,300);
	dot.Draw(0,239);

	glFlush ();
}

int main(int argc, char** argv)
{
	InitWindow(argc, argv);
	Show(display);
	return 0; /* ANSI C requires main to return int. */
}
