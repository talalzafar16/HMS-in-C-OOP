#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
using namespace std;

/////////////////////////////////////////PROTOTYPES///////////////////////////////////////////////////
void pass();
void cpass();
void menu();
void call_dr();

/////////////////////////////////////////CLASS ONE///////////////////////////////////////////////////
class one{
    public:
    virtual void showdata()=0;
    virtual void getdata()=0;
};

/////////////////////////////////////////CLASS INFO//////////////////////////////////////////////////
class info:public one{
    public:
    char name[50],time[50];
    int num,age;
    void getdata(){
        system("cls");
        system("color f3");
        cin.sync();
        cout<<"\tENTER DATA"<<endl;
        cout<<"Enter appointment time ="<<endl;
        cin.getline(time,50);
        cin.ignore();
        cout<<"Enter appointment number ="<<endl;
        cin>>num;
        cin.ignore();
        cout<<"Enter patient name ="<<endl;
        cin.getline(name,50);
        cin.ignore();
        cout<<"Enter patient age ="<<endl;
        cin>>age;}
    void showdata(){
        system("cls");
        system("color fc");
        cout<<"\t Patient Name    ="<<name<<endl;
        cout<<"\t Appointment No  ="<<num<<endl;
        cout<<"\t Patient Age     ="<<age<<endl;
        cout<<"\t Appointment time="<<time<<endl;}    
};

/////////////////////////////////////////CLASS SHAHZAIB//////////////////////////////////////////////
class shahzaib:public info{
    public:
    info a1;
    void getdata(){
        system("color f3");
        system("cls");
        ofstream out;
        out.open("shahzaib.txt");
        a1.getdata();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"your entry has been saved"<<endl;
        system("pause");
        menu();}
    void showdata(){
        system("color f3");
        system("cls");
        ifstream in;
        in.open("shahzaib.txt");
        if(in.eof()){
            cerr<<"\n\t NO DATA IN FILE"<<endl;
            system("pause");
            menu();  }
        else{
            while(!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.showdata();}
            in.close();
            system("pause");
            menu();    }    }    
};

/////////////////////////////////////////CLASS LUBNA/////////////////////////////////////////////////
class lubna :public info{
    public:
    info a1;
    void getdata(){
        system("color f3");
        system("cls");
        ofstream out;
        out.open("lubna.txt");
        a1.getdata();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"your entry has been saved"<<endl;
        system("pause");
        menu();}
    void showdata(){
        system("color f3");
        system("cls");
        ifstream in;
        in.open("lubna.txt");
        if(in.eof()){
            cerr<<"\n\t NO DATA IN FILE"<<endl;
            system("pause");
            menu();  }
        else{
            while(!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.showdata();}
            in.close();
            system("pause");
            menu();    }    }    
};

/////////////////////////////////////////CLASS TALAL/////////////////////////////////////////////////
class talal:public info{
    public:
    info a1;
    void getdata(){
        system("color f3");
        system("cls");
        ofstream out;
        out.open("SIMRA.txt");
        a1.getdata();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"your entry has been saved"<<endl;
        system("pause");
        menu();}
    void showdata(){
        system("color f3");
        system("cls");
        ifstream in;
        in.open("SIMRA.txt");
        if(in.eof()){
            cerr<<"\n\t NO DATA IN FILE"<<endl;
            system("pause");
            menu();  }
        else{
            while(!in.eof()){
                in.read((char*)&a1,sizeof(a1));
                a1.showdata();}
            in.close();
            system("pause");
            menu();    }    }    
};

/////////////////////////////////////////CLASS Information///////////////////////////////////////////
class information{
    public:
    void dr_info(){
        system("color f3");
        system("cls");
        cout<<"\n=========================================================================="<<endl;
        cout<<"\t\tTHREE DOCTORS AVAILABLE \n\t Information And Timing Are Given Below"<<endl;
        cout<<"------------------------------------------------------------------------------"<<endl;
        cout<<"\n\t\t Doctor Available : "<<endl;
        cout<<"\t\t Dr.Shahzaib  ( Child Specialist )"<<endl;
        cout<<"\n\t\t\t-----[Timings]-----"<<endl;
        cout<<"\n\t Monday To Thursday \t\t 9AM TO 5PM"<<endl;
        cout<<"\t Friday         \t\t 9AM TO 1PM"<<endl;
        cout<<"\t Saturday and Sunday   \t\t     OFF"<<endl;
        cout<<"\n------------------------------------------------------------------------------"<<endl;                    
        cout<<"\n\t\t Doctor Available : "<<endl;
        cout<<"\t\t Dr.Lubna  ( Eye Specialist )"<<endl;
        cout<<"\n\t\t\t-----[Timings]-----"<<endl;
        cout<<"\n\t Monday To Friday \t\t 9AM TO 5PM"<<endl;
        cout<<"\t Saturday         \t\t 9AM TO 1PM"<<endl;
        cout<<"\t Sunday           \t\t     OFF"<<endl;
        cout<<"\n------------------------------------------------------------------------------"<<endl;
        cout<<"\n\t\t Doctor Available : "<<endl;
        cout<<"\t\t Dr.SIMRA  ( Skin Specialist )"<<endl;
        cout<<"\n\t\t\t-----[Timings]-----"<<endl;
        cout<<"\n\t Monday To Thursday \t\t 9AM TO 5PM"<<endl;
        cout<<"\t Saturday         \t\t 9AM TO 1PM"<<endl;
        cout<<"\t Friday and Sunday    \t\t     OFF"<<endl;
        cout<<"\n------------------------------------------------------------------------------"<<endl;        
        system("pause");
        menu();    }
};

