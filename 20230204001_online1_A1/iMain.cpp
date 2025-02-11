#include "iGraphics.h"

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://
 int image1;
  int x,y,z=950,p=0;
   int image2;
    int image3;
	int b,d;
	int k=905;v=905;
void itakeImage(){
	image1=iLoadImage("image//hoop.png");
	image2=iLoadImage("image//cannon.png");
	image3=iLoadImage("image//basketball.png");
}


void ithrow(){
	iShowImage(z,p+800,70,70,image3);
	z=z-(rand()%50);
	if(z<=0)z=905;
}
void ithrow1(){
	iShowImage(z,p+550,70,70,image3);
	k=k-(rand()%70);
	
	if(k<=0)z=905;
}
void ithrow2(){
	iShowImage(z,p+300,70,70,image3);
	v=v-(rand()%70);
	if(v<=0)v=905;
}


void iDraw()
{
	iClear();
	//iFilledRectangle(10, 10, 100, 100);
	//iSetColor(255, 255, 255);
   
	
	iShowImage(950,550,200,200,image2);
    iShowImage(950,300,200,200,image2);
	 iShowImage(950,800,200,200,image2);
    iShowImage(z,p+920,60,60,image3);
	 iShowImage(z,p+670,60,60,image3);
	  iShowImage(z,p+440,60,60,image3);
	    iShowImage(b,d,150,150,image1);
   
}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	printf("x=%d y=%d",mx,my);
	b=mx;
	d=my;
}

void iMouse(int button, int state, int mx, int my)
{
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{

		
	}
	
	
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == '\r')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if (key == GLUT_KEY_RIGHT)
	{
				
	}
	if (key == GLUT_KEY_LEFT)
	{
		
	}
	
	if (key == GLUT_KEY_HOME)
	{
		
	}
	
}


int main()
{
	///srand((unsigned)time(NULL));
	iInitialize(1400, 1100, "Project Title");
	///updated see the documentations
	iSetTimer(25,ithrow);
	iSetTimer(150,ithrow1);
	iSetTimer(120,ithrow2);
	
	 itakeImage();
	 
	iStart();
	return 0;
}