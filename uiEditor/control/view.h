#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <iostream>
using namespace std;

class view : public QWidget
{
    Q_OBJECT
public:
    explicit view(QWidget *parent = 0);
protected:
    float mWidth;
    float mHeight;
    float mX;
    float mY;
    float mZ;
    string mRelativeTo;
    string mRelativePoint;
    string mPoint;
    bool mHide;
signals:

    
public slots:
    
};

#endif // VIEW_H
