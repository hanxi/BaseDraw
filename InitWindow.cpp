//InitWindow.cpp

#include "InitWindow.h"
#include <cstring>
#include <assert.h>
#include <unistd.h>


//初始化窗体
void InitWindow(int argc, char** argv)
{
	char sysfile[15] = "/proc/self/exe";
	int  namelen = 256;
	char APname[256];

	memset( APname, 0, 256 );
	assert(-1 != readlink(sysfile,
	  			             APname,
				             namelen));//get the path of this file
				             
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(WIN_WIDTH,WIN_HEIGHT);
	glutInitWindowPosition(-1, -1);
	glutCreateWindow(APname);
	glClearColor(0.0, 0.0, 0.0, 0.0);//select clearing color
}
//显示窗体
void Show(void (*display)(void))
{
	glutDisplayFunc(display);
	glutMainLoop();
}
