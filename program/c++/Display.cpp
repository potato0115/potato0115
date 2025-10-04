#include <iostream>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
    initgraph(640, 480);

    IMAGE img;
    loadimage(&img, _T("C:\path\to\example.jpg"), 100, 100);

    putimage(0, 0, &img);

    setbkcolor(RGB(5, 14, 57));
    cleardevice(); // 清空屏幕并填充背景色

    circle(320, 240, 100); // 绘制圆形

    getch(); // 等待用户按键
    closegraph(); // 关闭图形环境

    cout << "Hello, World!" << endl;
    return 0;
}

