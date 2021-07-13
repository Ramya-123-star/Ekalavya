#include <math.h>
void drawCircle(int r, float xpos, float ypos, int depthIndex,int hollow, int startAngle, int endAngle)
    {
        int i;
        glPushMatrix();
        glTranslatef(xpos, ypos, 0);
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
            glVertex3f(x, y, depthIndex);
        }
        glEnd();
        glPopMatrix();
    }


void drawEllipse(int xCenter, int yCenter, int Rx, int Ry, int depthIndex,int hollow, int startAngle, int stopAngle)
    {
        float i;
        glPushMatrix();
        glTranslatef(xCenter, yCenter, 0);
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
            glVertex3f(x, y, depthIndex);
        }
        glEnd();
        glPopMatrix();
    }

void drawtext(float x, float y, char *s)
{
    int i;
    glColor3f(0, 0, 0);
    glRasterPos3f(x, y,9);
    for (i = 0; s[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, s[i]);
}
void cloud7(int xpos, int ypos, char *line1, char *line2)
    {
        glPushMatrix();
        glTranslatef(xpos, ypos, 0);
        glColor4f(1, 1, 1,0.5);
        drawCircle(30, 40, 60, 5, 0, 0, 360);
        drawCircle(50, 80, 110, 5, 0, 0, 360);
        glColor4f(1, 1, 1,0.5);
        drawEllipse(400,240,400,150, 5, 0, 0, 360);
        glColor4f(1,1,1,1);
        drawtext(130, 280, line1);
        drawtext(130, 200, line2);
        glPopMatrix();
    }
