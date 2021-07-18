//#include "primitives.hpp"
//#include "text.hpp"

int scene3;
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
switch(scene3){
	case 1: cloud7(135,183," ","Concentrate!!! "," "); break;
	
}
//cloud7(135,183," ","Concentrate!!! "," "); 
arrow();
//sea()
		
house1();
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);

if(scene3>1)
	drawtext(30,20,"RIGHT CLICK ON THE SCREEN AND CLICK SCENE4 TO GO TO NEXT SCENE",1);
else
	drawtext(50,20,"PRESS 'M' TO CONTINUE",1);
	glEnd();
//glutKeyboardFunc(keys7);
glFlush();
glutPostRedisplay();
}
