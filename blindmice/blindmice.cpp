// blindmice.cpp: 定义控制台应用程序的入口点。
// blindmice -- 使用3个自定义函数生成4行输出。

#include "stdafx.h"
#include <iostream>

void blindmice(void);
void see(void);
int main()
{
	using namespace std;
	blindmice();
	blindmice();
	see();
	see();
    return 0;
}

void blindmice(void)
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void see(void)
{
	using namespace std;
	cout << "See how they run" << endl;
}