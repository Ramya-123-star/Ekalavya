void knife1() {
  glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
		gluOrtho2D(-170,330,-180,305);
  glPushMatrix();
glTranslatef(70,15,0);
glScalef(2.5f,2.0f,1.0);
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2f(27,44);
glVertex2f(29.5,44);
glVertex2f(29.5,45);
glVertex2f(27,45);
glVertex2f(27,44);
glEnd();
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex2f(29.5,45);
glVertex2f(32,45);
glVertex2f(31,44.5);
glVertex2f(29.5,44);
glVertex2f(29.5,45);

glEnd();
//glPopMatrix();
}
