#include <iostream>
using namespace std;
class Box{
private:
	double length;
	double width;
	double height;
	public:
		void setLength(double L);
		double getLength();
		void disVolume();
		void setWidth(double W);
		double getWidth();
		void setHeight(double H);
		double getHeight();
		Box(double l, double w, double h);
		~Box();
		
	};
Box::Box(double l, double w, double h){
			length=l;
			width=w;
			height=h;
			cout<<"Object Initialised";
		}
		Box::~Box(){
			cout<<"Terminated Go Home\b";
		}
void Box::setLength(double L){
	length=L;
}
double Box::getLength(){
	return length;

}
	void Box::setWidth(double W){
	width=W;
}
		double Box::getWidth(){
			return width;
	}
void Box::setHeight(double H){
	height=H;
}
double Box::getHeight(){
	return height;			
}
void Box::disVolume(){
	cout<<height*width*length;
}
int main(){
	Box b1(5.0, 6.0, 7.0);
	b1.setLength(5.0);
	b1.setWidth(6.0);
	b1.setHeight(7.0);
	cout<<b1.getLength();
	b1.disVolume();
	return 0;
}

