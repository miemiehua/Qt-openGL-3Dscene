#ifndef MYOPENGLWIDGET_H
#define MYOPENGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>

class myopenglWidget : public QOpenGLWidget
{
public:
    myopenglWidget(QWidget *parent = nullptr);
    ~myopenglWidget();
private:
};

#endif // MYOPENGLWIDGET_H
