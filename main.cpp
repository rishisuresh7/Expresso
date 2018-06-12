#include<stdlib.h>
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#include"menu.cpp"
void myinit()
{
    glClearColor(1.0,0.0,0.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,1000,0,1000);
    glMatrixMode(GL_MODELVIEW);
}
void Write12(char *string)
{
    while(*string)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
}
void Write22(char *string)
{
    while(*string)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *string++);
}
void displayfront()
{
	glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f (0.957, 0.686, 0.165);
        glVertex2f(0,0);
        glColor3f(0.55, 0.992, 0.992);
    	glVertex2f(1000,0);
    	glColor3f (0.31, 1.00, 0.30);
    	glVertex2f(1000,1000);
    	glColor3f(0.608, 0.992, 0.992);
    	glVertex2f(0,1000);
	glEnd();

    glColor3f (0.25,0.25,0.25);
    glBegin(GL_LINE_LOOP);
        glVertex2f(10,10);
    	glVertex2f(10,990);
    	glVertex2f(990,990);
    	glVertex2f(990,10);
	glEnd();
	
    glColor3f (0.80,0.10,0.10);
	glBegin(GL_LINE_LOOP);
        glVertex2f(20,20);
    	glVertex2f(20,980);
    	glVertex2f(980,980);
    	glVertex2f(980,20);
	glEnd();
    
    glColor3f(0,0.2,0.4);
    glRasterPos2f(320,775);
    Write12("CG MINI PROJECT WITH OPENGL");
    glColor3f(0,0.2,0.4);
    glRasterPos2f(455,700);
    Write12("EXPRESSO");
    glBegin(GL_LINES);
        glVertex2f(310,774);
        glVertex2f(710,774);
    glEnd();
     glBegin(GL_LINES);
    glVertex2f(450,700);
    glVertex2f(580,700);
    glEnd();
    glColor3f(1.0,0.0,0.0);
    glRasterPos2f(430,340);
    Write12("ENTER!!!");
    
    glPushMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(0.30, 0.20, 0.0);
        glVertex2f(100,280);
        glVertex2f(30,180);
        glVertex2f(170,180);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3f(0.63, 0.792, 0.878);
        glVertex2f(40,180);
        glVertex2f(160,180);
        glVertex2f(160,100);
        glVertex2f(40,100);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2f(65,160);
        glVertex2f(75,160);
        glVertex2f(75,150);
        glVertex2f(65,150);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex2f(135,160);
        glVertex2f(125,160);
        glVertex2f(125,150);
        glVertex2f(135,150);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
        glVertex2f(90,130);
        glVertex2f(110,130);
        glVertex2f(110,100);
        glVertex2f(90,100);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
        glColor3f(0.70,0.50,0.10);
        glVertex2f(22,99);
        glColor3f(0.60,0.40,0.0);
        glVertex2f(978,99);
        glVertex2f(978,22);
        glColor3f(0.70,0.50,0.10);
        glVertex2f(22,22);
    glEnd();
    glPopMatrix();
    
    for(float i=0;i<70;i+=2)
    {
        glColor3f (0.25,0.25,0.25);
        glBegin(GL_LINE_LOOP);
        glVertex2f(400-i,400+i);
        glVertex2f(550+i,400+i);
        glVertex2f(550+i,300-i);
        glVertex2f(400-i,300-i);
        glEnd();
    }
    glFlush();
}
void OnMouseClick1(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {

        if(x>400&&x<500&&y>400&&y<500)
        {
            glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
        	glutInitWindowSize(1000,700);
        	glutInitWindowPosition(150,0);
        	glutCreateWindow("PROJECT MENU CHART");
        	glutIdleFunc(idle);
            glutDisplayFunc(display);
            glutMouseFunc(OnMouseClick);
            glutMainLoop();
        }
    }
}
int main(int argc,char **argv)
{
   	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000,700);
	glutInitWindowPosition(150,0);
	glutCreateWindow("WELCOME");
	glutDisplayFunc(displayfront);
    glutMouseFunc(OnMouseClick1);
    myinit();
    glutMainLoop();
    return 0;
}