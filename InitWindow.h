//InitWindow.h

#include <GL/glut.h>

#define WIN_WIDTH 640.0
#define WIN_HEIGHT 480.0

//初始化窗体
void InitWindow(int argc, char** argv);
//显示窗体
void Show(void (*display)(void));
