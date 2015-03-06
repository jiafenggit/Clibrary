#include <iostream>
#include "GA.h"
#include <stdio.h>

using namespace std;
/*******************************************************************
                         GA demo
			求函数y=x*sin(10*pai*x)+2.0的最大值
			编码：浮点数,1位
			初始群体数：50
			变异概率：0.8
			进化代数：100
			取值范围：[0,4]
			变异步长：0.004
			注：因为是单数浮点数编码，所以未使用基因重组函数

**********************************************************************/

int main()
{
	
	GenEngine genEngine(50,0.8,0.8,1,100,0,4);
	genEngine.OnStartGenAlg();

	
	getchar();
	

}
