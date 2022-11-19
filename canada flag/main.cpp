#include<windows.h>
#include <GL/glut.h>

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 60.0, 0.0, 50.0);
}

void drawShapes(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window

	//Set colour to black
	glColor3f(0.0, 0.0, 0.0);
	//Adjust the point size
	glPointSize(1.0);

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(10,10);
		glVertex2i(50,10);
		glVertex2i(50,40);
		glVertex2i(10,40);
	glEnd();

	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(20,10);
		glVertex2i(40,10);
		glVertex2i(40,40);
		glVertex2i(20,40);
	glEnd();


	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);

		glVertex2i(29.5,20);
		glVertex2i(26,19);
		glVertex2i(27,21);
		glVertex2i(24,26);
		glVertex2i(25,27);
		glVertex2i(23,30);
		glVertex2i(26,29);
		glVertex2i(26,31);
		glVertex2i(28,28);
		glVertex2i(27,33);
		glVertex2i(28,32);
		glVertex2i(30,37);
		glVertex2i(32,32);
		glVertex2i(33,33);
		glVertex2i(32,28);
		glVertex2i(34,31);
		glVertex2i(34,29);
		glVertex2i(37,30);
		glVertex2i(35,27);
		glVertex2i(36,26);
		glVertex2i(33,21);
		glVertex2i(34,19);
		glVertex2i(31.5,20);
		glVertex2i(31,14);
		glVertex2i(29,14);
	glEnd();




	glFlush();	// Process all OpenGL routines
}

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(50, 100);				// Set window position
	glutInitWindowSize(400, 300);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}
