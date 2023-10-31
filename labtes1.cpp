//#include <iostream>
//#include <GL/glut.h>
//#include <cmath>
//using namespace std;
//int rows; // Number of rows
//int cols; // Number of columns
//int squareSize; // Default square size
//
//void grid(int x, int y, int size)
//{
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glBegin(GL_LINE_LOOP);
//    glVertex2i(x, y);
//    glVertex2i(x, y + size);
//    glVertex2i(x + size, y + size);
//    glVertex2i(x + size, y);
//    glEnd();
//}
//
//void drawSemicircle(int x, int y, int radius, float angle)
//{
//    glColor3f(0.0f, 0.0f, 0.0f);
//    glBegin(GL_LINE_STRIP);
//
//    for (int i = 0; i <= 180; i++)
//    {
//        float radian_angle = (i + angle) * 3.14159265 / 180;
//        float x_pos = x + radius * cos(radian_angle);
//        float y_pos = y - radius * sin(radian_angle);
//        glVertex2f(x_pos, y_pos);
//    }
//
//    glEnd();
//}
//
//void display(void)
//{
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0.0, 0.0, 0.0);
//    glPointSize(1.0);
//
//    int windowWidth = glutGet(GLUT_WINDOW_WIDTH);
//    int windowHeight = glutGet(GLUT_WINDOW_HEIGHT);
//
//    //int squareSize = windowWidth / cols;
//
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++) {
//            int x = j * squareSize;
//            int y = i * squareSize;
//
//            grid(x, y, squareSize);
//
//            int radius = squareSize / 2;
//            int centerX = x + squareSize / 2;
//            int centerY = y + squareSize;
//
//            drawSemicircle(centerX, centerY, radius, 0);
//            drawSemicircle(centerX, y, radius, 180);   
//            drawSemicircle(x + squareSize, centerY - radius, radius, 90); 
//            drawSemicircle(x, centerY - radius, radius, -90); 
//        }
//    }
//
//    glFlush();
//}
//
//void init()
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(800, 600);
//    glutInitWindowPosition(100, 150);
//    glutCreateWindow("Window");
//
//   
//    cout << "Enter the size of the square's edge: ";
//    cin >> squareSize;
//    cout << " Enter the no. of repetition in x axis: ";
//    cin >> rows;
//    cout << " Enter the no. of repetition in y axis: ";
//    cin >> cols;
//    glutDisplayFunc(display);
//    init();
//    glutMainLoop();
//    return 0;
//}
