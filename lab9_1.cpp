#include<iostream>
using namespace std;

string grade;
int x=1;
int main(){
	int count[5] = {0}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<"\n";
	do{
		cout << "Student ["<< x <<"]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A") {
			count[0]++,x++;
		}else if(grade == "B") {
			count[1]++,x++;
			}else if(grade == "C"){
				count[2]++,x++;
			}else if(grade == "D"){
				count[3]++,x++;
			}else if(grade == "F"){
				count[4]++,x++;
			}else if(grade == "0"){
				break;
		}else{ // grade is wrong input
			cout << "wrong input. Please input againt."<< "\n";
		}
		} 
	while(true);{
	
	cout << "In total " << x-1 << " students."<< "\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4] <<",";	


	
	return 0;
}}
