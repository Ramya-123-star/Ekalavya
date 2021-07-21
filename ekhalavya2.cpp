#include<Windows.h>
#include<GL/glut.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<iostream>
#include<MMSystem.h>
#include<string.h>
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"



int start1=0,start2=0,start3=0,start4=0,start5=0,start6=0,start7=0,start8=0;
unsigned int intro;
float i=0.0,f,a,s,c,b,z,d,g,t,o,l;
int s2,s3;
int initial=0;

//#include "display1.hpp"
//#include "primitives.hpp"
#include "display2.hpp"
#include "display8.hpp"
#include "display7.hpp"
#include "display9.hpp"
#include "display10.hpp"
#include "display11.hpp"
#include "bld.hpp"



void mydisplay();
void applyBackgroundIntroduction();
//void mydisplay2();
void mydisplay3();
//void mydisplay4();
//void mydisplay5();

void mydisplay6();
void mydisplay7();
void mydisplay8();

void mydisplay()
{
	 glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	
	applyBackgroundIntroduction();
	if(initial==0){
		glutPostRedisplay();
		initial=1;
	}
	glFlush();
	
}
	void loadIntroduction(){
    glGenTextures(1, &intro);
    glBindTexture(GL_TEXTURE_2D, intro);
    // set the bg1 wrapping/filtering options (on the currently bound bg1 object)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load and generate the bg1
    int width, height, nrChannels;
    unsigned char *data = stbi_load("front2.png", &width, &height, &nrChannels, STBI_rgb_alpha);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
        //glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        printf("Failed to load bg1");
    }
    stbi_image_free(data);
}

void applyBackgroundIntroduction(){
	
    glEnable(GL_TEXTURE_2D);
    glColor3f(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, intro);
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glTexCoord2f(0, 1);
    glVertex2f(0, 500);
	glTexCoord2f(0, 0);    
    glVertex2f(500, 500);
    glTexCoord2f(1, 0);
    glVertex2f(500, 0);
    glTexCoord2f(1, 1);
	glEnd();
    glDisable(GL_TEXTURE_2D);
}

void myinit(void)

{
	glClearColor(0.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,500,0,500);
	glMatrixMode(GL_MODELVIEW);
}
void myinit1(void)

{
	glClearColor(0.0,0.0,0.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,1000,0,1000);
	glMatrixMode(GL_MODELVIEW);
	glLineWidth(5);
}
/*void thumb1()
{
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(30,42.8);
glVertex2f(30.3,44);
glVertex2f(31,45);
glVertex2f(31.3,44);
glVertex2f(31,42.8);
glColor3f(0.7,0,0);
glVertex2f(30,42.8);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(29,12.8+30);
glVertex2f(32,12.4+30);
//glVertex2f(35,11.5);
//glVertex2f(36,10);
glVertex2f(33,11+30);
glVertex2f(30,11+30);
glVertex2f(27,10+30);
glVertex2f(29,12.8+30);
glEnd();
}*/

/*void thumb()
{
b+=0.2;
if(b<30)
{
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(30,42.8-b);
glVertex2f(30.3,44-b);
glVertex2f(31,45-b);
glVertex2f(31.3,44-b);
glVertex2f(31,42.8-b);
glColor3f(0.7,0,0);
glVertex2f(30,42.8-b);
glEnd();
}
else
{
glBegin(GL_POLYGON);
glColor3f(0.72,0.45,0.20);
glVertex2f(30,42.8-30);
glVertex2f(30.3,44-30);
glVertex2f(31,45-30);
glVertex2f(31.3,44-30);
glColor3f(0.7,0,0);
glVertex2f(31,42.8-30);
glColor3f(0.7,0,0);
glVertex2f(30,42.8-30);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(29,12.8);
glVertex2f(32,12.4);
//glVertex2f(35,11.5);
//glVertex2f(36,10);
glVertex2f(33,11);
glVertex2f(30,11);
glVertex2f(27,10);
glVertex2f(29,12.8);
glEnd();
}
glutPostRedisplay();
}*/
/*void blood()
{
z+=0.2;
if(z<29)
{
glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(30,42.8-z);
glVertex2f(30.5,42.8-z);
glVertex2f(30.5,42-z);
glVertex2f(30,42.8-z);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(30,41-z);
glVertex2f(30.5,41-z);
glVertex2f(30.5,40-z);
glVertex2f(30,41-z);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.7,0,0);
glVertex2f(30.1,40-z);
glVertex2f(31,40-z);
glVertex2f(31,39-z);
glVertex2f(30.1,40-z);

glEnd();
}
else
{
z=0.0;

}
}*/




