void back() 
{

gluOrtho2D(-20,100.0,-20,100.0);
 void top();
 void root();
 void branch();
 void root1();
 

//tree2half
glBegin(GL_POLYGON);
glColor3f(0.65,0.50,0.39);
glVertex2f(75,48);
 glVertex2f(75.5,58);
 glVertex2f(75.6,60);
 glVertex2f(75.5,61);
 glVertex2f(75,65);
 glVertex2f(74.5,66);
 glVertex2f(73,69);
 glVertex2f(72.5,70);
 glVertex2f(72.5,77.5);
 glVertex2f(75,80);
 glVertex2f(81,67.5);
 glVertex2f(78,48);
glEnd();
//tree branch 2
glBegin(GL_POLYGON);
glColor3f(0.0,0.6,0.3);
glVertex2f(75,75);
glVertex2f(72.5,72.5);
 glVertex2f(71,74.0);
 glVertex2f(70.5,74.5);
 glVertex2f(70,75);
 glVertex2f(69.5,76);
 glVertex2f(69.5,77);

 glVertex2f(70,80);
 glVertex2f(68,81);
 glVertex2f(67.5,82);
 glVertex2f(66,83.5);
 glVertex2f(66.3,84.5);
 glVertex2f(66.5,85);
 glVertex2f(67,87);
 glVertex2f(67.5,87.5);
 glVertex2f(70,90);
 glVertex2f(71,91.5);
 glVertex2f(71.5,92.5);
 glVertex2f(72.5,94);
 glVertex2f(75,95);
 glVertex2f(77.5,96);
 glVertex2f(80,96.5);
 glVertex2f(82.5,96);
 glVertex2f(83,95);
  glVertex2f(83.5,94.5);
  glVertex2f(84.5,92.5);
  
 glVertex2f(84.7,90);
 glVertex2f(86,91);
 glVertex2f(87.0,91.5);
 glVertex2f(87.5,90);
 glVertex2f(87.5,89);
 glVertex2f(89,89);
 glVertex2f(89.5,87.5);
 glVertex2f(89,85);
glVertex2f(88,82.5);
 glVertex2f(87,82);
 glVertex2f(86,81);
 glVertex2f(85,80);
 glVertex2f(85.5,75.5);
 glVertex2f(84,75);
glVertex2f(82.5,75);
glEnd();





//tree 2 
glBegin(GL_POLYGON);
glColor3f(0.8,0.6,0.0);
glVertex2f(77.5,48);
glVertex2f(77,60);
 glVertex2f(77.5,62.5);
 glVertex2f(77,65);
 glVertex2f(77,67.5);
 glVertex2f(76,70);
 glVertex2f(75,75);
 glVertex2f(75,78);
 glVertex2f(80,75);
 glVertex2f(82.5,78);
 glVertex2f(82,75);
 glVertex2f(82,72.5);
 glVertex2f(81.5,70);
 glVertex2f(81,65);
 glVertex2f(81.5,62);
 glVertex2f(84,48);
glEnd();
}
