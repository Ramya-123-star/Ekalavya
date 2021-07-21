#include "text.hpp"
int j=0;
float i=0.0,f,a,s,c,b,z,d,g,t,o,l;
int s2,s3;
	/*char str1[]="BANGALORE INSTITUTE OF TECHNOLOGY";	
	char str2[]="VV PURAM,BANGALORE";
	char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
	char str5[]="MINI PROJECT ON";
	char str6[]="EKALAVYA";
	char str7[]="TEAM MEMBER:";
	char str8[]="RAMYA B S  1BI18CS122";
	char str9[]="SAI PRANATHI  1BI18CS195";   
	char str10[]="DEPT OF CSE SEC B";
	char str11[]="PROJECT GUIDED BY";
	char str12[]="BHANUSHREE K G";
	char str13[]="ASSISTENT PROFFESSOR";
	char str14[]="DEPT OF CSE";
	char str15[]="RIGHT CLICK ON THE SCREEN AND CLICK SCENE1 TO GO TO NEXT SCENE";*/
	
	
/*void drawtext(float x, float y, const char* s)//N
{
	int i;
	glRasterPos2f(x, y);
	for (i = 0; s[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);
	glEnd();
	//glutPostRedisplay();
	glFlush();
}*/

void loadIntroduction(){
    glGenTextures(1, &intro);
    glBindTexture(GL_TEXTURE_2D, intro);
    // set the bg1 wrapping/filtering options (on the currently bound bg1 object)
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    // load and generate the bg1
    int width, height, nrChannels;
    unsigned char *data = stbi_load("frontt.jpeg", &width, &height, &nrChannels, STBI_rgb_alpha);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
        //glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        printf("Failed to load bg1");
    }
    stbi_image_free(data);
}

void applyBackgroundIntroduction(){
	
    glEnable(GL_TEXTURE_2D);
    glColor3f(1, 1, 1);
    glBindTexture(GL_TEXTURE_2D, intro);
    glBegin(GL_QUADS);
    glVertex3f(1000, 1000,0);
    glTexCoord2f(0, 1);
    glVertex3f(0, 1000,0);
	glTexCoord2f(0, 0);    
    glVertex3f(0,0,0);
    glTexCoord2f(1, 0);
    glVertex3f(1000, 0,0);
    glTexCoord2f(1, 1);
	glEnd();
    glDisable(GL_TEXTURE_2D);
}
void mydisplay()
{
	//glMatrixmode(GL_PROJECTION);
	//glLoadIdentity();
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glClearColor(0.0,1.0,1.0,1.0);	
	/*glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,700,0,700);*/
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
	//gluOrtho2D(0,500,0,500);
//	glMatrixMode(GL_MODELVIEW);
//	glColor3f(0.0,1.0,0.0);
	//glEnable(GL_ALPHA_TEST);
	//glAlphaFunc(GL_EQUAL,1.0);
	//glPixelZoom(1,1);
	//glRasterPos2i(-20,-20);
	//pix[0].draw();
	//glutSwapbuffers();
	/*glColor3f(0.0,0.0,0.0);
	drawtext(165, 475,str1,1);
	drawtext(190, 450,str2,1);
	drawtext(120, 425,str3,1);
	drawtext(150, 400,str4,1);
	drawtext(205, 345,str5,1);
	drawtext(220, 300,str6,1);
	drawtext(10, 205, str7,1);
	drawtext(10, 180, str8,1);
	drawtext(10, 155, str9,1);
	drawtext(10, 130, str10,1);
	drawtext(370, 205, str11,1);
	drawtext(370, 180,str12,1);
	drawtext(370, 155, str13,1);
	drawtext(370,140, str14,1);
	drawtext(150,20, str15,1);	
	glEnd();	
	glFlush();*/
	//glutPostRedisplay();
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,1000,0,1000,-10,10);
	glEnable(GL_DEPTH_TEST);
	applyBackgroundIntroduction();
	glDisable(GL_DEPTH_TEST);
	glFlush();
	}
	
