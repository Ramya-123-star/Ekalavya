//#include "student.hpp"
//#include "primitives.hpp"
#include "text.hpp"
#include "display6.hpp"
#include "drona.hpp"
#include "ekalavya1.hpp"
//#include  "text.hpp"

int scene1;
int timerValOfTheManSpeed=20;
char str27[]="PRESS 'A' TO CONTINUE";
char str25[]="PRESS 'R' TO CONTINUE";

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
	
	
	int i;
glClear(GL_COLOR_BUFFER_BIT);

sky();
cloud();
ground();
back();
house();
drona7();
switch(scene1){
	case 1: cloud7(300,305,"Namasthe,,"," Guru Dronacharaya!"," "); break;
	case 2: cloud7(348,325,"Who are you?"," "," ");break;
	case 3: cloud7(300,305,"I am Eklavya,","and i am the tribal chief's son."," ");break;
	case 4: cloud7(300,305,"I have come here to learn","from you, so please accept me  ","as your student.");break;

	case 5: cloud7(300,305,"And teach me how to, ","be a master of archery!"," ");break;
	case 6: cloud7(348,325,"I teach archery only to the","princes,so i could not ","accept you. ");break;
	case 7: cloud7(348,325,"But you are an intelligent","boy.You start practicing","in the forest. ");break;
}

//Ecloud7(300,305,"Namasthe,,"," Guru Dronacharaya!"," ");   
//Dcloud7(348,325,"Who are you?"," "," "); 
//Ecloud7(300,305,"I am Eklavya,","and i am the tribal chief's son."," ");
//cloud7(300,305,"I have come here to learn","from you, so please accept me  ","as your student.");
//cloud7(300,305,"And teach me how to, ","be a master of archery!"," ");    //I teach archery only to the princes so i could not accept you.But you are an intelligent 
//boy you start practicing in the forest.
//cloud7(348,325,"I teach archery only to the","princes,so i could not ","accept you. ");
//cloud7(348,325,"But you are an intelligent","boy.You start practicing","in the forest. "); 
grass1();
stud2();
stud1();
stud();
ekalavya();
glColor3f(1,0,0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(20,480,20,480);

if(scene1>7)
	drawtext(210,50,"RIGHT CLICK ON THE SCREEN AND CLICK SCENE2 TO GO TO NEXT SCENE",1);
else
	drawtext(250,50,"PRESS 'R' TO CONTINUE",1);
glEnd();
glFlush();
glutPostRedisplay();
}
