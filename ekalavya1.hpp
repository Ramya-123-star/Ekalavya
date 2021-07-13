void ekalavya()
{	
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(20,480,20,480);
	i+=0.9;
	if(i<130)
{

	//body
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);	
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171+i,155+i);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175+i,145+i);
		glVertex2f(178+i,144+i);
		glVertex2f(181+i,143+i);
		glVertex2f(180+i,130+i);
		glVertex2f(179.5+i,125+i);
		glVertex2f(179+i,120+i);
		glVertex2f(179+i,115+i);
		glVertex2f(179+i,110+i);
		glVertex2f(179.8+i,105+i);
		glVertex2f(180+i,102+i);
		glVertex2f(180+i,100+i);
		glVertex2f(154.8+i,100+i);
		glVertex2f(154.8+i,102+i);
		glVertex2f(155+i,105+i);
		glVertex2f(155.2+i,110+i);
		glVertex2f(155+i,115+i);
		glVertex2f(154.5+i,120+i);
		glVertex2f(154.3+i,125+i);
		glVertex2f(154+i,128+i);
		glVertex2f(153.5+i,129+i);
		glVertex2f(152.5+i,130+i);
		glVertex2f(153+i,142+i);
		glVertex2f(155+i,143+i);
		glVertex2f(158+i,144+i);
		glVertex2f(160+i,144+i);
		glVertex2f(160+i,145+i);
		glVertex2f(161.5+i,148+i);
		glVertex2f(161.5+i,148+i);
		glVertex2f(162+i,150+i);
		glVertex2f(162+i,150+i);
		glVertex2f(162+i,155+i);
		glVertex2f(162+i,155+i);
		glVertex2f(171+i,155+i);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180+i,102+i);
		glVertex2f(154.8+i,102+i);
	glEnd();




//head	
glBegin(GL_POLYGON);
		glColor3f(0,0,0);	
		glVertex2f(167+i,152+i);
		glVertex2f(169+i,153+i);
		glVertex2f(172+i,155+i);
		glVertex2f(173.5+i,158+i);
		glVertex2f(174+i,160+i);
		glVertex2f(174.5+i,164+i);
		glVertex2f(174+i,169+i);
		glVertex2f(173+i,172+i);
		glVertex2f(171+i,174+i);
		glVertex2f(169+i,174.8+i);
		glVertex2f(167+i,175+i);
		glVertex2f(164+i,174.5+i);
		glVertex2f(162+i,173.5+i);
		glVertex2f(160+i,171+i);
		glVertex2f(159+i,169+i);
		glVertex2f(159+i,165+i);
		glVertex2f(159+i,160+i);
		glVertex2f(159.5+i,158+i);
		glVertex2f(160+i,157+i);
		glVertex2f(161+i,156+i);
		glVertex2f(162.5+i,154.5+i);
		glVertex2f(163+i,154+i);
		glVertex2f(164+i,153+i);
		glVertex2f(167+i,152+i);
	glEnd();

	




		
//EYES

//glBegin(GL_LINE_STRIP);
	
	//RUDRAKSH
		//circle(172.5,146.5,1);
		//circle(172.5,144.5,1);
		//circle(172.5,142.5,1);
		//circle(172.5,140.5,1);
		//circle(172.5,138.5,1);
		//circle(172.5,136.5,1);
		//circle(172.5,134.5,1);
		//circle(172.5,132.5,1);
		//circle(171.5,130.5,1);
		//circle(170.5,128.5,1);
		//circle(169.5,126.5,1);
		//circle(168.5,124.5,1);
		//circle(167.5,123.5,1);
		//circle(166.5,122.5,1);
		//circle(165.5,124.5,1);
		//circle(164.5,126.5,1);
		//circle(163.5,128.5,1);
		//circle(162.5,130.5,1);
		//circle(161.5,132.5,1);
		//circle(160.5,134.5,1);
		//circle(160.5,136.5,1);
		//circle(160.5,138.5,1);
		//circle(160.5,140.5,1);
		//circle(160.5,142.5,1);
		//circle(160.5,144.5,1);
		//circle(112.5,140.5,1);

	glBegin(GL_POLYGON);//hand1
		glColor3f(0.7,0.4,0);	
		
		glVertex2f(153+i,142+i);
		glVertex2f(151+i,140.5+i);
		glVertex2f(150+i,139+i);
		glVertex2f(149+i,137+i);
		glVertex2f(148+i,135+i);
		glVertex2f(147.2+i,133+i);
		glVertex2f(147+i,130+i);
		glVertex2f(147+i,125+i);
		glVertex2f(147.1+i,120+i);
		glVertex2f(147.2+i,112+i);

