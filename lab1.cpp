//#include <GL/glut.h>
//#include <cstdlib>
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int width = 1;
//struct GLColor
//{
//    GLfloat red;
//    GLfloat green;
//    GLfloat blue;
//};
//
//GLColor colors[6] =
//{
//    {1.0f, 0.0f, 0.0f}, //red
//    {0.0f, 1.0f, 0.0f},  // green
//    {0.0f, 0.0f, 1.0f},  //blue
//    {1.0f, 1.0f, 0.0f}, //yellow
//    {1.0f,1.0f,1.0f}, // white
//
//};
//GLColor color = colors[4];
//void drawQuad()
//{
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glBegin(GL_LINES);
//    glVertex2f(700 / 2, 0.0);
//    glVertex2f(700 / 2, 700);
//    glVertex2f(0.0, 700 / 2);
//    glVertex2f(700, 700 / 2);
//    glEnd();
//    glFlush();
//}
//
//void drawPixel(int x, int y)
//{
//    glColor3f(color.red, color.green, color.blue);
//    glPointSize(2);
//    glBegin(GL_POINTS);
//    glVertex2i(x, 700 - y);
//    glEnd();
//    glFlush();
//}
//int Algo = 1;
//
//int t = 1;
//void bresenhamLine(int xa, int ya, int xb, int yb)
//{
//    int dx = abs(xb - xa);
//    int dy = abs(yb - ya);
//    int x, y;
//    float m = (float)(yb - ya) / (float)(xb - xa);
//    float slope = atan(m);
//    if (dx >= dy)
//    {
//        int d = (2 * dy) - dx;
//        int ds = 2 * dy;
//        int dt = 2 * (dy - dx);
//        if (xa < xb)
//        {
//            x = xa;
//            y = ya;
//        }
//        else
//        {
//            x = xb;
//            y = yb;
//            xb = xa;
//            yb = ya;
//        }
//
//        drawPixel(x, y);
//        int i = 0;
//        int cnt = 1;
//        int steps = dx;
//        int pointsX[steps] = { 0 };
//        int pointsY[steps] = { 0 };
//        while (x < xb)
//        {
//            if (d < 0) d += ds;
//            else
//            {
//                if (y < yb)
//                {
//                    y++;
//                    d += dt;
//                }
//                else
//                {
//                    y--;
//                    d += dt;
//                }
//            }
//            x++;
//            //            drawPixel(x, y);
//            if (t == 1)
//            {
//                drawPixel(x, y);
//                pointsX[i - 1] = x;
//                pointsY[i - 1] = y;
//                int pointsXw[steps] = { 0 };
//                int pointsYw[steps] = { 0 };
//
//                int multiplier = 1;
//                for (int j = 1; j < width; j++)
//                {
//                    if (j % 2 == 0) multiplier = -1;
//                    else multiplier = 1;
//                    for (int i = 1; i <= steps; i++)
//                    {
//                        pointsXw[i - 1] = round(pointsX[i - 1] - (multiplier * j * sin(slope)));
//                        pointsYw[i - 1] = round(pointsY[i - 1] + (multiplier * j * cos(slope)));
//
//                        drawPixel(pointsXw[i - 1], pointsYw[i - 1]);
//                    }
//                }
//            }
//            if (t == 2)
//            {
//
//                if (i % 3 == 0)
//                {
//                    drawPixel(x, y);
//                }
//            }
//            if (t == 3)
//            {
//
//                if (cnt <= 10)
//                {
//                    drawPixel(x, y);
//
//                }
//                cnt++;
//                if (cnt == 15)
//                {
//                    cnt = 1;
//                }
//
//            }
//            i++;
//        }
//    }
//    else
//    {
//        int steps = dy;
//        int pointsX[steps] = { 0 };
//        int pointsY[steps] = { 0 };
//        int d = (2 * dx) - dy;
//        int ds = 2 * dx;
//        int dt = 2 * (dx - dy);
//        if (ya < yb)
//        {
//            x = xa;
//            y = ya;
//        }
//        else
//        {
//            x = xb;
//            y = yb;
//            yb = ya;
//            xb = xa;
//        }
//
//        drawPixel(x, y);
//        int i = 0;
//        int cnt = 1;
//
//        while (y < yb)
//        {
//            if (d < 0) d += ds;
//            else
//            {
//                if (x > xb)
//                {
//                    x--;
//                    d += dt;
//                }
//                else
//                {
//                    x++;
//                    d += dt;
//                }
//            }
//            y++;
//            if (t == 1)
//            {
//                drawPixel(x, y);
//                pointsX[i - 1] = x;
//                pointsY[i - 1] = y;
//                int pointsXw[steps] = { 0 };
//                int pointsYw[steps] = { 0 };
//
//                int multiplier = 1;
//                for (int j = 1; j < width; j++)
//                {
//                    if (j % 2 == 0) multiplier = -1;
//                    else multiplier = 1;
//                    for (int i = 1; i <= steps; i++)
//                    {
//                        pointsXw[i - 1] = round(pointsX[i - 1] - (multiplier * j * sin(slope)));
//                        pointsYw[i - 1] = round(pointsY[i - 1] + (multiplier * j * cos(slope)));
//
//                        drawPixel(pointsXw[i - 1], pointsYw[i - 1]);
//                    }
//                }
//            }
//            if (t == 2)
//            {
//
//                if (i % 3 == 0)
//                {
//                    drawPixel(x, y);
//                }
//            }
//            if (t == 3)
//            {
//
//                if (cnt <= 10)
//                {
//                    drawPixel(x, y);
//
//                }
//                cnt++;
//                if (cnt == 15)
//                {
//                    cnt = 1;
//                }
//
//            }
//            i++;
//        }
//    }
//}
//
//void symetricDDA(int x0, int y0, int xf, int yf)
//{
//    int dx = xf - x0;
//    int dy = yf - y0;
//    float Xincr, Yincr, x = x0, y = y0;
//    int n;
//    float m = (float)(yf - y0) / (float)(xf - x0);
//    float slope = atan(m);
//
//
//    int maxDiff = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
//
//    n = floor(log(maxDiff) / log(2)) + 1;
//    int steps = pow(2, n);
//    int pointsX[steps] = { 0 };
//    int pointsY[steps] = { 0 };
//
//    Xincr = float(dx) / float(steps);
//    Yincr = float(dy) / float(steps);
//
//    if (x0 != 0)
//    {
//        int cnt = 1;
//        int i;
//        for (i = 1; i <= steps; i++)
//        {
//            x += Xincr;
//            y += Yincr;
//            if (t == 1)
//            {
//                drawPixel(round(x), round(y));
//                pointsX[i - 1] = round(x);
//                pointsY[i - 1] = round(y);
//                int pointsXw[steps] = { 0 };
//                int pointsYw[steps] = { 0 };
//
//                int multiplier = 1;
//                for (int j = 1; j < width; j++)
//                {
//                    if (j % 2 == 0) multiplier = -1;
//                    else multiplier = 1;
//                    for (int i = 1; i <= steps; i++)
//                    {
//                        pointsXw[i - 1] = round(pointsX[i - 1] - (multiplier * j * sin(slope)));
//                        pointsYw[i - 1] = round(pointsY[i - 1] + (multiplier * j * cos(slope)));
//
//                        drawPixel(pointsXw[i - 1], pointsYw[i - 1]);
//                    }
//                }
//            }
//            if (t == 2)
//            {
//
//                if (i % 3 == 0)
//                {
//                    drawPixel(round(x), round(y));
//                }
//            }
//            if (t == 3)
//            {
//
//                if (cnt <= 10)
//                {
//                    drawPixel(round(x), round(y));
//
//                }
//                cnt++;
//                if (cnt == 15)
//                {
//                    cnt = 1;
//                }
//
//            }
//        }
//    }
//}
//
//
//void myDisplay(void)
//{
//    glColor3f(0.0, 0.0, 0.0);
//    glFlush();
//}
//
//
//
//
//void dda_simple(int x0, int y0, int xf, int yf, int t)
//{
//    int dx = xf - x0;
//    int dy = yf - y0;
//    int steps;
//    float Xincr, Yincr, x = x0, y = y0;
//    float m = (float)(yf - y0) / (float)(xf - x0);
//    float slope = atan(m);
//
//    steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
//
//    Xincr = (float)dx / (float)steps;
//    Yincr = (float)dy / (float)steps;
//    int pointsX[steps] = { 0 };
//    int pointsY[steps] = { 0 };
//
//    if (x0 != 0)
//    {
//        int cnt = 1;
//        int i;
//        for (i = 1; i <= steps; i++)
//        {
//            x += Xincr;
//            y += Yincr;
//            if (t == 1)
//            {
//                drawPixel(round(x), round(y));
//                pointsX[i - 1] = round(x);
//                pointsY[i - 1] = round(y);
//                int pointsXw[steps] = { 0 };
//                int pointsYw[steps] = { 0 };
//
//                int multiplier = 1;
//                for (int j = 1; j < width; j++)
//                {
//                    if (j % 2 == 0) multiplier = -1;
//                    else multiplier = 1;
//                    for (int i = 1; i <= steps; i++)
//                    {
//                        pointsXw[i - 1] = round(pointsX[i - 1] - (multiplier * j * sin(slope)));
//                        pointsYw[i - 1] = round(pointsY[i - 1] + (multiplier * j * cos(slope)));
//
//                        drawPixel(pointsXw[i - 1], pointsYw[i - 1]);
//                    }
//                }
//            }
//            if (t == 2)
//            {
//
//                if (i % 3 == 0)
//                {
//                    drawPixel(round(x), round(y));
//                }
//            }
//            if (t == 3)
//            {
//
//                if (cnt <= 10)
//                {
//                    drawPixel(round(x), round(y));
//
//                }
//                cnt++;
//                if (cnt == 15)
//                {
//                    cnt = 1;
//                }
//            };
//        }
//    }
//}
//
//void mymouse(int b, int s, int x, int y)
//{
//    static int x_s, y_s, x_e, y_e, pt = 0;
//    if (b == GLUT_LEFT_BUTTON && s == GLUT_DOWN)
//    {
//        if (pt == 0)
//        {
//            x_s = x;
//            y_s = y;
//            pt++;
//            glPointSize(5);
//            glColor3f(0.0, 1.0, 1.0);
//            glBegin(GL_POINTS);
//            glVertex2i(x_s, 700 - y_s);
//            glEnd();
//        }
//        else
//        {
//            x_e = x;
//            y_e = y;
//            std::cout << "\n x_1_click " << x_s << " y_1_click " << y_s;
//            std::cout << "\n x_2_click " << x_e << " y_2_click " << y_e << "\n";
//            glPointSize(5);
//            glColor3f(0.0, 1.0, 1.0);
//            glBegin(GL_POINTS);
//            glVertex2i(x_e, 700 - y_e);
//            glEnd();
//            if (Algo == 1)
//                dda_simple(x_s, y_s, x_e, y_e, t);
//            if (Algo == 2)
//                symetricDDA(x_s, y_s, x_e, y_e);
//            if (Algo == 3 || Algo == 4)
//                bresenhamLine(x_s, y_s, x_e, y_e);
//
//        }
//    }
//    else if (b == GLUT_MIDDLE_BUTTON)
//    {
//        pt = 0;
//    }
//    glFlush();
//}
//
//void myInit(void)
//{
//    glutInitDisplayMode(GLUT_SINGLE);
//    glutInitWindowSize(700, 700);
//    glutInitWindowPosition(0, 0);
//    glutCreateWindow("Line Drawing");
//    glClearColor(0.0, 0.0, 0.0, 0.0);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0.0, 700, 0.0, 700, 1.0, -1.0);
//}
//void lineAlgo(int choice)
//{
//
//    switch (choice)
//    {
//    case 1:
//        Algo = 1;
//        break;
//
//    case 2:
//        Algo = 2;
//        break;
//
//    case 3:
//        Algo = 3;
//        break;
//
//    case 4:
//        Algo = 4;
//        break;
//    }
//}
//void colorrr(int choice)
//{
//    color = colors[choice];
//}
//
//void typeWidth(int t)
//{
//    width = t;
//}
//
//void typeMenu(int choice)
//{
//    switch (choice)
//    {
//    case 1:
//        t = 1;
//        break;
//    case 2:
//        t = 2;
//        break;
//    case 3:
//        t = 3;
//        break;
//    }
//}
//
//void mainMenuHandler(int choice)
//{
//    if (choice == 0)
//        exit(0);
//}
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//
//    myInit();
//    drawQuad();
//    glutMouseFunc(mymouse);
//    glutDisplayFunc(myDisplay);
//
//
//    int subMenu_lineAlgo = glutCreateMenu(lineAlgo);
//    glutAddMenuEntry("Default", 1);
//    glutAddMenuEntry("DDA_Simple", 1);
//    glutAddMenuEntry("DDA_Symm", 2);
//    glutAddMenuEntry("Bresenham", 3);
//    glutAddMenuEntry("Midpoint", 4);
//
//    int subMenu_color = glutCreateMenu(colorrr);
//    glutAddMenuEntry("Default", 4);
//    glutAddMenuEntry("Green", 1);
//    glutAddMenuEntry("Blue", 2);
//    glutAddMenuEntry("Yellow", 3);
//    glutAddMenuEntry("Red", 0);
//    glutAddMenuEntry("White", 4);
//
//    int subMenu_lineType = glutCreateMenu(typeMenu);
//    glutAddMenuEntry("Normal", 1);
//    glutAddMenuEntry("Dotted", 2);
//    glutAddMenuEntry("Dashed", 3);
//
//    int subMenu_width = glutCreateMenu(typeWidth);
//    glutAddMenuEntry("Default", 1);
//    glutAddMenuEntry("2", 2);
//    glutAddMenuEntry("3", 3);
//    glutAddMenuEntry("4", 4);
//    glutAddMenuEntry("5", 5);
//    glutAddMenuEntry("6", 6);
//
//    glutCreateMenu(mainMenuHandler);
//    glutAddSubMenu("line algo", subMenu_lineAlgo);
//    glutAddSubMenu("Color", subMenu_color);
//    glutAddSubMenu("type", subMenu_lineType);
//    glutAddSubMenu("width", subMenu_width);
//    glutAddMenuEntry("exit", 0);
//
//    glutAttachMenu(GLUT_RIGHT_BUTTON);
//
//    glutMainLoop();
//    return 0;
//}