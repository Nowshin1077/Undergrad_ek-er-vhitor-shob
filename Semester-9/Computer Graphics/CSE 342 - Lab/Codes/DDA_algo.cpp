#include<windows.h>
#include<bits/stdc++.h>
#include<GL/glut.h>
#include<stdlib.h>
using namespace std;
float x1,x2,y3,y4;

void display(void)
{
    float dx,dy,s,vx,vy;
    dx=x2-x1;
    dy=y4-y3;
    vx=x1, vy=y3;
    if(abs(dx)>abs(dy))
        s=dx;
    else
        s=dy;

    for(int i=x1;i<=x2;i++){
        vx=vx+ (dx/s);
        vy=vy + (dy/s);
        vx=round(vx);
        vy=round(vy);

        glBegin(GL_POINTS);
            glVertex2i(vx,vy);
        glEnd();
    }
    glFlush();
}

void init (void){
    glClearColor(0.7,0.7,0.7,0.7);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100,100,-100,100);
}

int main(int argc, char **argv)
{
    cin>>x1>>y3>>x2>>y4;
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("DDA Line Algorithm");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
