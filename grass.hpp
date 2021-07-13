void grass1()
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,150.0,0.0,150.0);
//grass 2

//ryt grass
glBegin(GL_POLYGON);
glColor3f(0.0,0.9,0.3);
glVertex2f(0,7.5);
 glVertex2f(5,13);
 glVertex2f(0,15);
 glVertex2f(5,13);
 glVertex2f(0,20);
 glVertex2f(5,15);
 glVertex2f(10,18);
 glVertex2f(15,25);
 glVertex2f(13,20);
 glVertex2f(17,21);
 glVertex2f(20,23);
 glVertex2f(17,18);
 glVertex2f(15,15);
 glVertex2f(20,17);
 glVertex2f(25,18);
 glVertex2f(20,15);
 glVertex2f(15,10);
 glVertex2f(30,10);
glVertex2f(35,7.5);
glEnd();
}
