#include<iostream>
#include<vector>
#include<GL/glut.h>
#include<string>

using namespace std;

string message = "CONVEX HULL";

string end_message = "THANK YOU";

string button_text  = "VISUALIZE CONVEX HULL";

string top_text1 = "COMPUTER GRAPHICS";

string top_text2 = "PROJECT";

string bottom_text1 = "MADE BY ==> ";

string bottom_text2 = "N . DEEPAK KUMAR";

string bottom_text3 = "15GAEC9044";

string bottom_text4 = "UNDER THE GUIDANCE OF SHREYAS SIR";

string text1 = "Convex hull starts in 4";

string text2 = "Convex hull starts in 3";

string text3 = "Convex hull starts in 2";

string text4 = "Convex hull starts in 1";

string text5 = "Convex hull starts in 0";

float angle = 0.0;

int i,l,m,n,cnt = 0,polygon_edge_no = 0,size_triplets = 0,cnt1 = 0,val = 0,no_of_points,val_front_disp = 0;

vector< pair<int,int> > vp;

vector< pair<int,int> > convex_point1;

vector< pair<int,int> > convex_point2;

vector< pair<int,pair< int,int > > > triplets;


void display()
{

    int len,len_text;
    glClear(GL_COLOR_BUFFER_BIT);
    if(val_front_disp == 0)
    {
        glLoadIdentity();
        glColor3f(0.576471, 0.858824, 0.439216);
        glBegin(GL_QUADS);
        glVertex2f(0.0,0.0);
        glVertex2f(4000.0,0.0);
        glVertex2f(4000.0,2400.0);
        glVertex2f(0.0,2400.0);
        glEnd();
        glColor3f(0.858824, 0.858824, 0.439216);
        glBegin(GL_QUADS);
        glVertex2f(0.0,2400.0);
        glVertex2f(4000.0,2400.0);
        glVertex2f(4000.0,4000.0);
        glVertex2f(0.0,4000.0);
        glEnd();
        glColor3f(0.52, 0.37, 0.26);
        glBegin(GL_QUADS);
        glVertex2f(1000.0,2440.0);
        glVertex2f(3000.0,2440.0);
        glVertex2f(3000.0,2740.0);
        glVertex2f(1000.0,2740.0);
        glEnd();

        glLineWidth(3.45);
        glTranslatef(1170.0, 2540.0, 0.0);
        glColor3f(0.847059, 0.847059, 0.74902);
        glPushMatrix();
        len = button_text.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, button_text[i]);
        glPopMatrix();

        glLineWidth(2.0);
        glLoadIdentity();
        glTranslatef(1300.0, 3700, 0.0);
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        len = top_text1.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, top_text1[i]);
        glPopMatrix();

        glLineWidth(2.0);
        glLoadIdentity();
        glTranslatef(1700.0, 3300, 0.0);
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        len = top_text2.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, top_text2[i]);
        glPopMatrix();

        glLineWidth(2.0);
        glLoadIdentity();
        glTranslatef(1000.0, 2000, 0.0);
        glColor3f(0.0 , 0.0, 0.0);
        glPushMatrix();
        len = bottom_text1.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, bottom_text1[i]);
        glPopMatrix();

        glLineWidth(2.0);
        glLoadIdentity();
        glTranslatef(1850.0, 1750, 0.0);
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        len = bottom_text2.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, bottom_text2[i]);
        glPopMatrix();

        glLineWidth(2.0);
        glLoadIdentity();
        glTranslatef(1830.0, 1550, 0.0);
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        len = bottom_text3.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, bottom_text3[i]);
        glPopMatrix();

        glLineWidth(2.0);
        glLoadIdentity();
        glTranslatef(600.0, 700, 0.0);
        glColor3f(0.0,0.0,0.0);
        glPushMatrix();
        len = bottom_text4.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_ROMAN, bottom_text4[i]);
        glPopMatrix();


        glutSwapBuffers();
    }
    else
    {
    if(val < 5)
    {
        glLineWidth(7.0);
        glLoadIdentity();
        glTranslatef(0, 2000, 0);
        glColor3f(0.847059, 0.847059, 0.65930);
        glPushMatrix();
        glTranslatef(700, 0, 0);
        if(val == 0)
        {

        len_text = text1.size();
        for (i = 0; i < len_text; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, text1[i]);
        }
        else
            if(val == 1)
        {
            len_text = text2.size();
        for (i = 0; i < len_text; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, text2[i]);
        }
        else
            if(val == 2)
        {
            len_text = text3.size();
        for (i = 0; i < len_text; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, text3[i]);
        }
        else
            if(val == 3)
        {
            len_text = text4.size();
        for (i = 0; i < len_text; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, text4[i]);
        }
        else
            if(val == 4)
        {
            len_text = text5.size();
        for (i = 0; i < len_text; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, text5[i]);
        }


        glPopMatrix();

        val++;

        glutSwapBuffers();
    }
    else
    {
    if(cnt == no_of_points && cnt1 < size_triplets)
    {
        glLineWidth(10.0);
        glLoadIdentity();
        glTranslatef(2000, 3000, 0);
        glColor3f(0.847059, 0.847059, 0.74902);
        glPushMatrix();
        glRotatef(angle, 0.0, 0.0, 1.0);
        glTranslatef(-650, 0, 0);
        len = message.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, message[i]);
        glPopMatrix();
    }

    if(cnt == no_of_points && cnt1 == size_triplets)
    {
        glLineWidth(8.0);
        glLoadIdentity();
        glTranslatef(2000, 3000, 0);
        glColor3f(0.847059, 0.847059, 0.74902);
        glPushMatrix();
        glRotatef(angle, 0.0, 0.0, 1.0);
        glTranslatef(-465, 0, 0);
        len = end_message.size();
        for (i = 0; i < len; i++)
          glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN, end_message[i]);
        glPopMatrix();

        glLoadIdentity();

        glPointSize(14.0);
        glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POINTS);
        for(i = 0; i <= cnt-1 ;i++)
            glVertex2f(vp[i].first,vp[i].second);
        glEnd();

        glLineWidth(4.0);
        glColor3f(1.0, 1.0, 1.0);
                    glBegin(GL_LINES);
            for(i = 0;i < polygon_edge_no; i++)
            {
                glVertex2f(convex_point1[i].first, convex_point1[i].second);
                glVertex2f(convex_point2[i].first, convex_point2[i].second);
            }
            glEnd();
    }

    if(cnt < no_of_points)
    {
        glLoadIdentity();
        glPointSize(14.0);
        glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POINTS);
        for(i = 0; i <= cnt;i++)
            glVertex2f(vp[i].first, vp[i].second);
        glEnd();
        cnt++;
    }

    if(cnt == no_of_points && cnt1 < size_triplets)
    {
        glLoadIdentity();
        glPointSize(14.0);
        glColor3f(1.0, 1.0, 0.0);
        glBegin(GL_POINTS);
        for(i = 0; i <= cnt-1;i++)
            glVertex2f(vp[i].first, vp[i].second);
        glEnd();

        glLineWidth(4.0);
        glColor3f(1.0, 0.0, 0.0);
        glBegin(GL_LINES);
        glVertex2f(vp[l].first, vp[l].second);
        glVertex2f(vp[m].first, vp[m].second);
        glEnd();
        glColor3f(0.0, 0.0, 1.0);
        glBegin(GL_POINTS);
        glVertex2f(vp[n].first, vp[n].second);
        glEnd();
        cnt1++;
        if(n == no_of_points-1)
        {
            if((convex_point1[polygon_edge_no].first == vp[l].first) && (convex_point1[polygon_edge_no].second == vp[l].second))
            {
                if((convex_point2[polygon_edge_no].first == vp[m].first) && (convex_point2[polygon_edge_no].second == vp[m].second))
                {
            polygon_edge_no++;
                }
        }

    }

    glColor3f(1.0, 1.0, 1.0);
                    glBegin(GL_LINES);
            for(i = 0; i < polygon_edge_no; i++)
            {
                glVertex2f(convex_point1[i].first, convex_point1[i].second);
                glVertex2f(convex_point2[i].first, convex_point2[i].second);
            }
            glEnd();
    }


    glutSwapBuffers();
    }
    }

}

