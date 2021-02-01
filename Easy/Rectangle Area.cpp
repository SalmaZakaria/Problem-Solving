#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
public:
    int width;
    int height;

    void display() {
        cout << height <<  " " << width << endl;
    }
};
class RectangleArea : public Rectangle {
public:
    int h, w;
    void read_input() {
        
        cin >> h >> w;
        width = w;
        height = h;
    }
    void display() {
        cout << width * height << endl;
    }
};
