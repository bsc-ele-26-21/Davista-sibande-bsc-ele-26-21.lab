#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:
    Rectangle();
    ~Rectangle();

    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;
    float getArea() const;

private:
    float length;
    float width;
};

#endif // RECTANGLE_H