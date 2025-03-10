#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    ifstream infile;
    ofstream outfile;

    int test1, test2, test3, test4, test5, test6;
    double average;

    infile.open("u_2023_30012.txt");
    outfile.open("U_2023_30012.dat");
    string studentid;

    outfile<<fixed<<showpoint;
    outfile<<setprecision(2);

    cout<< "Enter six interger scores"<<endl;
    infile>>studentid;

    cin>> test1>> test2>> test3>> test4>> test5>> test6;

    average=static_cast <double>(test1 + test2 + test3 + test4 + test5 + test6)/6.0;

    cout<<setw(4)<<studentid<<setw(4)<<"Result : "<<setw(4)<<average<< setw(4)<<test1<<setw(4)<<test2<<setw(4)<<test3<<setw(4)<<test4<<setw(4)<<test5<<setw(4)<<test6<<endl;

    outfile<<"Student ID: " <<studentid<<endl;
    outfile<<"Test scores " <<test1 <<endl;
    outfile<<"The result is " <<average<<endl;



    infile.close();
    outfile.close();

    return 0;
}




// Author : Trevor 
// Date: 5/2/2025
// copywrite (2025)
/*
    by law pass by the 1999 constitution of Nigeria,
    that this code is owned by Trevor, and is an interlectual property,
    of Mr. Trevor, and if taken you shall, face 2 years in prisonment,  
*/