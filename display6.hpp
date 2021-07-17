#include "primitives.hpp"
#include  "text.hpp"
//#include "house7.hpp"
//#include "house.hpp"
//#include "tree.hpp"
//#include "man.hpp"
//#include "display2.hpp"
//#include<GL/glut.h>
void man2() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);
	lefthand3();

//right leg
rightleg();

//LEFT LEg
leftleg();


//head
head();

//right hand
righthand();

//eyes
eyes();
}

void mydisplay6()
{
glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
sky();
ground();
back();
grass1();
tree();
idle1();
//flower();
man2();
/*switch(count) {
	case 1: cloud7(165,281,"I have made a statue of"," Guru Dronacharya,, ","I believe the statue is real");break;
	case 2: cloud7(165,281,"and Guru Dronacharaya is ","watching and inspiring me ","everyday. ");break;
	case 3: cloud7(165,281,"to become one of the  "," best archer!"," ");break;
	case 4: cloud7(165,281,"I will start practising ","archery everyday. "," ");break;
}*/
//cloud7(165,281,"I have made a statue of"," Guru Dronacharya,, ","I believe the statue is real");
//cloud7(165,281,"and Guru Dronacharaya is ","watching and inspiring me ","everyday. ");
//cloud7(165,281,"to become one of the  "," best archer!"," ");
//cloud7(165,281,"I will start practising ","archery everyday. "," ");
//sea();
house1();
glRasterPos2f(40,300);
	for(j=0;j<strlen(str21);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str21[j]);
		//printf("%c",str21[j]);
	}
	glEnd();
//glutKeyboardFunc(keys3);
glFlush();
}


