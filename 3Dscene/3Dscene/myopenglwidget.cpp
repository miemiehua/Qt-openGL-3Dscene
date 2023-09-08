#include "myopenglwidget.h"

myopenglWidget::myopenglWidget(QWidget *parent)
    :QOpenGLWidget(parent)
{

}

myopenglWidget::~myopenglWidget()
{
}

void myopenglWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void myopenglWidget::resizeGL(int w, int h)
{

}

void myopenglWidget::paintGL()
{

}

void myopenglWidget::paintEvent(QPaintEvent *e)
{

}

void myopenglWidget::resizeEvent(QResizeEvent *e)
{

}
