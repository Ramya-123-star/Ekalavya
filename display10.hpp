
void mydisplay10() {
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

	glColor3f(1, 0, 0);
	char str50[] = "MORAL :";
	glRasterPos2f(40, 90);
	for (i = 0; i < strlen(str50); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str50[i]);
	}



	char str51[] = "PRACTICE MAKES MAN PERFECT";
	char str52[] = "When teacher Dronacharya denied the request of Eklavya to teach him archery ";
	char str53[] = "Eklavya did not give up.He practiced and became good archerer.";
	char str54[] = "SELF MENTORING";
	char str55[] = "When Eklavya practiced, he did not have a mentor,he mentored himself, rely ";
	char str56[] = "upon the experiences and learn from things happening around him.";
	char str57[] = "DETERMINATION AND DEDICATION";
	char str58[] = "Eklavya was denied training by Dronacharya because he was not from the Royal ";
	char str59[] = "family still he went on to become the best archer.";
	char str60[] = "THANK YOU!!!!!";
	glColor3f(0, 0, 0);
	glRasterPos2f(30, 80);

	for (i = 0; i < strlen(str51); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str51[i]);

	}
	glColor3f(0,0, 0);
	glRasterPos2f(19, 75);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str52); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str52[i]);

	}
	glColor3f(0, 0, 0);
	glRasterPos2f(19, 70);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str53); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str53[i]);

	}
	glColor3f(0, 0, 0);
	glRasterPos2f(30, 60);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str54); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str54[i]);

	}
	glColor3f(0, 0, 0);
	glRasterPos2f(19, 55);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str55); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str55[i]);

	}
	glRasterPos2f(19, 50);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str56); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str56[i]);

	}
	glColor3f(0, 0, 0);
	glRasterPos2f(30, 40);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str57); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str57[i]);

	}
	glRasterPos2f(19, 35);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str58); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str58[i]);

	}
	glRasterPos2f(19, 30);
	//glColor3f(0,0,1);
	for (i = 0; i < strlen(str59); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str59[i]);

	}
	glRasterPos2f(40, 13);
	glColor3f(1,0,0);
	for (i = 0; i < strlen(str60); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str60[i]);

	}

	glColor3f(1, 0, 0);
	/*char str[] = "PRESS 'S' TO CONTINUE";
	glRasterPos2f(50, 10);
	for (i = 0; i < strlen(str); i++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, str[i]);
	}*/
	glEnd();
	//glutKeyboardFunc(keys12);
	glFlush();
}
