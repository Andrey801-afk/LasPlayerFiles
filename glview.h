#ifndef GLVIEW_H
#define GLVIEW_H

#include <QGLWidget>
#include <QMouseEvent>
#include <QTimer>

class glView: public QGLWidget
{
    QPoint mPosition;
    QTimer* mpTimer;
    float mScaleFactorX;
    float mScaleFactorY;

public:
    glView();
    ~glView();

    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mousePressEvent(QMouseEvent*) override;
};

#endif // GLVIEW_H
