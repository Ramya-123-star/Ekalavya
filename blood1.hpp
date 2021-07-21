void blood()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-50,80,-10,85);
z+=0.1;
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
}
