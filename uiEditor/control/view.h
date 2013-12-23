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
    view *mRelativeTo;
    view *mRelativePoint;
    view *mPoint;
    bool mHide;
    inline float getX(){return this->mX;};
    inline float getY(){return this->mY;};
    inline float getZ(){return this->mZ;};
    inline float getWidth(){return this->mWidth;};
    inline float getHeight(){return this->mHeight;};
    inline view  *getRelativeTo(){return this->mRelativeTo;};
    inline view  *getRelativePoint (){return this->mRelativePoint;};
    inline view  *getPoint(){return this->mPoint;};
    inline bool getHide(){return this->mHide;};
    inline void setX(float x){this->mX = x;};
    inline void setY(float y){this->mX = y;};
    inline void setZ(float z){this->mZ = z;};
    inline void setWidth(float width){this->mWidth = width;};
    inline void setHeight(float height){this->mHeight = height;};
    inline void setRelativeTo(view *relativeTo){this->mRelativeTo = relativeTo;};
    inline void setHide(bool isHide){this->mHide = isHide;};
signals:

    
public slots:
    
};

#endif // VIEW_H