//HALF
		glVertex2f(151.8+i,105+i);
		glVertex2f(152+i,110+i);
		glVertex2f(152.5+i,115+i);
		glVertex2f(152.5+i,120+i);
		glVertex2f(152.5+i,123+i);
		glVertex2f(152.5+i,125+i);
		glVertex2f(152.5+i,130+i);
	glEnd();


		

	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+i,137+i);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+i,127+i);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2+i,100-s3+i);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2+i,99.5-s3+i);
	glutPostRedisplay();
	glEnd();
	


	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.7,0.4,0);	
		glVertex2f(180+i,143+i);
		glVertex2f(182+i,142+i);
		glVertex2f(182+i,142+i);
		glVertex2f(183+i,141+i);
		glVertex2f(183+i,141+i);
		glVertex2f(184+i,139+i);
		glVertex2f(184+i,139+i);
		glVertex2f(185+i,136.5+i);
		glVertex2f(185+i,136.5+i);
		glVertex2f(186+i,135+i);
		glVertex2f(186+i,135+i);
		glVertex2f(187+i,130+i);
		glVertex2f(187+i,130+i);
		glVertex2f(187.2+i,125+i);
		glVertex2f(187.2+i,125+i);
		glVertex2f(187.5+i,120+i);
		glVertex2f(187.5+i,120+i);
		glVertex2f(187.5+i,117+i);
		glVertex2f(187.5+i,117+i);
		glVertex2f(187.2+i,115+i);
		glVertex2f(187.2+i,115+i);
		glVertex2f(187.2+i,112+i);
		glVertex2f(187.2+i,112+i);
		glVertex2f(187.2+i,108+i);
		glVertex2f(187.2+i,108+i);






		glVertex2f(184+i,103+i);
		glVertex2f(184+i,103+i);
		glVertex2f(183.5+i,105+i);
		glVertex2f(183.5+i,105+i);
		glVertex2f(183+i,110+i);
		glVertex2f(183+i,110+i);
		glVertex2f(182.5+i,115+i);
		glVertex2f(182.5+i,115+i);
		glVertex2f(182+i,120+i);
		glVertex2f(182+i,120+i);
		glVertex2f(180.5+i,125+i);//121
		glVertex2f(180+i,125+i);
		glVertex2f(179+i,143+i);//K
	glEnd();
	
		

	glBegin(GL_POLYGON);/*leg1*/
		//glColor3f(0.372549,0.623529,0.623529);
		glColor3f(1.0,0.25,0.0);	
		glVertex2f(155+i,100+i);		
		glVertex2f(154.2+i,95+i);
		glVertex2f(154+i,90+i);
		glVertex2f(154.3+i,85+i);
		glVertex2f(154+i,80+i);
		glVertex2f(154.5+i,75+i);
		glVertex2f(155+i,70+i);
		glVertex2f(155.3+i,65+i);
		glVertex2f(155.5+i,60+i);
		glVertex2f(156+i,55+i);
		glVertex2f(157.5+i,50+i);
	
		glVertex2f(165.5+i,50+i);
		glVertex2f(166.8+i,55+i);
		glVertex2f(166.8+i,60+i);
		glVertex2f(167+i,65+i);
		glVertex2f(167+i,70+i);
		glVertex2f(167+i,75+i);
		glVertex2f(166.9+i,77+i);
		glVertex2f(166.8+i,80+i);
		glVertex2f(167+i,90+i);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);
		glVertex2f(157.9+i,50+i);
		glVertex2f(158+i,45+i);
		glVertex2f(158.2+i,40+i);
		glVertex2f(158.6+i,38+i);
		glVertex2f(164.5+i,38+i);
		glVertex2f(165+i,40+i);
		glVertex2f(165.2+i,45+i);
		glVertex2f(165.3+i,50+i);
	
	glEnd();

	glBegin(GL_POLYGON);/*leg2*/
		glColor3f(1.0,0.25,0.0);
		glVertex2f(167+i,90+i);
		glVertex2f(167.3+i,85+i);
		glVertex2f(168+i,80+i);
		glVertex2f(169+i,75+i);
		glVertex2f(169+i,70+i);
		glVertex2f(169.5+i,65+i);
		glVertex2f(170+i,60+i);
		glVertex2f(171.5+i,50+i);
		
		glVertex2f(180+i,50+i);
		glVertex2f(181+i,60+i);
		glVertex2f(181+i,65+i);
		glVertex2f(180.8+i,70+i);
		glVertex2f(180.8+i,75+i);
		glVertex2f(181+i,80+i);
		glVertex2f(181+i,90+i);
		glVertex2f(181+i,95+i);
		glVertex2f(180+i,100+i);
	glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.6,0.4,0);
		glVertex2f(171.8+i,50+i);
		glVertex2f(172+i,45+i);
		glVertex2f(173+i,38.5+i);
		glVertex2f(178.4+i,38.5+i);
		glVertex2f(179+i,45+i);
		glVertex2f(179.5+i,50+i);
		glEnd();
