#include "myopenglwidget.h"

myopenglWidget::myopenglWidget(QWidget *parent)
    :QOpenGLWidget(parent)
{
    initializeGL();
    resizeGL(100,100);
    paintGL();
}

myopenglWidget::~myopenglWidget()
{
}

void myopenglWidget::initializeGL()
{
    initializeOpenGLFunctions();
    // 设置背景颜色
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
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
