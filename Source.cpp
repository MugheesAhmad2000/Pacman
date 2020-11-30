#include<cstdlib>
#include<windows.h>
#include<iostream>
#include<conio.h>
#include<time.h>
#include "Header.h"
using namespace std;

void load( int arr[])
{
	
	
for(int i = 0; i <= 100; i+=2)
{
	system("cls");
	cout << "The Game Is Loading(" << i<< "%)";
}

Sleep(1000);
}
int main()
{
	int arr[100];
	load(arr);
	srand(time(0));
	gotoxy(1000, 1000);

	int x = 100;
	int y = 30;
	char c;
	myRect(0, 0, 10000, 10000, 0, 0, 0);
	 myline(98, 30, 1000, 30, 200);
	 myline(1000, 30, 1000, 500, 200);
	 myline(98, 30, 98, 500, 200);
	 myline(1000, 500, 98, 500, 200);
	myline(299, 30, 299, 130, 200);
	myline(799, 30, 799, 130, 200);
	myline(299, 400, 299, 500, 200);
	myline(799, 400, 799, 500, 200);
	myline(274, 220, 324, 220, 200);
	myline(274, 310, 324, 310, 200);
	myline(774, 220, 824, 220, 200);
	myline(774, 310, 824, 310, 200);
	myline(409, 130, 699, 130, 200);
	myline(409, 265, 699, 265, 200);
	myline(409, 400, 699, 400, 200);
	myline(198, 105, 198, 415, 200);
	myline(899, 105, 899, 415, 200);
	int m1x = 900, m1y = 400;
	int m2x = 920, m2y = 30;
	int x1 = 409, y1 = 70;
	myEllipse(x1, y1 + 5, x1 + 15, y1 + 20, 34, 139, 34, 34, 139, 34);
	int x2 = 409 + 140, y2 = 70;
	myEllipse(x2, y2 + 5, x2 + 15, y2 + 20, 34, 139, 34, 34, 139, 34);
	int x3 = 409 + 280, y3 = 70;
	myEllipse(x3, y3 + 5, x3 + 15, y3 + 20, 34, 139, 34, 34, 139, 34);
	int x4 = 409, y4 = 450;
	myEllipse(x4, y4 + 5, x4 + 15, y4 + 20, 34, 139, 34, 34, 139, 34);
	int x5 = 409 + 140, y5 = 450;
	myEllipse(x5, y5 + 5, x5 + 15, y5 + 20, 34, 139, 34, 34, 139, 34);
	int x6 = 409 + 280, y6 = 450;
	myEllipse(x6, y6 + 5, x6 + 15, y6 + 20, 34, 139, 34, 34, 139, 34);
	int x7 = 409, y7 = 220;
	myEllipse(x7, y7 + 5, x7 + 15, y7 + 20, 34, 139, 34, 34, 139, 34);
	int x8 = 409 + 140, y8 = 220;
	myEllipse(x8, y8 + 5, x8 + 15, y8 + 20, 34, 139, 34, 34, 139, 34);
	int x9 = 409 + 280, y9 = 220;
	myEllipse(x9, y9 + 5, x9 + 15, y9 + 20, 34, 139, 34, 34, 139, 34);
	int x10 = 409, y10 = 310;
	myEllipse(x10, y10 + 5, x10 + 15, y10 + 20, 34, 139, 34, 34, 139, 34);
	int x11 = 409 + 140, y11 = 310;
	myEllipse(x11, y11 + 5, x11 + 15, y11 + 20, 34, 139, 34, 34, 139, 34);
	int x12 = 409 + 280, y12 = 310;
	myEllipse(x12, y12 + 5, x12 + 15, y12 + 20, 34, 139, 34, 34, 139, 34);
	int s = 1;



	for (int i = 0; i < 1000; i++)
	{
		while (0.1)
		{
			myEllipse(x, y + 20, x + 60, y + 80, 255, 0, 0, 0, 0, 255);
			c = _getch();
			myEllipse(x, y + 20, x + 60, y + 80, 0, 0, 0, 0, 0, 0);
				if (c == 72)
				{
					if (y > 20)
						y = y - 10;

				}
				else if (c == 77)
				{
					if (x < 937)
					{
						x = x + 10;
					}	
					
				}
				else if (c == 75)
				{
					if (x > 100)

						x = x - 10;
				}
				else if (c == 80)
				{
					if (y < 415)
						y = y + 10;
				}
		
				if(x==409 && y==75)
				{
					s++;
				}
			    if (x == 409+140 && y == 75)
				{
					s++;
				}
				if (x == 409+280 && y == 75)
			    {
						s++;
			    }
				if (x == 409 && y == 455)
				{
							s++;
				}
				if (x == 409+140 && y == 455)
				{
					s++;
				}
                if (x == 409+280 && y == 455)
				{
					s++;
				}
			    if (x == 409 && y == 225)
				{
					s++;
				}
				if (x == 409+140 && y == 225)
				{
					s++;
				}
				if (x == 409+280 && y == 225)
				{
					s++;
				}
				if (x == 409 && y == 315)
				{
					s++;
				}
			    if (x == 409+140 && y == 315)
				{
					s++;
				}
		        if (x == 409+280 && y == 315)
				{
					s++;
				}
				

	
		
			myEllipse(m1x, m1y + 20, m1x + 60, m1y + 80, 255, 215, 0, 255, 215, 0);
			Sleep(50);
			myEllipse(m1x, m1y + 20, m1x + 60, m1y + 80, 0, 0, 0, 0, 0, 0);
			myEllipse(m2x, m2y + 20, m2x + 60, m2y + 80, 178, 34, 34, 178, 34, 34);
			Sleep(50);
			myEllipse(m2x, m2y + 20, m2x + 60, m2y + 80, 0, 0, 0, 0, 0, 0);
			




			int rand_mov1 = rand() % 4 + 1;
			{
				if (rand_mov1 == 1)
				{
					if (m1y > 50)
					{
						m1y = m1y - 20;
					}

				}
				else if (rand_mov1 == 2)
				{
					if (m1x < 920)
					{
						m1x = m1x + 20;
					}
				}
				else if (rand_mov1 == 3)
				{
					if (m1x > 100)
					{
						m1x = m1x - 20;
					}
				}
				else if (rand_mov1 == 4)
				{
					if (m1y < 400)
					{
						m1y = m1y + 20;
					}
				}
				int rand_mov = rand() % 4 + 1;
				{
					if (rand_mov == 1)
					{
						if (m2y > 50)
						{
							m2y = m2y - 20;
						}

					}
					else if (rand_mov == 2)
					{
						if (m2x < 920)
						{
							m2x = m2x + 20;
						}
					}
					else if (rand_mov == 3)
					{
						if (m2x > 100)
						{
							m2x = m2x - 20;
						}
					}
					else if (rand_mov == 4)
					{
						if (m2y < 400)
						{
							m2y = m2y + 20;
						}
					}
				}

			}
		}



		if (x == m1x && y == m1y)
		{
			system("cls");
			cout << "You Lost the game";
			break;
		}
		else if (x == m2x && y == m2y)
		{
			system("cls");
			cout << "You Lost the game";
			break;
		}

		system("pause");

		return 0;

	}
	if(s>0)
	{
		cout << "You Win";
	}
}