//skirt
	glColor3f(0.5,0.3,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(155+i,100+i);		
		glVertex2f(154.2+i,95+i);
		glVertex2f(154+i,90+i);
		glVertex2f(154.3+i,74+i);
		glVertex2f(160.3+i,76+i);
		glVertex2f(167.3+i,74+i);
		glVertex2f(173.3+i,76+i);
		glVertex2f(181+i,74+i);
		glVertex2f(181+i,90+i);
		glVertex2f(181+i,95+i);
		glVertex2f(180+i,100+i);
	glEnd();
	//glColor3f(0.0,0.0,0.0);
		//circle(160.3,80,1);
		//circle(161.3,88,1);
		//circle(175.3,92,1);
		//circle(177.3,96,1);
		//circle(179.3,85,1);
		//circle(170.3,82,1);
		//circle(170.3,87,1);
		//circle(168.3,95,1);
		//circle(158.3,97,1);
	glBegin(GL_POLYGON);/*feet1*/
		glColor3f(0.7,0.4,0);		
		glVertex2f(159+i,38+i);
		glVertex2f(158.5+i,35+i);
		glVertex2f(157.5+i,32+i);
		glVertex2f(157+i,30+i);
		glVertex2f(157.5+i,28+i);
		glVertex2f(159+i,26.5+i);
		glVertex2f(162+i,26+i);
		glVertex2f(164+i,27+i);
		glVertex2f(165.5+i,29+i);
		glVertex2f(165+i,32+i);
		glVertex2f(164.5+i,35+i);
		glVertex2f(164+i,38+i);
	glEnd();
//glColor3f(0.0,0.0,0.0);
//anklets	
	//circle(159,38,0.8);
	//circle(161,38,0.8);
	//circle(163,38,0.8);
	//circle(164.5,38,0.6);



	
	glBegin(GL_POLYGON);/*feet2*/
		glColor3f(0.7,0.4,0);	
		glVertex2f(173+i,38.5+i);
		glVertex2f(172.5+i,35+i);
		glVertex2f(172.2+i,30+i);
		glVertex2f(172+i,28+i);
		glVertex2f(173+i,26.8+i);
		glVertex2f(175+i,27+i);
		glVertex2f(178+i,27.5+i);
		glVertex2f(180+i,30+i);
		glVertex2f(179.7+i,33+i);
		glVertex2f(179+i,35+i);
		glVertex2f(178+i,38.5+i);
	
	}
