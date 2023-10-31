//#include <iostream>
//#include <GL/glut.h>
//#include <cmath>
//
//using namespace std;
//
//int rows = 5; // Number of rows
//int cols = 5; // Number of columns
//int squareSize; // Default square size
//int selectedLeafX = -1; // X-coordinate of the selected leaf
//int selectedLeafY = -1; // Y-coordinate of the selected leaf
//bool leafClicked = false; // Flag to indicate if a leaf was clicked
//
//void grid(int x, int y, int size)
//{
//    if (x == selectedLeafX && y == selectedLeafY && leafClicked) {
//        glColor3f(0.0f, 1.0f, 0.0f); // Change the color of the selected leaf
//    }
//    else {
//        glColor3f(0.0f, 0.0f, 0.0f);
//    }
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
//    if (x == selectedLeafX && y == selectedLeafY && leafClicked) {
//        glColor3f(0.0f, 1.0f, 0.0f); // Change the color of the selected leaf
//    }
//    else {
//        glColor3f(0.0f, 0.0f, 0.0f);
//    }
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
//void mouseClick(int button, int state, int x, int y)
//{
//    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
//        int gridX = x / (glutGet(GLUT_WINDOW_WIDTH) / cols);
//        int gridY = (glutGet(GLUT_WINDOW_HEIGHT) - y) / (glutGet(GLUT_WINDOW_HEIGHT) / rows);
//        selectedLeafX = gridX * (glutGet(GLUT_WINDOW_WIDTH) / cols);
//        selectedLeafY = (rows - gridY - 1) * (glutGet(GLUT_WINDOW_HEIGHT) / rows);
//        leafClicked = true;
//        glutPostRedisplay();
//    }
//}
//
//void init()
//{
//    glClearColor(1.0, 1.0, 1.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//    glutMouseFunc(mouseClick);
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
//    cout << "Enter the size of the square's edge: ";
//    cin >> squareSize;
//
//    cout << "Enter the number of repetitions in x-axis: ";
//    cin >> cols;
//    cout << "Enter the number of repetitions in y-axis: ";
//    cin >> rows;
//
//    glutDisplayFunc(display);
//    init();
//    glutMainLoop();
//    return 0;
//}
