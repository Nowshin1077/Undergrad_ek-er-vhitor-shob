#include<windows.h>
#include<bits/stdc++.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int Radius,xc,yc;
void pp(int x,int y)
{
    glBegin(GL_POINTS);
            glVertex2i(x,y);
    glEnd();
}
void make_symmetry(int x,int y)
{
    ///8 symmetry points
    ///call pp() 8 times to plot pixels
}

void display ()
{
    ///algorithm
    glFlush();
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
    cout<<"Give Center Co-ordinates"<<endl;
    cin>>xc>>yc;
    cout<<"Give Circle Radius"<<endl;
    cin>>Radius;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow(" Bresenham Circle Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
