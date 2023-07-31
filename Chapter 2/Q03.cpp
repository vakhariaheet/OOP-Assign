

#include <iostream>

using namespace std;

class Paper {
    int width, height;
    public:
        Paper(int w, int h) {
            width = w;
            height = h;
        }
        friend void findArea(Paper);
        friend void findPerimeter(Paper);
};

void findArea(Paper p) {
    cout << "Area: " << p.width * p.height << endl;
}

void findPerimeter(Paper p) {
    cout << "Perimeter: " << 2 * (p.width + p.height) << endl;
}


int main() {
    int len, wid;
    cout << "Enter a length and width of a Page: ";
    cin >> len >> wid;

    Paper p(len, wid);
    findArea(p);
    findPerimeter(p);
}