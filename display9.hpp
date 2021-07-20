
void mydisplay9() {
	int i;
	int scene5;
	//glClear(GL_COLOR_BUFFER_BIT);
	//glClearColor(0.0,0.0,0.0,0.0f);
	glClearColor(1.0, 1.0, 1.0, 0.0f);
	glPointSize(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 100, 0, 100);

	glMatrixMode(GL_MODELVIEW);
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 1);
	glVertex2f(0, 0);
	//glColor3f(0.502,0.502,0);
	glColor3f(0, 0, 0);
	glVertex2f(100, 0);
	//glColor3f(1,0,1);
	glColor3f(0, 1, .8);
	glVertex2f(100, 100);
	//glColor3f(0.502,0.502,0);
	glVertex2f(0, 100);
	glEnd();

	glColor3f(0, 0, 0);
	char str50[] = "Later , guru drona has asked ekalavya thumb as his offering of guru dhakshina.";
	char str51[] = "Ekalavya gives his right thumb asoffering without any hesitation.";
	char str52[] = "Gods get impressed by ekalavyas commitment gives him a blessing of immortal life.";
	char str53[] = "Ekalavya becomes a great archer with his index finger.";
	glRasterPos2f(25, 70);
	for (i = 0; i < strlen(str50); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str50[i]);
	}
	glRasterPos2f(25, 65);
	for (i = 0; i < strlen(str51); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str51[i]);
	}
	glRasterPos2f(25, 60);
	for (i = 0; i < strlen(str52); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str52[i]);
	}
	glRasterPos2f(25, 55);
	for (i = 0; i < strlen(str53); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str53[i]);
	}
	glColor3f(1, 0, 0);
	char str[] = "PRESS 'B' TO CONTINUE";
	glRasterPos2f(50, 10);
	for (i = 0; i < strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
	}
	glEnd();
	//glutKeyboardFunc(keys11);
	glFlush();
}
