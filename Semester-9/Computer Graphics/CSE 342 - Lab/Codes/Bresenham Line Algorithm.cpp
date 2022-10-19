#include<windows.h>
#include<bits/stdc++.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

//Global 1D array or variables
int xx,xx2,yy,yy2;
void pp()
{
     glBegin(GL_POINTS);
            glVertex2i();
    glEnd();
}
void print_point()
{

    glFlush();
}

void display ()
{
        //call print_point function with parameters
}

void init(void)
{
    glClearColor(0.7,0.7,0.7,0.7);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100,100,-100,100);
}

int main (int argc, char **argv)
{
    cin>>xx>>yy>>xx2>>yy2; //user input for co-ordinates
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow(" Bresenham Line Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}

