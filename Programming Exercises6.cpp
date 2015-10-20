// Example program
#include <iostream>
#include <string>
using namespace std ;

class Move
{
private:
double x;
double y;
public:
Move(double a = 0, double b = 0)// sets x, y to a, b
{
    x=a;
    y=b;
    
    }
    
    
void showmove()// shows current x, y values
{
    cout << "x :" << x <<endl;
    cout << "y :" << y <<endl;
    
    
    }
 Move* add( Move & m){
    x=x+m.get_x();
    y=y+m.get_y();
   return this;
    }
// this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it

double get_x(){return x;}
double get_y(){return y;}

void set_y(double y1){y=y1;}
void set_x(double x1){y=x1;}

void reset(double a = 0, double b = 0)// resets x,y to a, b
{
    x=0;
    y=0;
    } 
};


int main()
{
    Move point1 (2,5);
    Move point2 (3,10);
    
    point1.showmove();
    cout << "____________" <<endl;
    point2.showmove();
     cout << "____________" <<endl;
    point1.add(point2);
    
    
    point1.showmove();
    
 
}