/*void cry()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	l+=0.3;
	if(l<25)
	{
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(163,163.5-l);
	glVertex2f(163,162.5-4-l);
	glVertex2f(163.7,163.5-l);
	glVertex2f(163,163.5-l);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(163-1,163.5-5-l);
	glVertex2f(163-1,162.5-4-5-l);
	glVertex2f(163.7-1,163.5-5-l);
	glVertex2f(163-1,163.5-5-l);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(171,163.5-l);
	glVertex2f(171,163.5-5-l);
	glVertex2f(171.7,163.5-l);
	glVertex2f(171,163.5-l);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1,1,1);
	glVertex2f(171-1,163.5-5-l);
	glVertex2f(171-1,163.5-5-5-l);
	glVertex2f(171.7-1,163.5-5-l);
	glVertex2f(171-1,163.5-5-l);
	glEnd();
}
else
{
l=0;
}
glutPostRedisplay();
}*/		











void key1(unsigned char key,int x,int y){
	switch(key){
		case 'R' :
			scene1++;scene2=0;scene3=0;scene4=0;		
		break;
		
		case 'A' :				
			scene2++;scene1=0;scene3=0;scene4=0;			
		break;
		
		case 'M' :
		  scene3++;scene2=0;scene1=0;scene4=0;	
				
		break;
		case 'Y': 		
			scene4++;scene3=0;scene1=0;scene2=0;scene3=0;		
	break;
	     case 'B': 		
			glutDisplayFunc(mydisplay10);scene3=0;scene1=0;scene2=0;scene4=0;
	break;
			
	}
	glutPostRedisplay();
}
void menufunc(int n){
	switch(n){
		case 1 :glutDisplayFunc(mydisplay);	
					break;
		case 2 :glutDisplayFunc(mydisplay3);
		scene1=0;
		          break;
		case 3 : start3=1;glutDisplayFunc(mydisplay6);
		scene2=0;
							

		         break;
		case 4 : start4=1;glutDisplayFunc(mydisplay7);
		scene3=0;
							

		          break;
		case 5 : start5=1;glutDisplayFunc(mydisplay8);
		scene4=0;

		          break;
		//case 6 : start6=0;glutDisplayFunc(mydisplay9);
		//scene5=0;
	     	//break;
		case 7 : start7=0;glutDisplayFunc(mydisplay10);break;		
	}
	glutPostRedisplay();
}

int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB); 
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("EKALAYA");
	glutKeyboardFunc(key1);
	//pix[0].readBMPFile("FRONT.bmp");
	glutDisplayFunc(mydisplay);
	
	scene1=scene2=scene3=scene4=0;
	//glEnable(GL_DEPTH_TEST);
    glutCreateMenu(menufunc);
	glutAddMenuEntry("INTRODUCTION",1);
	glutAddMenuEntry("Scene1",2);
	glutAddMenuEntry("Scene2",3);
	glutAddMenuEntry("Scene3",4);
	glutAddMenuEntry("Scene4",5);
	
	glutAddMenuEntry("Moral",7);
	
	glutAttachMenu(GLUT_RIGHT_BUTTON);		
	//glutKeyboardFunc(keys1);
	myinit();
	loadIntroduction();
	glutMainLoop();
	return 0;
}
