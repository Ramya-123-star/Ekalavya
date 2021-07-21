void display12(){
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10,100,-10,100);
	glClear(GL_COLOR_BUFFER_BIT);
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
glFlush();
}

