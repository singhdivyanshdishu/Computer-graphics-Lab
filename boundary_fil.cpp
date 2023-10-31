//#include <iostream>
//#include <math.h>
//#include <time.h>
//#include <GL/glut.h>
//
//using namespace std;
//
//void init() {
//    glClearColor(1.0, 1.0, 1.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(0, 640, 0, 480);
//}
//
////getting colour of a pisel in form of float array
//void getPixel(int x, int y, float color[3]) {
//    glReadPixels(x, y, 1.0, 1.0, GL_RGB, GL_FLOAT, color);
//}
//
////boundary filling method
//void boundary_fill(int x, int y, float* fillColor, float* boundarycolor) {
//    float color[3];
//    getPixel(x, y, color);
//
//    if ((color[0] != boundarycolor[0] || color[1] != boundarycolor[1] || color[2] != boundarycolor[2]) && (
//        color[0] != fillColor[0] || color[1] != fillColor[1] || color[2] != fillColor[2])) {
//        glColor3f(fillColor[0], fillColor[1], fillColor[2]);
//        glBegin(GL_POINTS);
//        glVertex2i(x, y);
//        glEnd();
//        glFlush();
//
//        //recursive 8-way filling
//        boundary_fill(x, y + 1, fillColor, boundarycolor);
//        boundary_fill(x + 1, y, fillColor, boundarycolor);
//        boundary_fill(x, y - 1, fillColor, boundarycolor);
//        boundary_fill(x - 1, y, fillColor, boundarycolor);
//
//        boundary_fill(x + 1, y + 1, fillColor, boundarycolor);
//        boundary_fill(x + 1, y - 1, fillColor, boundarycolor);
//        boundary_fill(x - 1, y - 1, fillColor, boundarycolor);
//        boundary_fill(x - 1, y + 1, fillColor, boundarycolor);
//
//    }
//}
//
////mouse click to fill method
//void mouse(int btn, int state, int x, int y) {
//    y = 480 - y;
//    if (btn == GLUT_LEFT_BUTTON)
//    {
//        if (state == GLUT_DOWN)
//        {
//            float boundarycolor[] = { 0,1,0 };
//            float fill[] = { 0,0,1 };
//            boundary_fill(x, y, fill, boundarycolor);
//        }
//    }
//}
////drawing polygon
//void triangle() {
//    glLineWidth(3);
//    glPointSize(2);
//    glClear(GL_COLOR_BUFFER_BIT);
//    glColor3f(0, 1, 0);
//    glBegin(GL_LINE_LOOP);
//    glVertex2i(150, 150);
//    glVertex2i(250, 400);
//    glVertex2i(450, 400);
//    glVertex2i(350, 150);
//    glEnd();
//    glFlush();
//}
//
//// Main method
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(640, 480);
//    glutInitWindowPosition(200, 200);
//    glutCreateWindow("boundary fill");
//    glutDisplayFunc(triangle);
//    glutMouseFunc(mouse);
//    init();
//    glutMainLoop();
//    return 0;
//}