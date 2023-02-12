#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <stdio.h>

// 游戏逻辑模块
//定义方块结构体
typedef struct
{
    int x;
    int y;
    int shape;
    int status;
    int color;
}Block;

//1.绘制界面提示信息等
extern void printInfo();

//2.打印游戏池边框
extern void printGamePool(int x, int y);

//3.打印分数 消除一行加10分
extern void printGL(int num); //num 一次消行的行数

//4.打印方块
void printBlock(int x, int y, int shape, int status, int color);

//5.清除方块
void deleteBlock(int x, int y, int shape, int status);

//6.游戏初始化函数
extern void initGame();

//7.方块左移
void blockLeft();

//8.方块右移
void blockRight();

//9.方块加速下落
int blockDown();

//10.方块变形
void blockChange();

//11.方块落底
void blockBottom();

//12.游戏暂停
void pause();

// 产生第一个方块
void startBlock();

// 随机产生下一个方块
void randBlock();

// 拷贝方块
void copyBlock();

// 碰撞检测
int crash(int x, int y, int shape, int status);

// 保存方块
void saveBlock();

//刷新游戏区域
void updateGame();

//消行检测
void lineClear();

//消行下移
void lineDown(int line);

//游戏结束动画
void printOver();

//重新开始提示
void printFinish();

//重新开始
void againGame();

//打印开始界面
void printStart(int x, int y);

//清除开始动画
void clearStart(int x, int y);

//动画
void printAnimation();



#endif // GAME_H_INCLUDED
