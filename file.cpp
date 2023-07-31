 #include<iostream>
#include<fstream>
using namespace std;
struct studentType{
    int id;
    char firstName[20];
    char lastName[20];
    double GBA;


};
void printData(const studentType & student)
int main(){
    studentType st;
    ifstream infile;
    ofstream outfile;
    long studentsize = sizeof(st);
    infile.open("studentDate.txt");
    if(!infile){
        cout<<"the input file does not exist"<<"the program terminates!!!"<<endl;
        return 1;
    }
    infile.open("student.dat" ios::binary);
    infile>>st.id>>st.firstName>>st.lastName>>st.GBA;
    while (infile){
        if(st.id !=0){
            outfile.seekp((st.id-1)*studentsize ,ios::beg);
            outfile.write((char*)&st,sizeof(st));
        }
        infile>>st.id>>st.firstName>>st.lastName>>st.GBA;
    }
    infile.close;
    infile.clear;
    outfile.close;
    //**************************************
    cout<<left<<setw(3)<<"ID"<<setw(16)<<"first name"<<setw(16)<<"last name"<<setw(16)<<setw(16)<<"gba";
    cout<<fixed<<showpoint<<setprecision(2);
    //***************************************
    infile.open("student.dat" ,ios::binary);
    if(!infile){
        cout<<"the input file does not exist."<<"the program terminates"<<endl;
        return 1;
    }
    infile.read((char*)&st,sizeof(st));
    while(infile){
        printData(st);
        infile.read((char*)&st ,sizeof(st));
    }
    int id;
    infile.open("student.dat",ios::binary);
    if(infile.is_open){
        cout<<"enter the id of student:";
        cin>>id;
        infile.seekg((id-1)*sizeof(st));
        infile.read((char*)&st,sizeof(st));
        printData(st);
    }
    fstream file("student.dat" ,ios::binary |ios::in|ios::out );
    int id;
    double newgba;
    if(file.is_open){
        cout<<"enter the id of student:";
        cin>>id;
        file.seekg((id-1)*sizeof(st));
        file.read((char*)&st,sizeof(st));
        printData(st);
        cout<<"enter new gba:";
        cin>>newgba;
        file.seekp((id-1)*sizeof(st));
        file.write((char*)&st,sizeof(st));

        
    }






















    return 0;
}
void program(const studentType &student){
    cout<<left<<setw(3)<<st.id<<setw(16)<<st.firstName<<setw(16)<<st.lastName<<setw(16)<<st.GBA<<endl;
}





































