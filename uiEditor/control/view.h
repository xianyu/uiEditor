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
    float mWidth ;//= 0;
    float mHeight;// = 0;
    float x ;//= 0;
    float y;// = 0;
    string relativeTo ;//= "";
    string relativePoint;// = "";
    string point ;//= "";
signals:
    
public slots:
    
};

#endif // VIEW_H
