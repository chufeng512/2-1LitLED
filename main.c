#include <REGX52.H>

//功能：点亮P00LED灯

void main()
{
	P0 = 0xFE; //1111 1110 低电平亮
	while(1){}//死循环卡住单片机，让它不要继续往下执行
}
