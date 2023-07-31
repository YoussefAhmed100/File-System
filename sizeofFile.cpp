#include<iostream>
#include<fstream>
using namespace std;
int main(){
   long begin,end;
   ifstream myfile("student.dat",ios::binary);
   myfile.tellg()=begin;
   myfile.seekg(0,ios::end);
   myfile.tellg()=end;
   myfile.close();
   cout<<"size is"<<(end-begin)<<"bytes\n";




    return 0;















}
