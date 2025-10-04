#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<cmath>
#include<windows.h>
#include<bitset>
#include<conio.h>
#include<ctime>
#include<stdlib.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
int main() {
    int choice;

    loop:
    std::cout << "是" << std::endl;
    std::Sleep(50);
    std::cout << endl;
    std::Sleep(50);

    std::cin >> choice;

    switch (choice) {
        case 1:
            goto loop;
        case 2:
            gameOver();
            return 0;
        default:
            std::cout << "请重输入数字" << std::endl;
            std::Sleep(400);
            std::cout << "G";
            std::Sleep(50);
            std::cout << "a";
            std::Sleep(50);
            std::cout << "m";
            std::Sleep(50);
            std::cout << "e";
            std::Sleep(50);
            std::cout << " ";
            std::Sleep(50);
            std::cout << "O";
            std::Sleep(50);
            std::cout << "v";
            std::Sleep(50);
            std::cout << "e";
            std::Sleep(50);
            std::cout << "r";
            std::Sleep(50);
            std::cout << "!" << endl;
            std::Sleep(50);

            std::cout << "游戏已经结束," << std::endl;
            std::Sleep(50);
            std::cout << "程序停止." << endl;
            std::Sleep(50);
            std::cout << "." << endl;
            std::Sleep(50);
            std::cout << "." << endl;
            return 0;
    }

    return 0;
}

void gameOver() {
    std::cout << "G";
    std::Sleep(50);
    std::cout << "a";
    std::Sleep(50);
    std::cout << "m";
    std::Sleep(50);
    std::cout << "e";
    std::Sleep(50);
    std::cout << " ";
    std::Sleep(50);
    std::cout << "O";
    std::Sleep(50);
    std::cout << "v";
    std::Sleep(50);
    std::cout << "e";
    std::Sleep(50);
    std::cout << "r";
    std::Sleep(50);
    std::cout << "!" << endl;
    std::Sleep(50);

    std::cout << "游戏已经结束," << std::endl;
    std::Sleep(50);
    std::cout << "程序停止." << endl;
    std::Sleep(50);
    std::cout << "." << endl;
    std::Sleep(50);
    std::cout << "." << endl;
    std::Sleep(50);
}

