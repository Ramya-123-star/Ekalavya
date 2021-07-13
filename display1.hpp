int j=0;
float i=0.0,f,a,s,c,b,z,d,g,t,o,l;
int s2,s3;
	char str1[]="BANGALORE INSTITUTE OF TECHNOLOGY";	
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
	char str15[]="PRESS 'R' TO CONTINUE";//0
	//char str16[]="PRESS 'P' TO CONTINUE";//1
	char str17[]="PRESS 'A' TO CONTINUE";//2
	//char str18[]="PRESS 'S' TO CONTINUE";//3
	//char str19[]="PRESS 'T' TO CONTINUE";//4
	//char str20[]="PRESS 'U' TO CONTINUE";//5
	char str21[]="PRESS 'M' TO CONTINUE";//6
	char str22[]="PRESS 'Y' TO CONTINUE";//7
	char str23[]="PRESS 'A' TO CONTINUE";//8
	
void drawtext(float x, float y, const char* s)
{
	int i;
	glRasterPos2f(x, y);
	for (i = 0; s[i] != '\0'; i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, s[i]);
	glEnd();
	glutPostRedisplay();
	glFlush();
}
	
void mydisplay()
{
	drawtext(165, 475,str1);
	drawtext(190, 450,str2);
	drawtext(120, 425,str3);
	drawtext(150, 400,str4);
	drawtext(205, 345,str5);
	drawtext(220, 300,str6);
	drawtext(10, 205, str7);
	drawtext(10, 180, str8);
	drawtext(10, 155, str9);
	drawtext(10, 130, str10);
	drawtext(370, 205, str11);
	drawtext(370, 180,str12);
	drawtext(370, 155, str13);
	drawtext(370,140, str14);
	drawtext(210, 50, str15);

}
