//#include<easyX.h>
//#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
//#include <conio.h>
//int main()
//{
//	initgraph(640, 480);	// ������ͼ���ڣ���СΪ 640x480 ����
//	circle(200, 200, 100);	// ��Բ��Բ��(200, 200)���뾶 100
//	_getch();				// �����������
//	closegraph();			// �رջ�ͼ����
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//�ͼ��������
//	//���´���Ƭ�δ���һ���ߴ�Ϊ 640x480 �Ļ�ͼ���ڣ�
//	initgraph(640, 480);//640Ϊ��480Ϊ��
//	////���㺯��
//	//for (int i = 0; i < +640; i++)
//	//{
//	//	putpixel(i, 200, GREEN);//һ����Ŀ����Ϊһ������
//	//}
//
//	//Ĭ�ϱ���Ϊ��ɫ��
//	setfillcolor(RGB(243,126,133));//RGB����������������ڻ�ͼ���ҵ��������
//    //���ޱ߿�������Σ���������ȷ��
//	solidrectangle(100, 100, 300, 200);//ǰ�����������Ͻǵ����꣬�������������½ǵ�����
//     
//	getchar();//��ס���ڣ��ȴ��Ӽ�������һ���ַ���
//	closegraph();//�ر�ͼ�δ���
//	return 0;
//
//
//}
//#include<stdio.h>
//#include<easyX.h>
//#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
//#include <conio.h>

//Ϳɫ
//int main()
//{
//	initgraph(640, 480);
//	setfillcolor(RGB(99, 220, 245));
//	//���´���Ƭ�����û�����ʽΪ��� 10 ���ص�ʵ�ߣ����Ӵ�Ϊб�棺
//	setlinestyle(PS_SOLID | PS_JOIN_BEVEL, 5);
//	setlinecolor(RGB(200, 300, 54));
//	fillcircle(100, 200, 100);//���һ������뾶
//	_getch();
//	closegraph();
//	return 0;
//}

//��Բ

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
	//	Sleep(1000);//˯�ߺ���SΪ��д�������ӳ������ߣ�����Ҫinclude<window.h>ͷ�ļ�
	//	//�������˯�߿��Է�ֹ���һ��ԲҲ�������
	//}



	//initgraph(640,450);
	////�������
	////1.��������ַ���
	//char a[] = "����Ҫ���뵽��Ļ�ϵĶ���";//������s����
	////ָ����λ�����  outtextxy

	//outtextxy(100, 50, a);//��������غ����ı���ȥ������������T�ʼ�Ԥ��3
	//	//a����ָ��ָ��
	//_getch();
	//closegraph();
 //   return 0;
//}

//int main()
//{


	//��ʽһ
	//initgraph(640, 420);
	//char a[] = "��ʦ";
	//settextcolor(GREEN);
	//settextstyle(50, 50, "����");//����ĳ���Ϊ50��Ϊ����
	//outtextxy(100, 50, a);
	//_getch();
	//closegraph();
	//return 0;



	//��ʽ��
	//outtextxy(100, 50, "������ַ���")
//}

//ͼƬ���
//��ʽһ��
//1.����������������ȥ�����ڴ棩����Ҫ��ͼƬװ������
//2.��ͼ������ͼƬ�����Ͻǵ����������ͼ
//#include<stdio.h>
//#include<easyx.h>
//#include <graphics.h>		// ����ͼ�ο�ͷ�ļ�
//#include <conio.h>
//int main()
//{
//	//��ʽһ��ͼ̫���ˣ��޷�����װ��
//	initgraph(640, 450);
//		IMAGE img;//�������img�����Ա���ͼƬ
//		//loadimage(&img, "123.jpg");//��ͼƬװ��img
//		//��ʽ��
//		loadimage(&img, "123.jpg", 500, 300);//�����߶�
//		putimage(100, 50, &img);//��ָ��λ����ͼ��x,y,������ַ
//		_getch();
//		closegraph();
//		return 0;
//}


//���Ĳ�������¼�,���һ�
//����������Ϣ����������������Ϣ
//2.��ȡ������Ϣ
//�ж�����������£������������λ�û�һ��Բ//���ϵļ�����ѭ��
//int main()
//{
//	initgraph(640, 640);
//	ExMessage msg;//ExMessage��ʾ�����Ϣ�������
//	for (;;)//��ѭ��
//	{
//		//msgΪ�����Ϣ����
//		msg = getmessage(EM_MOUSE);//��ȡ�����Ϣ
//		if (msg.message == WM_LBUTTONDOWN)//�ж�����Ƿ���,���Բ鿴����ȥѰ���ұߵĺ���
//		{
//			fillcircle(msg.x, msg.y, 10);//�������ĵ����ģ�������msgȥ������x,y����
//		}
//	}
//	_getch();
//	closegraph();
//	return 0;
//}