void render_frame_for_redisplay()
{
    if(val < 5)
    {
        Sleep(1500);
        glutPostRedisplay();
    }
    else
        if(cnt < no_of_points)
        {
        Sleep(400);
        glutPostRedisplay();
        }
    else
        if(cnt == no_of_points)
    {
        if(cnt1 < size_triplets)
        {
            Sleep(400);
            l = triplets[cnt1].first;
            m = triplets[cnt1].second.first;
            n = triplets[cnt1].second.second;
        }
        else
            if(cnt1 == size_triplets)
        {
            angle = angle - 0.01;
            glutPostRedisplay();
        }


        glutPostRedisplay();
    }
}

void mouse(int btn, int state, int x, int y)
{
    if(val_front_disp == 0)
    {

 if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN)
 {
     val_front_disp = 1;
     glutPostRedisplay();
 }
    }

}


/*void myReshape(int w, int h)
{

 glViewport(0, 0, w, h);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();

 if (w <= h)
 gluOrtho2D(0.0, 4000.0, 0.0, 4000.0 * (GLfloat) h / (GLfloat) w);
 else
 gluOrtho2D(0.0, 4000.0 * (GLfloat) w / (GLfloat) h, 0.0, 4000.0);

 glMatrixMode(GL_MODELVIEW);

}*/


