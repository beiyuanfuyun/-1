//#include<easyX.h>
//#include <graphics.h>		// 引用图形库头文件
//#include <conio.h>
//int main()
//{
//	initgraph(640, 480);	// 创建绘图窗口，大小为 640x480 像素
//	circle(200, 200, 100);	// 画圆，圆心(200, 200)，半径 100
//	_getch();				// 按任意键继续
//	closegraph();			// 关闭绘图窗口
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//和计算机讲话
//	//以下代码片段创建一个尺寸为 640x480 的绘图窗口：
//	initgraph(640, 480);//640为宽；480为高
//	////画点函数
//	//for (int i = 0; i < +640; i++)
//	//{
//	//	putpixel(i, 200, GREEN);//一个点的宽与高为一个像素
//	//}
//
//	//默认背景为白色，
//	setfillcolor(RGB(243,126,133));//RGB代表红绿蓝，可以在画图里找到相关数据
//    //画无边框的填充矩形，有两个点确定
//	solidrectangle(100, 100, 300, 200);//前两个代表左上角的坐标，后两个代表右下角的坐标
//     
//	getchar();//卡住窗口，等待从键盘输入一个字符串
//	closegraph();//关闭图形窗口
//	return 0;
//
//
//}
//#include<stdio.h>
//#include<easyX.h>
//#include <graphics.h>		// 引用图形库头文件
//#include <conio.h>

//涂色
//int main()
//{
//	initgraph(640, 480);
//	setfillcolor(RGB(99, 220, 245));
//	//以下代码片段设置画线样式为宽度 10 像素的实线，连接处为斜面：
//	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 5);
//	setlinecolor(RGB(200, 300, 54));
//	fillcircle(100, 200, 100);//最后一个代表半径
//	_getch();
//	closegraph();
//	return 0;
//}

//动圆

//int main()
//{
	//initgraph(640,450);
	//setfillcolor(RGB(99, 220, 245));
	//
	//setlinecolor(RGB(100, 200, 100));
	//setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 5);
	//for (int i = 0; i <=20; i += 1)
	//{
	//	int a = 1 + i * 10;
	//	cleardevice();
	//	fillcircle(200, a , 40);
	//	fillcircle(400, a, 40);
	//	Sleep(1000);//睡眠函数S为大写，不是延迟是休眠，好像要include<window.h>头文件
	//	//先清除后睡眠可以防止最后一个圆也被清除了
	//}



	//initgraph(640,450);
	////文字输出
	////1.保存输出字符串
	//char a[] = "是我要输入到屏幕上的东西";//保存在s里面
	////指定的位置输出  outtextxy

	//outtextxy(100, 50, a);//会出现重载函数的报错，去除方法——见T笔记预科3
	//	//a代表指针指向
	//_getch();
	//closegraph();
 //   return 0;
//}

//int main()
//{


	//方式一
	//initgraph(640, 420);
	//char a[] = "老师";
	//settextcolor(GREEN);
	//settextstyle(50, 50, "黑体");//字体的长宽都为50，为黑体
	//outtextxy(100, 50, a);
	//_getch();
	//closegraph();
	//return 0;



	//方式二
	//outtextxy(100, 50, "输入的字符串")
//}

//图片输出
//方式一：
//1.定义容器（给容器去开辟内存），需要把图片装进容器
//2.贴图，根据图片的左上角的坐标进行贴图
//#include<stdio.h>
//#include<easyx.h>
//#include <graphics.h>		// 引用图形库头文件
//#include <conio.h>
//int main()
//{
//	//方式一：图太大了，无法完整装入
//	initgraph(640, 450);
//		IMAGE img;//定义变量img，可以保存图片
//		//loadimage(&img, "123.jpg");//把图片装入img
//		//方式二
//		loadimage(&img, "123.jpg", 500, 300);//宽度与高度
//		putimage(100, 50, &img);//在指定位置贴图，x,y,容器地址
//		_getch();
//		closegraph();
//		return 0;
//}