//////�ǿ�
//////�ó���ʵ���˶�ά�ǿյĶ�̬Ч����
////
////// ���뻷����Visual C++ 6.0~2019��EasyX_20210730
////// https://easyx.cn
//////
////#include <graphics.h>
////#include <time.h>
////#include <conio.h>
////
////#define MAXSTAR 200	// ��������
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
////// ��ʼ������
////void InitStar(int i)
////{
////	star[i].x = 0;
////	star[i].y = rand() % 480;
////	star[i].step = (rand() % 5000) / 1000.0 + 1;
////	star[i].color = (int)(star[i].step * 255 / 6.0 + 0.5);	// �ٶ�Խ�죬��ɫԽ��
////	star[i].color = RGB(star[i].color, star[i].color, star[i].color);
////}
////
////// �ƶ�����
////void MoveStar(int i)
////{
////	// ����ԭ��������
////	putpixel((int)star[i].x, star[i].y, 0);
////
////	// ������λ��
////	star[i].x += star[i].step;
////	if (star[i].x > 640)	InitStar(i);
////
////	// ��������
////	putpixel((int)star[i].x, star[i].y, star[i].color);
////}
////
////// ������
////int main()
////{
////	srand((unsigned)time(NULL));	// �������
////	initgraph(640, 480);			// ������ͼ����
////
////	// ��ʼ����������
////	for (int i = 0; i < MAXSTAR; i++)
////	{
////		InitStar(i);
////		star[i].x = rand() % 640;
////	}
////
////	// �����ǿգ���������˳�
////	while (!_kbhit())
////	{
////		for (int i = 0; i < MAXSTAR; i++)
////			MoveStar(i);
////		Sleep(20);
////	}
////
////	closegraph();					// �رջ�ͼ����
////	return 0;
////}
//////����ʾ����������� https ://codebus.cn
//
//
//
////�ַ���
////�ó���ʾ���˳����Ļ�ͼ�����������������塢���ߵȡ�
//
//// ���뻷����Visual C++ 6.0~2019��EasyX_20210730
//// https://easyx.cn
////
//#include <graphics.h>
//#include <time.h>
//#include <conio.h>
//
//int main()
//{
//	// �����������
//	srand((unsigned)time(NULL));
//
//	// ��ʼ��ͼ��ģʽ
//	initgraph(640, 480);
//
//	int  x, y;
//	char c;
//
//	settextstyle(16, 8, _T("Courier"));	// ��������
//
//	// ������ɫ
//	settextcolor(GREEN);
//	setlinecolor(BLACK);
//
//	for (int i = 0; i <= 479; i++)
//	{
//		// �����λ����ʾ���������ĸ
//		for (int j = 0; j < 3; j++)
//		{
//			x = (rand() % 80) * 8;
//			y = (rand() % 20) * 24;
//			c = (rand() % 26) + 65;
//			outtextxy(x, y, c);
//		}
//
//		// ���߲���һ��������
//		line(0, i, 639, i);
//
//		Sleep(10);					// ��ʱ
//		if (i >= 479)	i = -1;
//		if (_kbhit())	break;		// ��������˳�
//	}
//
//	// �ر�ͼ��ģʽ
//	closegraph();
//	return 0;
//}
////����ʾ����������� https ://codebus.cn


//�ʺ�
// ���뻷����Visual C++ 6.0~2019��EasyX_20210730
// https://easyx.cn
//
//#include <graphics.h>
//#include <conio.h>
//
//int main()
//{
//	// ������ͼ����
//	initgraph(640, 480);
//
//	// ����������(ͨ������������)
//	float H = 190;		// ɫ��
//	float S = 1;		// ���Ͷ�
//	float L = 0.7f;		// ����
//	for (int y = 0; y < 480; y++)
//	{
//		L += 0.0005f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, 639, y);
//	}
//
//	// ���ʺ�(ͨ��ɫ��������)
//	H = 0;
//	S = 1;
//	L = 0.5f;
//	setlinestyle(PS_SOLID, 2);		// �����߿�Ϊ 2
//	for (int r = 400; r > 344; r--)
//	{
//		H += 5;
//		setlinecolor(HSLtoRGB(H, S, L));
//		circle(500, 480, r);
//	}
//
//	// ��������˳�
//	_getch();
//	closegraph();
//	return 0;
//}