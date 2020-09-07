#include <GL/glut.h>
using namespace std;
//Need to add glu library when compliling
void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex3f(0.5, 0.0, 0.5);
		glVertex3f(0.5, 0.0, 0.0);
		glVertex3f(0.3, 0.5, 0.0);
		glVertex3f(0.0, 0.0, 0.5);
	glEnd();
	glFlush();
}

int main(int argc, char** argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(400, 400);
	glutCreateWindow("Hello World");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

