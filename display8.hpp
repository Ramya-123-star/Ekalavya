//#include "primitives.hpp"
//#include "house8.hpp"
#include "knife.hpp"

int scene4;
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
//tree()
stud22();
stud11();
stud0();
house();
//tree()
man3();
//blood();
drona8();

if(scene4>7){
	knife1();
blood();
}



switch(scene4){
	case 1: cloud7(342,340," ","I am Amazed by your skills! "," Who is your guru?  ");break;
	case 2: cloud7(302,313,"You are my guru,,","I have learned from you."," ");break;
	case 3: cloud7(342,340," ","How is it possible?? "," "); break;
	case 4: cloud7(302,313,"I have made an","idol of you,and have "," accepted as my guru. ");break;
	case 5: cloud7(342,340,"If i am your guru, ","then you have to  ","give Guru Dakshina to me "); break;
	case 6: cloud7(302,313,"What you want"," my Guru! ","  ");break;
	case 7: cloud7(342,340,"Give me the thumb","of your right hand","as your Guru Dakshina. "); break;
	//case 8: cloud7(302,313,"Give me the thumb","of your right hand","as your Guru Dakshina. "); break;
}
//cloud7(342,340," ","I am Amazed by your skills! "," Who is your guru?  ");
//cloud7(302,313,"You are my guru,,","I have learned from you."," ");
//cloud7(342,340," ","How is it possible?? "," "); 
//cloud7(302,313,"I have made an","idol of you,and have "," accepted as my guru. ");
//cloud7(342,340,"If i am your guru, ","then you have to  ","give Guru Dakshina to me ");  
//cloud7(302,313,"What you want"," my Guru! ","  ");
//cloud7(342,340,"Give me the thumb","of your right hand","as your Guru Dakshina. "); 
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-170,330,-180,305);

if(scene4>7)
    //blood();
	drawtext(-30,-150,"RIGHT CLICK ON THE SCREEN AND CLICK MORAL TO GO TO NEXT SCENE",1);

else
    //blood();
	drawtext(0,-150,"PRESS 'Y' TO CONTINUE",1);
	glEnd();
//glutKeyboardFunc(keys8);
glFlush();
glutPostRedisplay();
}

