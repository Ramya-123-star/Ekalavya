#include "man.hpp"
#include "student.hpp"
#include "house7.hpp"
#include "house8.hpp"
#include "tree.hpp"
#include "backgnd.hpp"
#include "grass.hpp"
#include "cloud1.hpp"
#include "sky1.hpp"
#include "ground1.hpp"
#include "arrow1.hpp"
#include "idle.hpp"
#include "blood1.hpp"
#include<string.h>
//#include  "text.hpp"

void tree() {
	glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(10,100.0,10,100.0);
	top();
	root();
	branch();
	root1();
	
}
/*void house7(){
	house();
	house1();
}*/


	
void stud(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-180,330,-180,330);
	student1();
}
void stud1(){
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-250,320,-250,320);
	student1();
	
}
void stud2(){
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-350,400,-350,400);
	student1();
	
}


//man

void man()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);
	
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

//lefthand1
lefthand1();

//billu
billu();

//arrowback
arrowback();

//righthand2
righthand2();

//knife
knife();

//lefthand2
lefthand2();

//lefthand6();

}


