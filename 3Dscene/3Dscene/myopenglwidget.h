#ifndef MYOPENGLWIDGET_H
#define MYOPENGLWIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QOpenGLFunctions>
#include <QOpenGLTexture>
#include <QtOpenGL>

class myopenglWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    myopenglWidget(QWidget *parent = nullptr);
    ~myopenglWidget();

protected:

    void initializeGL() override;

    void resizeGL(int w, int h) override;

    void paintGL() override;

    void paintEvent(QPaintEvent *e) override;

    void resizeEvent(QResizeEvent *e) override;

private:

};

#endif // MYOPENGLWIDGET_H
