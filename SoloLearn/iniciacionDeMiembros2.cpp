#include <iostream>
using namespace std;

class TV {
    public:
        TV(int h, int w): height(h), width(w) {};
        void area() {
            cout <<height*width;
        }
    private:
        int height;
        int width;
};

int main() {
   //your code goes here
   int height, width ;
   cin >> height >> width;
   TV tv (height, width);
   tv.area();
}
