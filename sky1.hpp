void sky() 
{	
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,700,0,700);
glBegin(GL_POLYGON);
glColor3f(0.8,0.8,0.8);
glVertex2f(0,400);
glVertex2f(700,400);
glColor3f(0.7,0.7,1);
glVertex2f(700,700);
glVertex2f(0,700);
glVertex2f(0,400);
glEnd();
}