else
{
//body
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);	
		//glColor3f(0.30,0.30,1.0);
		glVertex2f(171+130,155+130);
		//glVertex2f(111.5,149);
		//glVertex2f(112.5,146.5);
		//glVertex2f(111,145);
		glVertex2f(175+130,145+130);
		glVertex2f(178+130,144+130);
		glVertex2f(181+130,143+130);
		glVertex2f(180+130,130+130);
		glVertex2f(179.5+130,125+130);
		glVertex2f(179+130,120+130);
		glVertex2f(179+130,115+130);
		glVertex2f(179+130,110+130);
		glVertex2f(179.8+130,105+130);
		glVertex2f(180+130,102+130);
		glVertex2f(180+130,100+130);
		glVertex2f(154.8+130,100+130);
		glVertex2f(154.8+130,102+130);
		glVertex2f(155+130,105+130);
		glVertex2f(155.2+130,110+130);
		glVertex2f(155+130,115+130);
		glVertex2f(154.5+130,120+130);
		glVertex2f(154.3+130,125+130);
		glVertex2f(154+130,128+130);
		glVertex2f(153.5+130,129+130);
		glVertex2f(152.5+130,130+130);
		glVertex2f(153+130,142+130);
		glVertex2f(155+130,143+130);
		glVertex2f(158+130,144+130);
		glVertex2f(160+130,144+130);
		glVertex2f(160+130,145+130);
		glVertex2f(161.5+130,148+130);
		glVertex2f(161.5+130,148+130);
		glVertex2f(162+130,150+130);
		glVertex2f(162+130,150+130);
		glVertex2f(162+130,155+130);
		glVertex2f(162+130,155+130);
		glVertex2f(171+130,155+130);
	glEnd();
	glBegin(GL_LINES);
		glVertex2f(180+130,102+130);
		glVertex2f(154.8+130,102+130);
	glEnd();




//head	
glBegin(GL_POLYGON);
		glColor3f(0,0,0);	
		glVertex2f(167+130,152+130);
		glVertex2f(169+130,153+130);
		glVertex2f(172+130,155+130);
		glVertex2f(173.5+130,158+130);
		glVertex2f(174+130,160+130);
		glVertex2f(174.5+130,164+130);
		glVertex2f(174+130,169+130);
		glVertex2f(173+130,172+130);
		glVertex2f(171+130,174+130);
		glVertex2f(169+130,174.8+130);
		glVertex2f(167+130,175+130);
		glVertex2f(164+130,174.5+130);
		glVertex2f(162+130,173.5+130);
		glVertex2f(160+130,171+130);
		glVertex2f(159+130,169+130);
		glVertex2f(159+130,165+130);
		glVertex2f(159+130,160+130);
		glVertex2f(159.5+130,158+130);
		glVertex2f(160+130,157+130);
		glVertex2f(161+130,156+130);
		glVertex2f(162.5+130,154.5+130);
		glVertex2f(163+130,154+130);
		glVertex2f(164+130,153+130);
		glVertex2f(167+130,152+130);
	glEnd();

	




		
//EYES

//glBegin(GL_LINE_STRIP);
	
	//RUDRAKSH
		//circle(172.5,146.5,1);
		//circle(172.5,144.5,1);
		//circle(172.5,142.5,1);
		//circle(172.5,140.5,1);
		//circle(172.5,138.5,1);
		//circle(172.5,136.5,1);
		//circle(172.5,134.5,1);
		//circle(172.5,132.5,1);
		//circle(171.5,130.5,1);
		//circle(170.5,128.5,1);
		//circle(169.5,126.5,1);
		//circle(168.5,124.5,1);
		//circle(167.5,123.5,1);
		//circle(166.5,122.5,1);
		//circle(165.5,124.5,1);
		//circle(164.5,126.5,1);
		//circle(163.5,128.5,1);
		//circle(162.5,130.5,1);
		//circle(161.5,132.5,1);
		//circle(160.5,134.5,1);
		//circle(160.5,136.5,1);
		//circle(160.5,138.5,1);
		//circle(160.5,140.5,1);
		//circle(160.5,142.5,1);
		//circle(160.5,144.5,1);
		//circle(112.5,140.5,1);

	glBegin(GL_POLYGON);//hand1
		glColor3f(0.7,0.4,0);	
		
		glVertex2f(153+130,142+130);
		glVertex2f(151+130,140.5+130);
		glVertex2f(150+130,139+130);
		glVertex2f(149+130,137+130);
		glVertex2f(148+130,135+130);
		glVertex2f(147.2+130,133+130);
		glVertex2f(147+130,130+130);
		glVertex2f(147+130,125+130);
		glVertex2f(147.1+130,120+130);
		glVertex2f(147.2+130,112+130);

