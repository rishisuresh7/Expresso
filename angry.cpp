void mouthA()
{
    glPushMatrix();
    glTranslatef(0,.78,.74);
    glRotatef(90,0,1,0);
    glRotatef(180,1,0,0);
    glScalef(.5,.05,.5);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}
void eyebrowleftA()
{
    glPushMatrix();
    glTranslatef(-.3,1.3,.97);;
    glRotatef(90,0,1,0);
    glRotatef(45,1,0,0);
    glColor3f(0.0,0.0,0.0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void eyebrowrightA()
{
    glPushMatrix();
    glTranslatef(.3,1.3,.97);
    glRotatef(270,0,1,0);
    glRotatef(45,1,0,0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void DisplayAngry()
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
	glColor3f(1.0,1.0,0.0);
    eyeright();
    eyeleft();
    glColor3f(0,0,0);
    eyebrowleftA();
    eyebrowrightA();
    neckring();
    legright();
    legleft();
    armleftS();
    armrightS();
    BellyCoat();
    bellyCoatbottom();
    handleftS();
    handrightS();
    mouthA();
    glColor3f(.950,0.57,0.43);
    head();
    footleft();
    footright();
    topbutton();
    hatring();
    glColor3f(0,0,0);
    pupilleft();
    pupilright();
    glPopMatrix();
    glPopMatrix();                                     //****Restore matrix state****
    glutSwapBuffers();                             //****Flush drawing commands****
}
