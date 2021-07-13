//#include "primitives.hpp"
//#include "house8.hpp"
void man3() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-90,100,-30,100);
	//left hand
lefthand();

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
void stud0(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	student1();
}
void stud11(){
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-250,320,-250,320);
	student1();
	
}
void stud22(){
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-350,400,-350,400);
	student1();
	
}
void drona8(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-170,330,-180,305);
	drona1();
}
void mydisplay8()
{
glClear(GL_COLOR_BUFFER_BIT);
sky();
cloud();
ground();
back();
grass1();
stud22();
stud11();
stud0();
house();
man3();
drona8();
glRasterPos2f(200,-180);
	for(j=0;j<strlen(str23);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str23[j]);
	}
	glEnd();
//glutKeyboardFunc(keys8);
glFlush();
}

