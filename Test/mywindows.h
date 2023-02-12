#ifndef MYWINDOWS_H_INCLUDED
#define MYWINDOWS_H_INCLUDED
#include <windows.h>

// 系统调用模块
//1.获取句柄 初始化
extern void initHandle();
//2.获取光标位置
extern void setPos(int x, int y);
//3.设置文字颜色（前景色，背景色）
extern void setColor(int color);
//4.设置光标是否可见
extern void setCursorVisible(int flag);
//5.设置窗口标题
extern void setTitle(char title[40]);
//6.关闭句柄
extern void closeHandle();
#endif // MYWINDOWS_H_INCLUDED
