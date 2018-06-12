void eyerightSM()
{
    //function for the right eye
    glPushMatrix();
    glTranslatef(.17,1.1,.75);     //Specify the coordinates for the right eye
    glRotatef(-45,0,0,1);
    glScalef(.6,.6,.6);            //Specify the size of the right eye
         //Specify the color of the eye
    gluSphere(gluNewQuadric(),.3,100,100);
    glPopMatrix();
}
void eyeleftSM()
{
    glPushMatrix();
    glTranslatef(-.17,1.1,.75);     //Specify the position for the left eye
    glRotatef(45,0,0,1);
    glScalef(.6,0.6,0.6);

    gluSphere(gluNewQuadric(),.3,100,100);
    glPopMatrix();
}


void mouthSM()
{
    glPushMatrix();
    glTranslatef(0,.78,.74);
    glScalef(.55,.55,.1);
    glColor3f(0.0,0.0,0.0);
    gluSphere(gluNewQuadric(),.4,100,100);
    glPopMatrix();
}


void eyebrowleftSM()
{
    glPushMatrix();
    glTranslatef(-.07,1.16,.97);;
    glRotatef(90,0,1,0);
    glRotatef(180,1,0,0);
    glColor3f(0.0,0.0,0.0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}
void teethSM()
{
    glPushMatrix();
    glColor3f(1.0,1.0,1.0);
    glTranslatef(-.08,.72,.76);
    glTranslatef(.055,0,.005 );
    glutSolidCube(.035);
    glTranslatef(.055,0,0 );
    glutSolidCube(.035);
    glPopMatrix();
}

void eyebrowrightSM()
{
    glPushMatrix();
    glTranslatef(.3,1.18,.97);
    glRotatef(270,0,1,0);
    glRotatef(0,1,0,0);
    gluCylinder(gluNewQuadric(),.05,.01,.3,4,6);
    glPopMatrix();
}


void pupilleftSM()
{
    glPushMatrix();
    glTranslatef(-.14,1.1,.88);
    glScalef(.65,.65,.65);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}

void pupilrightSM()
{
    glPushMatrix();
    glTranslatef(.25,1.1,.88);
    glScalef(.65,.65,.65);
    gluSphere(gluNewQuadric(),.1,100,100);
    glPopMatrix();
}


void DisplaySM()
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
	glColor3f(0.96,0.88,0.30);
    eyerightSM();
    eyeleftSM();
    eyebrowleftSM();
    eyebrowrightSM();
    neckring();
    legright();
    legleft();
    armleftS();
    hatring();
    armrightS();
    BellyCoat();
    bellyCoatbottom();
    handleftS();
    handrightS();
    mouthSM();
    teethSM();
    glColor3f(1.0,0.8,0.6);
    head();
    footleft();
    footright();
    topbutton();
    glColor3f(0,1.0,1.0);
    pupilleftSM();
    pupilrightSM();
    glPopMatrix();

    glPopMatrix();                                     //****Restore matrix state****
    glutSwapBuffers();                             //****Flush drawing commands****
}



