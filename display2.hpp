//#include "student.hpp"
//#include "primitives.hpp"
#include "display6.hpp"
#include "drona.hpp"
#include "ekalavya1.hpp"
#include  "text.hpp"
void myinit2(void)
{
	glClearColor(0,0.5,0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	gluOrtho2D(0,700,0,700);
	glMatrixMode(GL_MODELVIEW);
}
/* keys2(unsigned char key,int x,int y)
{
	if(key=='A')
                                             
	glutDisplayFunc(mydisplay6);
	//myinit2();
	//glutMainLoop();                                                                                                                              
}*/
void drona7(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	drona1();
}

void mydisplay3()  
{
	cloud7(260,260,"Hello World!"," ");
	float i;
glClear(GL_COLOR_BUFFER_BIT);

sky();
cloud();
ground();
back();
house();
drona7();

grass1();
stud2();
stud1();
stud();
ekalavya();
//man();
glRasterPos2f(250,50);
	for(j=0;j<strlen(str17);j++)
	{
		glColor3f(1,0,0);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str17[j]);
	}
	//glutPostRedisplay();
	glEnd();
//glutKeyboardFunc(key1);
glFlush();
}
