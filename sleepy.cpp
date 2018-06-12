void mouthSL()
{
    glPushMatrix();
    glTranslatef(0,.78,.74);
    glScalef(.45,.45,.45);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}
void eyebrowleftSL()
{
    glPushMatrix();
    glTranslatef(-.1,1.32,.97);;
    glRotatef(90,0,1,0);
    glRotatef(150,1,0,0);
    glColor3f(0.0,0.0,0.0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void eyebrowrightSL()
{
    glPushMatrix();
    glTranslatef(.13,1.32,.97);
    glRotatef(270,0,1,0);
    glRotatef(145,1,0,0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void pupilleftSL()
{
    glPushMatrix();
    glTranslatef(-.17,1.1,.88);
    glScalef(.9,.2,.9);

    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}
void tearleftSL()
{
    glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glTranslatef(-0.21,1.1,1.1);
    glScalef(.15,.15,.15);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}
void pupilrightSL()
{
    glPushMatrix();
    glTranslatef(.17,1.1,.88);
    glScalef(.9,.2,.9);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}
void tearrightSL()
{
    glPushMatrix();
    glColor3f(0.0,0.0,1.0);
    glTranslatef(.2,1.1,1.1);
    glScalef(.15,.15,.15);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}
void DisplaySL()
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
	glColor3f(1.0,1.0,1.0);
    eyeright();
    eyeleft();
    eyebrowleftSL();
    eyebrowrightSL();
    neckring();
    legright();
    legleft();
    armleftS();
    armrightS();
    BellyCoat();
    bellyCoatbottom();
    handleftS();
    handrightS();

    mouthSL();
    teethS();
    glColor3f(1.0,0.8,0.6);
    head();
    footleft();
    footright();
    topbutton();
    glColor3f(0,0,0);
    pupilleftSL();
    pupilrightSL();
    tearleftSL();
    tearrightSL();
    glPopMatrix();
    glPopMatrix();                                    //****Restore matrix state****
    glutSwapBuffers();                             //****Flush drawing commands****
}