//HALF
		glVertex2f(151.8+130,105+130);
		glVertex2f(152+130,110+130);
		glVertex2f(152.5+130,115+130);
		glVertex2f(152.5+130,120+130);
		glVertex2f(152.5+130,123+130);
		glVertex2f(152.5+130,125+130);
		glVertex2f(152.5+130,130+130);
	glEnd();


		
//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(139.2,125,0.8);
	//circle(141.2,125,0.8);
	//circle(143.2,125,0.8);
	
//rays
	if(s2<170)
	s2+=0.45;
if(s3<10)
s3+=0.045;
	glBegin(GL_POLYGON);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+130,137+130);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141.2+130,127+130);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(141-s2+130,100-s3+130);
	glColor3f(1.0,1.0,0.0);
	glVertex2f(141-s2+130,99.5-s3+130);
	glutPostRedisplay();
	glEnd();
	


	glBegin(GL_POLYGON);/*hand2*/
		glColor3f(0.7,0.4,0);	
		glVertex2f(180+130,143+130);
		glVertex2f(182+130,142+130);
		glVertex2f(182+130,142+130);
		glVertex2f(183+130,141+130);
		glVertex2f(183+130,141+130);
		glVertex2f(184+130,139+130);
		glVertex2f(184+130,139+130);
		glVertex2f(185+130,136.5+130);
		glVertex2f(185+130,136.5+130);
		glVertex2f(186+130,135+130);
		glVertex2f(186+130,135+130);
		glVertex2f(187+130,130+130);
		glVertex2f(187+130,130+130);
		glVertex2f(187.2+130,125+130);
		glVertex2f(187.2+130,125+130);
		glVertex2f(187.5+130,120+130);
		glVertex2f(187.5+130,120+130);
		glVertex2f(187.5+130,117+130);
		glVertex2f(187.5+130,117+130);
		glVertex2f(187.2+130,115+130);
		glVertex2f(187.2+130,115+130);
		glVertex2f(187.2+130,112+130);
		glVertex2f(187.2+130,112+130);
		glVertex2f(187.2+130,108+130);
		glVertex2f(187.2+130,108+130);






		glVertex2f(184+130,103+130);
		glVertex2f(184+130,103+130);
		glVertex2f(183.5+130,105+130);
		glVertex2f(183.5+130,105+130);
		glVertex2f(183+130,110+130);
		glVertex2f(183+130,110+130);
		glVertex2f(182.5+130,115+130);
		glVertex2f(182.5+130,115+130);
		glVertex2f(182+130,120+130);
		glVertex2f(182+130,120+130);
		glVertex2f(180.5+130,125+130);//121
		glVertex2f(180+130,125+130);
		glVertex2f(179+130,143+130);//K
	glEnd();
	
		
//braclets
	//glColor3f(0.0,0.0,0.0);
	//circle(200,120,0.8);
	//circle(200,118,0.8);
	//circle(200,116,0.8);
	//circle(200,114,0.8)