/////////////////////////////////////////MAIN////////////////////////////////////////////////////////
int main(){
    system("cls");
    pass();
    return 0;
}

void pass(){
    system("cls");
    system("color fc");
    string x;
    int y,a=0;
    ifstream in;
    in.open("pass.txt");
    getline(in,x);
    while(a==0){
        cin.sync();
        cout<<"\n\n\n\n\n\t\t\tENTER PASSWORD"<<endl;
        cin>>y;
        int num= stoi(x);
        if(num==y){
            cout<<"\n\t\t\tyou have successfully logged in"<<endl;
            a++;
            system("pause");
            menu();}
        else{
            cout<<"\n\t\t\tyou have entered wrong password"<<endl;
            cout<<"\n\t\t\tpress 0 to enter pass again"<<endl;    
            cin>>a;
            system("cls");}}
    in.close();}

void call_dr(){
    system("color f3");
    system("cls");
    int a;
    cout<<"\n\n\t\t Press 1 for Dr.Shahzaib"<<endl;
    cout<<"\n\n\t\t Press 2 for Dr.Lubna"<<endl;
    cout<<"\n\n\t\t Press 3 for Dr.Talal\n"<<endl;
    cin>>a;
    shahzaib a3;
    talal a4;
    lubna a5;
    if(a==1){
        a3.getdata();}
    else if(a==2){
        a5.getdata();}
    else if(a==3){
        a4.getdata();}
    else{
        cout<<"SORRY INVALID CHOICE"<<endl;
        system("pause");
        menu();}
}

void printdata(){
    system("color f3");
    system("cls");
    int a;
    shahzaib a1;
    talal a2;
    lubna a3;
    cout<<"\n\t Press 1 for Dr.Shahzaib appointments"<<endl;
    cout<<"\n\t Press 2 for Dr.Lubna appointments"<<endl;
    cout<<"\n\t Press 3 for Dr.Talal appointments"<<endl;
    cout<<"\n\t\t Enter number :"<<endl;
    cin>>a;
    system("color f3");
    if(a==1){
        system("color f3");
        cout<<"----------Appointments for Dr.Shahzaib-------------"<<endl;
        a1.showdata();
    }
    else if(a==2){
        system("color f3");
        cout<<"----------Appointments for Dr.Lubna-------------"<<endl;
        a3.showdata();
    }
    else if(a==3){
        system("color f3");
        cout<<"----------Appointments for Dr.Talal-------------"<<endl;
        a2.showdata();
    }
    else{
        system("color f3");
        cout<<"you enterd wrong number"<<endl;
    }
    system("pause");
    menu();
}

void cpass(){
    system("color fc");
    system("cls");
    int x;
    ofstream out;
    out.open("pass.txt");
    cout<<"\n\n\n\n\n\t\t\tENTER NEW PASSWORD"<<endl;
    cin>>x;
    out<<x;
    cout<<"\n\t\t\tyour password successsfully changed"<<endl;
    out.close();
    system("pause");
    menu();}

void menu(){
    system("cls");
    system("color fc");
    cout<<"\n\n\t\t|  ++++++++++   MAIN MENU   ++++++++++  |"<<endl;
    cout<<"\t\t|       HOSPITAL MANGEMENT SYSTEM       |"<<endl;
    cout<<"\t\t|=======================================|"<<endl;
    cout<<"\n-----------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t Please select any option"<<endl;
    cout<<"\t 1- \t press 1 to see availabe doctors"<<endl;
    cout<<"\t 2- \t press 2 to get appointment"<<endl;
    cout<<"\t 3- \t press 3 to check patients appointment "<<endl;
    cout<<"\t 4- \t press 4 to change password"<<endl;
    cout<<"\t 5- \t press 5 to log out"<<endl;
    cout<<"\n-----------------------------------------------------------------------------"<<endl;
    cout<<"\n\t Please Enter Your Choice"<<endl;
    information a1;
    int a;
    cin>>a;
    if(a==1){
        a1.dr_info();}
    else if(a==2){
        call_dr();}
    else if(a==3){
        printdata();}    
    else if(a==4){
        cpass();}
    else if(a==5){
        pass();}
    else
        cout<<"wrong choice"<<endl;
}