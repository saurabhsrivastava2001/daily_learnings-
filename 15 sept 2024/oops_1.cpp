#include <iostream>
using namespace std;

class Area{
    public:
    int radius; // radius
    int length;
    int width;
    int base;
    int height;
    float X_area;
    int side;
    int pi=3.14;

    inline void squareArea(Area & obj){
        obj.X_area = obj.side*obj.side;      
        cout<<"\n"<<obj.X_area<<endl;  
    }
    inline void rectangleArea(Area & obj){
        obj.X_area = 2*(obj.length+obj.width);
        cout<<obj.X_area<<endl;
    }
    inline void circleArea(Area & obj){
        obj.X_area = pi*(obj.radius*obj.radius);
        cout<<obj.X_area<<endl;
    }
    inline void paralelogram(Area & obj){
        obj.X_area =obj.height*obj.base;
        cout<<obj.X_area<<endl;
    }


};

int main(){
    Area square;
    square.side=4;
    square.squareArea(square);
    Area circle;
    Area rectangle;
    Area paralelelogram;

    

}