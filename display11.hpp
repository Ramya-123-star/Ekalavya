//THANK YOU

void mydisplay11() {
	int i;
	//glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(0.0,0.0,0.0,0.0f);
	glClearColor(1.0, 1.0, 1.0, 0.0f);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 100, 0, 100);

	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3f(0.3, 0.7, 1);
	glVertex2f(0, 0);
	//glColor3f(0.502,0.502,0);
	glColor3f(0, 0, 0);
	glVertex2f(100, 0);
	//glColor3f(1,0,1);
	glColor3f(0.7, 0.3, .8);
	glVertex2f(100, 100);
	//glColor3f(0.502,0.502,0);
	glVertex2f(0, 100);
	glEnd();
	char str50[] = "THANK YOU";
	glColor3f(1, 1, 1);
	glRasterPos2f(40, 50);
	for (i = 0; i < strlen(str50); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str50[i]);
	}
	glFlush();


}
