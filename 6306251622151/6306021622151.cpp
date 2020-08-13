#include <iostream>
#include <string>
using namespace std;
float areaRect(int width , int length);
float areaCircle(float radius);

int main(void){
int menu,width,length,radius;
       
do{

	cout << "Select Men for Area.\n";
	cout << "1.Retangle.\n";
	cout << "2.Circle.\n";
	cout << "0.Exit Progrm.\n";
	cout << "Enter Menu:";
	cin >> menu;

	switch(menu){
	case 1 :
    cout << "Area of Rectangle = " << endl;
	cout << "Enter Width: ";
	cin >> width;
	cout << "Enter ";
	
	cout << " Area = " << areaRect(width,length) << endl;
		break;
	case 2 :
		cout << "Area of Circle = ";
		cout << "Area = " << areaCircle() << endl;
		break;
	case 0 :
		cout << "Exit Program"<< endl;
		break;
	default:
		cout << "Pls Input 0 ,1,2"<< endl;
		break;
	}
	}while(menu!=0);
}
float areaRect(int f_width, int f_){
	int width,length,area;
	cout << "Function areRect" << endl ;
	cout << "Enter Width : ";
	cin >> width;
	cout << "Enter Length";
	cin >> length;
	area = width * length;
	return(area);
}
float areaCircle(){
	float Pi = 3.14,radius,area;
	cout << "Function areaCircle" << endl;
	cout << "Enter Radius: ";
	cin >> radius;
	area = Pi * radius *  radius;
	return(area);
}
	
	

