void arrow()
{
glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,130,+10,130);
a+=0.6;
if(a<55)
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5+a,43+a);
glVertex2f(38+a,53+a);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(37+a,54+a);
glVertex2f(39+a,52+a);
glVertex2f(40+a,54+a);
glVertex2f(37+a,54+a);
}
else 
{
glBegin(GL_LINE_STRIP);//billu
glColor3f(0.0,0.0,0.0);
glVertex2f(28.5+55,43+55);
glVertex2f(38+55,53+55);
glEnd();
glBegin(GL_POLYGON);

glVertex2f(37+55,54+55);
glVertex2f(39+55,52+55);
glVertex2f(40+55,54+55);
glVertex2f(37+55,54+55);
}
glEnd();
glutPostRedisplay();
}
