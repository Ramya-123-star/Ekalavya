//#include "primitives.hpp"
void man1() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
	lefthand1();
	billu();
	arrowback();
	//lefthand();

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

void mydisplay7()
{
glClear(GL_COLOR_BUFFER_BIT);

sky();
ground();
back();
grass1();
tree();
idle1();
man1();
arrow();
//sea()
		
house1();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str22);j++)
   {
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str22[j]);
   }
	glEnd();
//glutKeyboardFunc(keys7);
glFlush();
}
