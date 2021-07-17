void ground() 
{
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);
glColor3f(0,0.3,0);
glVertex2f(0,400);
glVertex2f(700,400);
glColor3f(0,1,0);
glVertex2f(700,0);
glVertex2f(0,0);
glVertex2f(0,400);
glEnd();
}
