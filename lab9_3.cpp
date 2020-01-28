#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0 , z = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        sum += atof(textline.c_str());
        z += pow(atof(textline.c_str()),2);
        count++;
    }
    cout << "Number of data = "<< count << "\n";
    cout << "Mean = "<< sum/count << "\n";
    cout << "Standard deviation = "<< sqrt((z/count)-pow(sum/count,2));
    return 0;
}

