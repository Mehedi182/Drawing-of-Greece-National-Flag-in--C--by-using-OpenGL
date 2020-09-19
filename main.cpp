#include <windows.h>
#include <GL/glut.h>
void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);


/* Blue Primitives part*/
glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-7.0,-5.0);
glVertex2f(-7.0,-6.0);
glVertex2f(7.0,-6.0);
glVertex2f(7.0,-5.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,-4.0);
glVertex2f(7.0,-3.0);
glVertex2f(-7.0,-3.0);
glVertex2f(-7.0,-4.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,-1.0);
glVertex2f(7.0,-2.0);
glVertex2f(-2.0,-2.0);
glVertex2f(-2.0,-1.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-4.0,0);
glVertex2f(-4.0,-2.0);
glVertex2f(-2.0,-2.0);
glVertex2f(-2.0,0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-2.0,1.0);
glVertex2f(-4.0,1.0);
glVertex2f(-4.0,3.0);
glVertex2f(-2.0,3.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-5.0,1.0);
glVertex2f(-7.0,1.0);
glVertex2f(-7.0,3.0);
glVertex2f(-5.0,3.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-5.0,0.0);
glVertex2f(-7.0,0.0);
glVertex2f(-7.0,-2.0);
glVertex2f(-5.0,-2.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,0.0);
glVertex2f(7.0,1.0);
glVertex2f(-2.0,1.0);
glVertex2f(-2.0,0.0);
glEnd();

glColor3f(0,0,.6);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,2.0);
glVertex2f(7.0,3.0);
glVertex2f(-2.0,3.0);
glVertex2f(-2.0,2.0);
glEnd();

/*White primitive part*/
glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,-5.0);
glVertex2f(7.0,-4.0);
glVertex2f(-7.0,-4.0);
glVertex2f(-7.0,-5.0);
glEnd();

glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,-2.0);
glVertex2f(7.0,-3.0);
glVertex2f(-7.0,-3.0);
glVertex2f(-7.0,-2.0);
glEnd();

glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,0.0);
glVertex2f(7.0,-1.0);
glVertex2f(-2.0,-1.0);
glVertex2f(-2.0,0.0);
glEnd();

glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(7.0,1.0);
glVertex2f(7.0,2.0);
glVertex2f(-2.0,2.0);
glVertex2f(-2.0,1.0);
glEnd();

glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-7.0,0.0);
glVertex2f(-7.0,1.0);
glVertex2f(-2.0,1.0);
glVertex2f(-2.0,0.0);
glEnd();

glColor3f(1,1,1);
glLineWidth(2.5);
glBegin(GL_POLYGON);
glVertex2f(-4.0,3.0);
glVertex2f(-5.0,3.0);
glVertex2f(-5.0,-2.0);
glVertex2f(-4.0,-2.0);
glEnd();

glFlush();

}
void Initialize()
{
glClearColor(0, 0, 0, 0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}
int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(476, 477);
glutInitWindowPosition(250, 250);
glutCreateWindow("Flag of Greece");
Initialize();
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
