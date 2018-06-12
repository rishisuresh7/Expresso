#include"happy.cpp"
#include"sad.cpp"
#include"angry.cpp"
#include"sleepy.cpp"
#include"smirk.cpp"
GLfloat angle=0.0,i=0.05;
void idle()
{
    glutPostRedisplay();
}
void Write1(char *string)                                                //to write the string passed as parameter
{
    while(*string)
     glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
}

void Write2(char *string)                                               //to write the string passed as parameter
{
    while(*string)
     glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *string++);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);                                         //clears the color buffer
	//glColor3f (0.0,0.0,0.1);                                           //set the color
    glBegin(GL_POLYGON);
    glColor3f ( 0.388, 0.949, 0.918);                                                //to draw the polygon using the following coordinates
	 glVertex2f(1.0,-1.5);
	  glColor3f (0.388, 0.804, 0.949);
	  glVertex2f(-1.0,-1.5);
	  glColor3f (0.388, 0.592, 0.949);
	  glVertex2f(-1.0,1.0);
	  glColor3f (0.102, 0.129, 0.78);
	  glVertex2f(1.0,1.0);
	glEnd();                                                                //to end drawing the polygon
    GLUquadricObj * quadricObj;	    	                                    //Creates a quadratic object
	quadricObj = gluNewQuadric();	                                     	//Sets a pointer to a new quadratic object
	gluQuadricDrawStyle(quadricObj, GLU_FILL);
	glPushMatrix();
    glColor3f (0.55,0.90,0.40);                                               //Sets ellipse color
    glTranslatef(0.0,0.70,0.0);
    glRotatef(angle,0.0,0.0,1.0);		                                   //Translates the ellipse
	glScalef(0.30, 0.20, 0);                                            //Scales the ellipse
    gluDisk(quadricObj, 0.0,0.75, 100, 100);
	glPopMatrix();
	glColor3f(0,0,0);                                                //Sets ellipse color
	glRasterPos2f(-0.088,0.70);                                             //to provide position for rasterization
    Write1("HAPPY");

   	glColor3f(0.790,1.0,0.70);		                                      //Sets ellipse color
	glPushMatrix();
    glTranslatef(-0.5,0.25,0.0);
    glRotatef(angle,0.0,0.0,1.0);	                                          //Translates the ellipse
	glScalef(0.35,0.20,0.0);	    	                                  //Scales the ellipse
	gluDisk(quadricObj, 0.0,0.75, 100, 100);
	glPopMatrix();
	glColor3f(0,0,0);                                               //Sets ellipse color
    glRasterPos2f(-0.55,0.25);                                            //to provide position for rasterization
    Write1("SAD");

    glColor3f (0.55,0.90,0.40);                                               		                                  //Sets ellipse color
    glPushMatrix();
	glTranslatef(-0.35,-0.350,0.0);
	glRotatef(angle,0.0,0.0,1.0);	                                          //Translates the ellipse
	glScalef(0.35, 0.20, 0.0);     	                                  //Scales the ellipse
    gluDisk(quadricObj, 0.0,0.75, 100, 100);
	glPopMatrix();
	glColor3f(0,0,0);                                               //Sets ellipse color
	glRasterPos2f(-0.42,-.350);                                            //to provide position for rasterization
    Write1("ANGRY");

    glColor3f(0.790,1.0,0.70);			                                  //Sets ellipse color
    glPushMatrix();
	glTranslatef(0.35,-0.350,0.0);
	glRotatef(angle,0.0,0.0,1.0);	                                          //Translates the ellipse
	glScalef(0.35, 0.20, 0.0);                                           //Scales the ellipse
    gluDisk(quadricObj, 0.0,0.75, 100, 100);
	glPopMatrix();
	glColor3f(0,0,0);                                                //Sets ellipse color
    glRasterPos2f(0.27,-0.35);                                             //to provide position for rasterization
    Write1("SLEEPY");

   glColor3f (0.55,0.90,0.40);                                               		                                  			                                 //Sets ellipse color
    glPushMatrix();
	glTranslatef(0.5,0.25,0.0);
	glRotatef(angle,0.0,0.0,1.0);	                                           //Translates the ellipse
	glScalef(0.35, 0.20, 0.0);    		                                   //Scales the ellipse
	gluDisk(quadricObj, 0.0,0.75, 100, 100);
	glPopMatrix();
	glColor3f(0,0,0);                                                //Sets ellipse color
    glRasterPos2f(0.40,0.25);                                             //to provide position for rasterization
    Write1("SMIRKY");

    glutSwapBuffers();
    angle+=2.0;
    i+=0.01;
    glFlush();
 }
void OnMouseClick(int button, int state, int x, int y)
{

  if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)                //if left button of the mouse is pressed
  {

     if(x>450&&x<550&&y>55&&y<150)                                       //if position of mouse lies between the first button coordinates
     {
         glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
       glutInitWindowSize(500,700);
     glutInitWindowPosition(850,25);
    glutCreateWindow("BWAHAHAHA!!");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(Display);
    glutIdleFunc(idle);
    glutSpecialFunc(walk);
    SetupRend();
    glEnable(GL_NORMALIZE);
    glutMainLoop();
     }


     if(x>200&&x<300&&y>200&&y<300)                                       //if position of mouse lies between the first button coordinates
     {
         glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
       glutInitWindowSize(500,700);
     glutInitWindowPosition(850,25);
    glutCreateWindow("DONT CRY!!");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(DisplaySad);
    glutIdleFunc(idle);
    glutSpecialFunc(walk);
    SetupRend();
    glEnable(GL_NORMALIZE);
    glutMainLoop();
     }

     if(x>300&&x<400&&y>400&&y<500)                                       //if position of mouse lies between the first button coordinates
     {
         glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
       glutInitWindowSize(500,700);
     glutInitWindowPosition(850,25);
    glutCreateWindow("ARGGG!!");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(DisplayAngry);
    glutIdleFunc(idle);
    glutSpecialFunc(walk);
    SetupRend();
    glEnable(GL_NORMALIZE);
    glutMainLoop();
     }

     if(x>600&&x<700&&y>400&&y<500)                                       //if position of mouse lies between the first button coordinates
     {
         glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
       glutInitWindowSize(500,700);
     glutInitWindowPosition(850,25);
    glutCreateWindow("YAAWWWNN!!");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(DisplaySL);
    glutIdleFunc(idle);
    glutSpecialFunc(walk);
    SetupRend();
    glEnable(GL_NORMALIZE);
    glutMainLoop();
     }

     if(x>700&&x<800&&y>200&&y<300)                                       //if position of mouse lies between the first button coordinates
     {
         glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
       glutInitWindowSize(500,700);
     glutInitWindowPosition(850,25);
    glutCreateWindow("HOW YOU DOIN??");
    glutReshapeFunc(myReshape);
    glutDisplayFunc(DisplaySM);
    glutIdleFunc(idle);
    glutSpecialFunc(walk);
    SetupRend();
    glEnable(GL_NORMALIZE);
    glutMainLoop();
     }
  }
}