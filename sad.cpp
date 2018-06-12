void armleftS()
{
    glPushMatrix();
    glTranslatef(-.80,0.1,.1);     //Specify the position for the left arm
    glRotatef(90,0,1,0);
    glRotatef(-50,1,0,0);
    glColor3f(1.0,0.8,0.6);
    gluCylinder(gluNewQuadric(),.15,.15,.48,30,6);
    glPopMatrix();
}
void armrightS()
{
    glPushMatrix();
    glTranslatef(.80,0.1,.1);      //Specify the position for the right arm
    glRotatef(90,0,1,0);
    glRotatef(-130,1,0,0);
    glColor3f(1.0,0.8,0.6);
    gluCylinder(gluNewQuadric(),.15,.15,.48,30,6);
    glPopMatrix();
}
void handleftS()
{
    glPushMatrix();
    glTranslatef(.82,0.05,.15);     //Specify the position for the left hand
    glScalef(.4,.3,.3);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}
void handrightS()
{
    glPushMatrix();
    glTranslatef(-.82,0.05,.20);    //Specify the position for the right hand
    glScalef(.4,.3,.3);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}
void mouthS()
{
    glPushMatrix();
    glTranslatef(0,.78,.74);
    glScalef(.4,.1,.4);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}
void teethS()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.08,.81,1.0);
    glTranslatef(.055,0,.005 );
    glutSolidCube(.035);
    glTranslatef(.055,0,0 );
    glutSolidCube(.035);
    glPopMatrix();
}
void eyebrowleftS()
{
    glPushMatrix();
    glTranslatef(-.1,1.5,.97);;
    glRotatef(90,0,1,0);
    glRotatef(150,1,0,0);
    glColor3f(0.0,0.0,0.0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void eyebrowrightS()
{
    glPushMatrix();
    glTranslatef(.1,1.5,.97);
    glRotatef(270,0,1,0);
    glRotatef(145,1,0,0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void tearleftS()
{
    glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glTranslatef(-.2,0.9,.88);
    glScalef(.3,.6,.6);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}
void tearrightS()
{
    glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glTranslatef(.2,0.9,.88);
    glScalef(.3,.6,.6);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}
void DisplaySad()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//Clear the window
    glColor3ub(50, 50, 150);//Change the draw color to slate blue
    glPushMatrix();//Save viewing matrix state
    if(world==1)
	{
       	      glTranslatef(walkX,-1,walkY);
                  glRotatef(lookY,0,1,0);
                  glRotatef(lookX,1,0,0);
	}
    //*******************Doll***********************
    glPushMatrix();
    glTranslatef(-1,0,-6);
    if(doll==1)
	{
        glTranslatef(walkX,-1,walkY);
        glRotatef(lookY,0,1,0);
        glRotatef(lookX,1,0,0);
	}
	glColor3f(1.0,0.8,0.88);
    eyeright();
    eyeleft();
    eyebrowleftS();
    eyebrowrightS();
    neckring();
    legright();
    legleft();
    armleftS();
    armrightS();
    BellyCoat();
    bellyCoatbottom();
    handrightS();
    handleftS();

    mouthS();
    teethS();
    glColor3f(1.0,0.8,0.6);
    head();
    footleft();
    footright();
    topbutton();
    glColor3f(0,0,0);
    pupilleft();
    pupilright();
    tearleftS();
    tearrightS();
    glPopMatrix();
    glPopMatrix();                                     //****Restore matrix state****
    glutSwapBuffers();                             //****Flush drawing commands****
}