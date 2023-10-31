//#include <iostream>
//#include <cmath>
//#include <stack>
//#include <GL/glut.h>
//
//using namespace std;
//
//int rectangleWidth, rectangleLength;
//float fillColor[3] = { 0, 1, 1 }; // Default fill color (Cyan)
//
//void init() {
//    glClearColor(1.0, 1.0, 1.0, 1.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0, 600, 0, 500);
//}
//
//void flood_fill(int x, int y, float* oldColor) {
//    float color[3];
//    glReadPixels(x, y, 1.0, 1.0, GL_RGB, GL_FLOAT, color);
//
//    if (color[0] == oldColor[0] && color[1] == oldColor[1] && color[2] == oldColor[2]) {
//        if (color[0] != fillColor[0] || color[1] != fillColor[1] || color[2] != fillColor[2]) {
//            glColor3fv(fillColor);
//            glBegin(GL_POINTS);
//            glVertex2i(x, y);
//            glEnd();
//            glFlush();
//            flood_fill(x - 1, y, oldColor);
//            flood_fill(x + 1, y, oldColor);
//            flood_fill(x, y + 1, oldColor);
//            flood_fill(x, y - 1, oldColor);
//        }
//    }
//}
//
//void mouse(int btn, int state, int x, int y) {
//    y = 500 - y;
//    if (btn == GLUT_LEFT_BUTTON) {
//        if (state == GLUT_DOWN) {
//            float intColor[3];
//            glReadPixels(x, y, 1.0, 1.0, GL_RGB, GL_FLOAT, intColor);
//            flood_fill(x, y, intColor);
//        }
//    }
//}
//
//void rectangle() {
//    glPointSize(2);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0, 0, 0);
//    glBegin(GL_POLYGON);
//    glVertex2i(200, 200);
//    glVertex2i(200 + rectangleWidth, 200);
//    glVertex2i(200 + rectangleWidth, 200 + rectangleLength);
//    glVertex2i(200, 200 + rectangleLength);
//    glEnd();
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(600, 500);
//    glutInitWindowPosition(200, 200);
//    glutCreateWindow("Flood Fill");
//
//    cout << "Enter the width of the rectangle: ";
//    cin >> rectangleWidth;
//    cout << "Enter the length of the rectangle: ";
//    cin >> rectangleLength;
//
//    cout << "Enter the fill color (R G B): ";
//    cin >> fillColor[0] >> fillColor[1] >> fillColor[2];
//
//    glutDisplayFunc(rectangle);
//    glutMouseFunc(mouse);
//    init();
//    glutMainLoop();
//    return 0;
//}
