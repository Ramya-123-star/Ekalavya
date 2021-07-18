#include <math.h>
void drawCircle(int r, float xpos, float ypos, int depthIndex,int hollow, int startAngle, int endAngle)
    {
        int i;
        //glPushMatrix();
        glTranslatef(xpos, ypos,0);
        if (!hollow)
            glBegin(GL_POLYGON);
        else
        {
            glPointSize(5);
            glBegin(GL_POINTS);
        }
        for (i = startAngle; i <= endAngle; i++)
        {
            float x = r * cos((i * 3.142) / 180);
            float y = r * sin((i * 3.142) / 180);
            glVertex2f(x, y);
        }
        glEnd();
        //glPopMatrix();
    }


void drawEllipse(int xCenter, int yCenter, int Rx, int Ry, int depthIndex,int hollow, int startAngle, int stopAngle)
    {
        float i;
        //glPushMatrix();
        glTranslatef(xCenter, yCenter,0);
        //glColor3f(1.0,0.0,0.0);
        if (hollow)
        {
            glPointSize(4);
            glBegin(GL_POINTS);
        }
        else if (!hollow)
            glBegin(GL_POLYGON);
        for (i = startAngle; i <= stopAngle; i++)
        {
            float x = Rx * cos((i * 3.142) / 180);
            float y = Ry * sin((i * 3.142) / 180);
            glVertex2f(x, y);
        }
        glEnd();
        //glPopMatrix();
    }

void drawtext(float x, float y, char *s,int flag)
{
    int i;
    //glClearColor(0.0,0.0,0.0,0.0);
    glRasterPos2f(x, y);
    if(!flag){
    for (i = 0; s[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, s[i]);
    }
    else{
    	    for (i = 0; s[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);
    }
}
void cloud7(int xpos, int ypos, char *line1, char *line2,char *line3)
    {
    	glMatrixMode(GL_PROJECTION);
	    glLoadIdentity();
	     gluOrtho2D(20,480,20,480);
        //glPushMatrix();
        glTranslatef(xpos, ypos,0);
        glColor3f(1, 1, 1);
        drawCircle(8, 0, 0, 5, 0, 0, 360);
        drawCircle(10, 10, 10, 5, 0, 0, 360);
        drawCircle(12, 10, 15, 5, 0, 0, 360);
        glColor3f(1, 1, 1);
        drawEllipse(22,30,48,22.5, 5, 0, 0, 360);
        glColor3f(0,0,0);
        drawtext(-30, 10, line1,0);
        drawtext(-30, 0, line2,0);
        drawtext(-30, -10, line3,0);
        //glPopMatrix();
    }