//TRISHUL
		

	glBegin(GL_POLYGON);/*leg1*/
		//glColor3f(0.372549,0.623529,0.623529);
		glColor3f(1.0,0.25,0.0);	
		glVertex2f(155+130,100+130);		
		glVertex2f(154.2+130,95+130);
		glVertex2f(154+130,90+130);
		glVertex2f(154.3+130,85+130);
		glVertex2f(154+130,80+130);
		glVertex2f(154.5+130,75+130);
		glVertex2f(155+130,70+130);
		glVertex2f(155.3+130,65+130);
		glVertex2f(155.5+130,60+120);
		glVertex2f(156+130,55+130);
		glVertex2f(157.5+130,50+130);
	
		glVertex2f(165.5+130,50+130);
		glVertex2f(166.8+130,55+130);
		glVertex2f(166.8+130,60+130);
		glVertex2f(167+130,65+130);
		glVertex2f(167+130,70+130);
		glVertex2f(167+130,75+130);
		glVertex2f(166.9+130,77+130);
		glVertex2f(166.8+130,80+130);
		glVertex2f(167+130,90+130);
	glEnd();
	glBegin(GL_POLYGON);
		glColor3f(0.7,0.4,0);
		glVertex2f(157.9+130,50+130);
		glVertex2f(158+130,45+130);
		glVertex2f(158.2+130,40+130);
		glVertex2f(158.6+130,38+130);
		glVertex2f(164.5+130,38+130);
		glVertex2f(165+130,40+130);
		glVertex2f(165.2+130,45+130);
		glVertex2f(165.3+130,50+130);
	
	glEnd();

	glBegin(GL_POLYGON);/*leg2*/
		glColor3f(1.0,0.25,0.0);
		glVertex2f(167+130,90+130);
		glVertex2f(167.3+130,85+130);
		glVertex2f(168+130,80+130);
		glVertex2f(169+130,75+130);
		glVertex2f(169+130,70+130);
		glVertex2f(169.5+130,65+130);
		glVertex2f(170+130,60+130);
		glVertex2f(171.5+130,50+130);
		
		glVertex2f(180+130,50+130);
		glVertex2f(181+130,60+130);
		glVertex2f(181+130,65+130);
		glVertex2f(180.8+130,70+130);
		glVertex2f(180.8+130,75+130);
		glVertex2f(181+130,80+130);
		glVertex2f(181+130,90+130);
		glVertex2f(181+130,95+130);
		glVertex2f(180+130,100+130);
	glEnd();
		glBegin(GL_POLYGON);
		glColor3f(0.6,0.4,0);
		glVertex2f(171.8+130,50+130);
		glVertex2f(172+130,45+130);
		glVertex2f(173+130,38.5+130);
		glVertex2f(178.4+130,38.5+130);
		glVertex2f(179+130,45+130);
		glVertex2f(179.5+130,50+130);
		glEnd();
//skirt
	glColor3f(0.5,0.3,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(155+130,100+130);		
		glVertex2f(154.2+130,95+130);
		glVertex2f(154+130,90+130);
		glVertex2f(154.3+130,74+130);
		glVertex2f(160.3+130,76+130);
		glVertex2f(167.3+130,74+130);
		glVertex2f(173.3+130,76+130);
		glVertex2f(181+130,74+130);
		glVertex2f(181+130,90+130);
		glVertex2f(181+130,95+130);
		glVertex2f(180+130,100+130);
	glEnd();
	//glColor3f(0.0,0.0,0.0);
		//circle(160.3,80,1);
		//circle(161.3,88,1);
		//circle(175.3,92,1);
		//circle(177.3,96,1);
		//circle(179.3,85,1);
		//circle(170.3,82,1);
		//circle(170.3,87,1);
		//circle(168.3,95,1);
		//circle(158.3,97,1);
	glBegin(GL_POLYGON);/*feet1*/
		glColor3f(0.7,0.4,0);		
		glVertex2f(159+130,38+130);
		glVertex2f(158.5+130,35+130);
		glVertex2f(157.5+130,32+130);
		glVertex2f(157+130,30+130);
		glVertex2f(157.5+130,28+130);
		glVertex2f(159+130,26.5+130);
		glVertex2f(162+130,26+130);
		glVertex2f(164+130,27+130);
		glVertex2f(165.5+130,29+130);
		glVertex2f(165+130,32+130);
		glVertex2f(164.5+130,35+130);
		glVertex2f(164+130,38+130);
	glEnd();
//glColor3f(0.0,0.0,0.0);
//anklets	
	//circle(159,38,0.8);
	//circle(161,38,0.8);
	//circle(163,38,0.8);
	//circle(164.5,38,0.6);



	
	glBegin(GL_POLYGON);/*feet2*/
		glColor3f(0.7,0.4,0);	
		glVertex2f(173+130,38.5+130);
		glVertex2f(172.5+130,35+130);
		glVertex2f(172.2+130,30+130);
		glVertex2f(172+130,28+130);
		glVertex2f(173+130,26.8+130);
		glVertex2f(175+130,27+130);
		glVertex2f(178+130,27.5+130);
		glVertex2f(180+130,30+130);
		glVertex2f(179.7+130,33+130);
		glVertex2f(179+130,35+130);
		glVertex2f(178+130,38.5+130);
	
}
glEnd();
glutPostRedisplay();

}
