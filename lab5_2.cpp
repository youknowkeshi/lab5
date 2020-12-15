#include <iostream>
#include<cmath>
using namespace std;
   
 double deg2rad(double x){
 	return (M_PI*x)/180;
 }
 double rad2deg(double y){
 	return (180*y)/M_PI;
 }
 double findXComponent(double L1,double L2,double A3,double A4){
 	return (L1*cos(A3))+(L2*cos(A4));
 }
double findYComponent(double L1,double L2,double A3,double A4){
	return (L1*sin(A3))+(L2*sin(A4));
}
double  pythagoras(double L1,double L2){
	return sqrt(pow(L1,2)+pow(L2,2));
}
void showResult(double x,double y){
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	cout<<"Length of the resultant vector = "<<x<<"\n";
	cout<<"Direction of the resultant vector (deg) = "<<y<<"\n";
	cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}
int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}