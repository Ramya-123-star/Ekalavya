//house
void house()
{
     glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();	
	 gluOrtho2D(40,400,40,400);
	 glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3f(1,0.5,0);
	glVertex2f(80,120);
	glColor3f(0,0,0);
	glVertex2f(140,120);
	glColor3f(1,0.5,0);
	glVertex2f(140,220);
	glColor3f(1,0.5,0);
	glVertex2f(80,220);
	glColor3f(1,0.5,0);
	glVertex2f(80,120);
	glColor3f(0.8,0.5,0);
	glVertex2f(80,220);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.5,0,0);
	glVertex2f(65,210);
	glColor3f(0,0,0);
	glVertex2f(110,300);
	glColor3f(0,0,0);
	glVertex2f(155,210);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);
	glVertex2f(95,120);
	glColor3f(0,0,0);
	glVertex2f(95,160);
	glColor3f(0,0,0);
	glVertex2f(95,160);
	glColor3f(0,0,0);
	glVertex2f(120,160);
	glColor3f(0,0,0);
	glVertex2f(120,160);
	glColor3f(1,0.5,0);
	glVertex2f(120,120);
	glEnd();
}


