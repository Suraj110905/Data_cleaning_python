#include <iostream>
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
   protected:
      int width;
      int height;
};

// Super derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

// Derived class
class ColoredRectangle: public Rectangle {
   public:
      void setColor(string c) {
         color = c;
      }
      string getColor() {
         return color;
      }
      int getArea() {
         return (width * height); 
      }
   private:
      string color;
};

int main(void) {
   ColoredRectangle rect;

   rect.setWidth(5);
   rect.setHeight(7);
   rect.setColor("Red");

   // Print the area of the object.
   cout << "Total area: " << rect.getArea() << endl;
   // Print the color of the object.
   cout << "Color: " << rect.getColor() << endl;

   return 0;
}