//第四步：鼠标事件,左右击
//定义鼠标的消息变量，保存鼠标的消息
//2.获取鼠标的消息
//判读鼠标的左键按下，根据鼠标点击的位置画一个圆//不断的监听与循环
//int main()
//{
//	initgraph(640, 640);
//	ExMessage msg;//ExMessage表示鼠标消息这个类型
//	for (;;)//死循环
//	{
//		//msg为鼠标消息变量
//		msg = getmessage(EM_MOUSE);//获取鼠标消息
//		if (msg.message == WM_LBUTTONDOWN)//判断鼠标是否按下,可以查看定义去寻找右边的函数
//		{
//			fillcircle(msg.x, msg.y, 10);//根据鼠标的点在哪，可以用msg去找鼠标的x,y坐标
//		}
//	}
//	_getch();
//	closegraph();
//	return 0;
//}

//////星空
//////该程序实现了二维星空的动态效果。
////
////// 编译环境：Visual C++ 6.0~2019，EasyX_20210730
////// https://easyx.cn
//////
////#include <graphics.h>
////#include <time.h>
////#include <conio.h>
////
////#define MAXSTAR 200	// 星星总数
////
////struct STAR
////{
////	double	x;
////	int		y;
////	double	step;
////	int		color;
////};
////
////STAR star[MAXSTAR];
////
////// 初始化星星
////void InitStar(int i)
////{
////	star[i].x = 0;
////	star[i].y = rand() % 480;
////	star[i].step = (rand() % 5000) / 1000.0 + 1;
////	star[i].color = (int)(star[i].step * 255 / 6.0 + 0.5);	// 速度越快，颜色越亮
////	star[i].color = RGB(star[i].color, star[i].color, star[i].color);
////}
////
////// 移动星星
////void MoveStar(int i)
////{
////	// 擦掉原来的星星
////	putpixel((int)star[i].x, star[i].y, 0);
////
////	// 计算新位置
////	star[i].x += star[i].step;
////	if (star[i].x > 640)	InitStar(i);
////
////	// 画新星星
////	putpixel((int)star[i].x, star[i].y, star[i].color);
////}
////
////// 主函数
////int main()
////{
////	srand((unsigned)time(NULL));	// 随机种子
////	initgraph(640, 480);			// 创建绘图窗口
////
////	// 初始化所有星星
////	for (int i = 0; i < MAXSTAR; i++)
////	{
////		InitStar(i);
////		star[i].x = rand() % 640;
////	}
////
////	// 绘制星空，按任意键退出
////	while (!_kbhit())
////	{
////		for (int i = 0; i < MAXSTAR; i++)
////			MoveStar(i);
////		Sleep(20);
////	}
////
////	closegraph();					// 关闭绘图窗口
////	return 0;
////}
//////更多示例程序，请访问 https ://codebus.cn
//
//
//
////字符阵
////该程序示范了常见的绘图操作，包括设置字体、画线等。
//
//// 编译环境：Visual C++ 6.0~2019，EasyX_20210730
//// https://easyx.cn
////
//#include <graphics.h>
//#include <time.h>
//#include <conio.h>
//
//int main()
//{
//	// 设置随机种子
//	srand((unsigned)time(NULL));
//
//	// 初始化图形模式
//	initgraph(640, 480);
//
//	int  x, y;
//	char c;
//
//	settextstyle(16, 8, _T("Courier"));	// 设置字体
//
//	// 设置颜色
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//
//	for (int i = 0; i <= 479; i++)
//	{
//		// 在随机位置显示三个随机字母
//		for (int j = 0; j < 3; j++)
//		{
//			x = (rand() % 80) * 8;
//			y = (rand() % 20) * 24;
//			c = (rand() % 26) + 65;
//			outtextxy(x, y, c);
//		}
//
//		// 画线擦掉一个像素行
//		line(0, i, 639, i);
//
//		Sleep(10);					// 延时
//		if (i >= 479)	i = -1;
//		if (_kbhit())	break;		// 按任意键退出
//	}
//
//	// 关闭图形模式
//	closegraph();
//	return 0;
//}
////更多示例程序，请访问 https ://codebus.cn


//彩虹
// 编译环境：Visual C++ 6.0~2019，EasyX_20210730
// https://easyx.cn
//
//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	// 创建绘图窗口
//	initgraph(640, 480);
//
//	// 画渐变的天空(通过亮度逐渐增加)
//	float H = 190;		// 色相
//	float S = 1;		// 饱和度
//	float L = 0.7f;		// 亮度
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// 画彩虹(通过色相逐渐增加)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// 按任意键退出
//	_getch();
//	closegraph();
//	return 0;
//}