void findConvexPolygon()
{
    int i1,j1,k1,dx,dy;
    for(i1 = 0; i1 < no_of_points; i1++)
    {
        for(j1 = i1 + 1; j1 < no_of_points; j1++)
        {
            int flag1 = -1,flag2 = -1;
            dx = vp[j1].first - vp[i1].first;
            dy = vp[j1].second - vp[i1].second;
            for(k1 = 0; k1 < no_of_points; k1++)
            {
                int val;
                val = vp[k1].first * dy - vp[k1].second * dx - vp[i1].first * dy + vp[i1].second * dx;
                if(val >= 0)
                    flag1 = 1;
                else
                {
                    flag1 = 0;
                    break;
                }
            }
            for(k1 = 0; k1 < no_of_points; k1++)
            {
                int val;
                val = vp[k1].first * dy - vp[k1].second * dx - vp[i1].first * dy + vp[i1].second * dx;
                if(val <= 0)
                    flag2 = 1;
                else
                {
                    flag2 = 0;
                    break;
                }
            }
            for(k1 = 0; k1 < no_of_points; k1++)
            {
                triplets.push_back(make_pair(i1, make_pair(j1, k1)));
                size_triplets++;
            }
            if(flag1 == 1 || flag2 == 1)
            {
                convex_point1.push_back(make_pair(vp[i1].first, vp[i1].second));
                convex_point2.push_back(make_pair(vp[j1].first, vp[j1].second));
            }
        }
    }
}


int main(int argc,char** argv)
{
    cout<<"Enter the number of points here \n";
    cin>>no_of_points;
    if(no_of_points <= 2)
    {
        cout<<"CONVEX HULL NOT POSSIBLE\n";
        exit(0);
    }
    for(i = 1; i <= no_of_points; i++)
    vp.push_back(make_pair((rand()*rand())%4000, rand()%2000));
  findConvexPolygon();
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(1000,1000);
  glutInitWindowPosition(500,0);
  glutCreateWindow("brute force");
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0.0,4000.0,0.0,4000.0);
  glMatrixMode(GL_MODELVIEW);
  glEnable(GL_LINE_SMOOTH);
  glEnable(GL_POINT_SMOOTH);
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
  glClearColor(0.0, 0.0, 0.0, 1.0);
  //glutReshapeFunc(myReshape);
  glutDisplayFunc(display);
  glutIdleFunc(render_frame_for_redisplay);
  glutMouseFunc(mouse);
  glutMainLoop();
  return 0;

}
