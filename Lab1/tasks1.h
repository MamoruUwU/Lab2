#pragma once
#include <iostream>
#include <vector>

void task_1(std::vector<int>& array_a, std::vector<int>& array_b, std::vector<int>& array_c);
void task_2(std::vector<int>& array, int t);
void task_3(std::vector<int>& array);
int lab1_visual();

namespace Useful {
	void ConsoleSize_Move(int x, int y, int w, int h);
	void LockConsoleSize(bool lock);
	void display(const std::vector<std::string>& lines, int highlight);
	bool ChekNum(std::string NumberChek);
}