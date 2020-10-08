#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#if __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

bool leftDown = false, rightDown = false;
int lastPos[2];
float cameraPos[4] = {0,0,50,1}; // TODO: Your code here! setup a proper camera position. It should be 4 dimentions homogeneous coordinate, first three elements represent position and 4th element should be 1.
int windowWidth = 640, windowHeight = 480;
double yRot = 0;
int curProblem = 3; // TODO: change this number to try different examples.

float specular[] = { 1.0, 1.0, 1.0, 1.0 };
float shininess[] = { 50.0 };

void problem1() {
	// TODO: Your code here!
	// In this part I am doing circle of the Teapot
	glLoadIdentity();
	// enable material for object
	glColorMaterial(GL_FRONT, GL_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);
	glPushMatrix();
	// draw right part of the scene
	//////////////////
	//////////////////
	glColor3f(1, 0, 0);
	glTranslatef(1, 0, -5);
	glRotatef(0, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 1, 0);
	glTranslatef(.5, .5, -5);
	glRotatef(42.5, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslatef(0, 1, -5);
	glRotatef(85, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(.5, -.5, -5);
	glRotatef(-42.5, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 0, 1);
	glTranslatef(0, -1, -5);
	glRotatef(-85, 0, 1, 1);
	glutSolidTeapot(.25);
	////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////
	// draw left part of the scene
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 0, 0);
	glTranslatef(-1.75, 0, -5);
	glRotatef(180, 0, 1, 0);
	glRotatef(180, 1, 0, 0);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 1, 0);
	glTranslatef(-1.25, .5, -5);
	glRotatef(87.5, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslatef(-.75, 1, -5);
	glRotatef(130, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-1.25, -.5, -5);
	glRotatef(180, 0, 1, 0);
	glRotatef(180, 1, 0, 0);
	glRotatef(-87.5, 0, 1, 1);
	glutSolidTeapot(.25);
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 0, 1);
	glTranslatef(-.75, -1, -5);
	glRotatef(-130, 0, 1, 1);
	glutSolidTeapot(.25);

	glPopMatrix();
}

void problem2() {
	// TODO: Your code here!

	// In this section I am going to make a scene of pyraimd Teapot
	glLoadIdentity();
	glColorMaterial(GL_FRONT, GL_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);
	glPushMatrix();
	// row one int triangle
	glColor3f(1, 0, 0);
	glTranslatef(-2.5, -1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.5, -1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-.5, -1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(.5, -1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, -1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(2.5, -1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////
	// row two int triangle
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 1, 0);
	glTranslatef(-2, -.5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1, -.5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, -.5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1, -.5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(2, -.5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////
	// row three  int triangle
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 0, 1);
	glTranslatef(-1.5, 0, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-.5, 0, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(.5, 0, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1.5, 0, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////
	// row four int triangle
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-1, .5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0, .5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(1, .5, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////
	// row five int triangle
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 0, 1);
	glTranslatef(-.5, 1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////
	glPopMatrix();
	glPushMatrix();
	glTranslatef(.5, 1, -6);
	glutSolidTeapot(.25);
	////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////
	// row six  int triangle
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 1, 1);
	glTranslatef(0, 1.5, -6);
	glutSolidTeapot(.25);
	
	glPopMatrix();
}

void problem3() {
	// TODO: Your code here! Your own creativity. 

	// Here i am going to create a cube and 3d traingle  with difference color of sides
	glLoadIdentity();
	glColorMaterial(GL_FRONT, GL_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);
	glPushMatrix();
	// draw Quade
	glTranslatef(3, .1, -9);
	glRotatef(45, 1, 1, 1);
	glBegin(GL_QUADS);
	//top
	glColor3f(1, 0, 0);
	glVertex3f(1, 1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);

	//botton
	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);

	//right
	glColor3f(0, 0, 1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, 1, 1);

	//left
	glColor3f(1, .5, .5);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);

	//back
	glColor3f(.4, .2, .3);
	glVertex3f(1, 1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);

	//front
	glColor3f(.4, .7, .1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glEnd();
	//////////////////
	//////////////////
	glPopMatrix();
	glPushMatrix();
	glColorMaterial(GL_FRONT, GL_DIFFUSE);
	glEnable(GL_COLOR_MATERIAL);
	glTranslatef(-3, .1, -7);
	glRotatef(135, 1, 1, 1);
	glBegin(GL_TRIANGLES);
	//front
	glColor3f(1, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);

	//right
	glColor3f(0, 1, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);

	//left
	glColor3f(0, 0, 1);
	glVertex3f(0, 1, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, -1, 1);

	//back
	glColor3f(1, 1, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(1, -1, 1);
	glVertex3f(1, -1, -1);
	glVertex3f(-1, -1, -1);
	glEnd();
	glPopMatrix();
}

void display() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glDisable(GL_LIGHTING);
	glEnable(GL_DEPTH_TEST);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0); glVertex3f(0, 0, 0); glVertex3f(1, 0, 0); // x axis
	glColor3f(0, 1, 0); glVertex3f(0, 0, 0); glVertex3f(0, 1, 0); // y axis
	glColor3f(0, 0, 1); glVertex3f(0, 0, 0); glVertex3f(0, 0, 1); // z axis
	glEnd(/*GL_LINES*/);
	
	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glEnable(GL_LIGHT0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// TODO: Your code here! Use glViewport() and gluPerspective() to setup projection matrix.
	glViewport(0, 0, windowWidth, windowHeight);
	glLoadIdentity();
	gluPerspective(45, (windowWidth /(float)windowHeight), 1, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	// TODO: Your code here! Use gluLookAt() to setup model-view matrix.
	gluLookAt(cameraPos[0], cameraPos[1], cameraPos[2],
		0, cameraPos[1], -10,
		0, 1, 0);
	glLightfv(GL_LIGHT0, GL_POSITION, cameraPos);

	glRotatef(yRot, 0, 1, 0);

	if (curProblem == 1) problem1();
	if (curProblem == 2) problem2();
	if (curProblem == 3) problem3();
	glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) leftDown = (state == GLUT_DOWN);
	else if (button == GLUT_RIGHT_BUTTON) rightDown = (state == GLUT_DOWN);

	lastPos[0] = x;
	lastPos[1] = y;
}

void mouseMoved(int x, int y) {
	if (leftDown) yRot += (x - lastPos[0])*.1;
	if (rightDown) {
		for (int i = 0; i < 3; i++)
			cameraPos[i] *= pow(1.1, (y - lastPos[1])*.1);
	}


	lastPos[0] = x;
	lastPos[1] = y;
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
	// TODO: Your code here! use key to switch between different scene, and set q, Q and Escape key as quit
	// SET 1 TO display problem 1
	if (key == '1')
		curProblem = 1;
	// SET 2 TO display problem 2
	if (key == '2')
		curProblem = 2;
	// SET 3 TO display problem 3
	if (key == '3')
		curProblem = 3;
		
	// set q, Q and Escape key as quitset q, Q and Escape key as quit
	// Escape code = 27
	// q code = 113
	// Q code = 81
	if (key == 27 || key == 113 || key == 81)
		exit(0);

	
	glutPostRedisplay();
}

void reshape(int width, int height) {
	windowWidth = width;
	windowHeight = height;
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("HW2");

	glutDisplayFunc(display);
	glutMotionFunc(mouseMoved);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);

	glutMainLoop();

	return 0;
}
