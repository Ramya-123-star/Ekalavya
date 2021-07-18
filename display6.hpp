#include "primitives.hpp"
//#include  "text.hpp"
//#include "house7.hpp"
//#include "house.hpp"
//#include "tree.hpp"
//#include "man.hpp"
//#include "display2.hpp"
//#include<GL/glut.h>

int scene2;

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
glClear(GL_COLOR_BUFFER_BIT);
sky();
ground();
back();
grass1();
tree();
idle1();
//flower();
man2();
switch(scene2) {
	case 1: cloud7(165,281,"I have made a statue of"," Guru Dronacharya,, ","I believe the statue is real");break;
	case 2: cloud7(165,281,"and Guru Dronacharaya is ","watching and inspiring me ","everyday. ");break;
	case 3: cloud7(165,281,"to become one of the  "," best archer!"," ");break;
	case 4: cloud7(165,281,"I will start practising ","archery everyday. "," ");break;
}
//cloud7(165,281,"I have made a statue of"," Guru Dronacharya,, ","I believe the statue is real");
//cloud7(165,281,"and Guru Dronacharaya is ","watching and inspiring me ","everyday. ");
//cloud7(165,281,"to become one of the  "," best archer!"," ");
//cloud7(165,281,"I will start practising ","archery everyday. "," ");
//sea();
house1();
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);

if(scene2>4)
	drawtext(30,0,"RIGHT CLICK ON THE SCREEN AND CLICK SCENE3 TO GO TO NEXT SCENE",1);
else
	drawtext(50,0,"PRESS 'A' TO CONTINUE",1);
	glEnd();
//glutKeyboardFunc(keys3);
glFlush();
glutPostRedisplay();
}


