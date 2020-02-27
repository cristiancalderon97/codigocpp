#include <iostream> 

using namespace std;

 

void notvalid(){

cout<<"Entry not valid. Please try again."<<endl;

cout<<" ============================================="<<endl;

cout<<" ============================================="<<endl;

cout<<" ============================================="<<endl;

cout<<" ============================================="<<endl;

 

}

 

int main()

{

int menu1,menu2,menu3,menu4;

int opc=1;

float R1,R2,R3,Ra,Rb,Rc, ITOTAL,I1,I2,V1,V2, VTOTAL;

cout<< "CIRCUIT OPERATIONS IN C++"<<endl;

cout<< "============================================="<<endl;

cout<< "Created by Cristian Calderon" <<endl;

cout<< "23/02/2020"<<endl;

cout<< "=============================================" <<endl;

 

do{

cout<<" ============================================="<<endl;

cout<< "PLEASE SELECT THE ACTION YOU WANT TO PERFORM:"<<endl;

 cout<<  "1-DELTA-STAR CONVERSION."<<endl;

 cout<< "2-CURRENT DIVIDER CIRCUIT."<<endl;

 cout<< "3-VOLTAGE DIVIDER CIRCUIT." <<endl;

cin>>menu1;

if ( menu1 == 1 ){

cout<<"Please choose the option that is required:"<<endl;

cout<<"1-Convert Star into Delta."<<endl;

cout<<"2-Convert Delta into Star."<<endl;

cin>>menu2;

if ( menu2 == 1 ){

cout<<"Please enter the Resistance Values  (R1,R2,R3): "<<endl;

cout << "Enter R1 in KΩ:"<< endl;

cin>> R1;

cout << "Enter R2 in KΩ:"<< endl;

cin>> R2;

cout << "Enter R3 in KΩ:"<< endl;

cin>> R3;

cout<< "The entered Star is (" <<R1<< "KΩ," <<R2<< "KΩ," <<R3<<"KΩ)"<< endl;

cout<< "=============================================" <<endl;

Ra=(R1*R2 + R1*R3 + R2*R3)/R1;

Rb=(R1*R2 + R1*R3 + R2*R3)/R2;

Rc=(R1*R2 + R1*R3 + R2*R3)/R3;

 

cout << "YOUR NEW DELTA NETWORK (Ra,Rb,Rc) is: (" <<Ra<< "kΩ," <<Rb<< "kΩ," <<Rc<<"kΩ)" <<endl;

}

else{

if ( menu2 == 2 ){

cout<<"Please enter the Resistance Values  (Ra,Rb,Rc): "<<endl;

cout << "Enter Ra in KΩ:"<< endl;

cin>> Ra;

cout << "Enter Rb in KΩ:"<< endl;

cin>> Rb;

cout << "Enter Rc in KΩ:"<< endl;

cin>> Rc;

cout<< "The entered Delta is (" <<Ra<< "KΩ," <<Rb<< "KΩ," <<Rc<<"KΩ)"<< endl;

cout<< "=============================================" <<endl;

R1=(Rb*Rc)/(Ra +Rb + Rc);

R2=(Ra*Rc)/(Ra +Rb + Rc);

R3=(Ra*Rb)/(Ra +Rb + Rc);

 

cout << "YOUR NEW STAR NETWORK (R1,R2,R3) is: (" <<R1<< "kΩ," <<R2<< "kΩ," <<R3<<"kΩ)" <<endl;

}

else {
  notvalid();
}
}

}


if ( menu1 == 2 ) {

cout << "Please enter the ITOTAL value and the Resistance Values  (R1,R2): " <<endl;

cout<< "Enter ITOTAL:" <<endl;

cin >> ITOTAL;

cout<< "Enter R1 in KΩ:" <<endl;

cin>> R1;

cout<< "Enter R2 in KΩ:" <<endl;

cin>> R2;

cout << "The entered Values are (" <<ITOTAL<< "Amperes," <<R1<< "KΩ," <<R2<<"KΩ)" <<endl;

cout<< "============================================="<<endl;

cout<< "Please choose the option that is required:"<<endl;

cout<< "1-Calculate Voltage and Current in R1."<<endl;

cout<< "2-Calculate Voltage and Current in R2."<< endl;

cin >> menu3;

if (menu3 == 1){

 

I1=((R1*R2)/(R1+R2))*(ITOTAL/R1);

V1=(R1*I1);

cout<< "THE VOLTAJE AND CURRENT OF R1 IS:(" <<I1<< "Amperes," <<V1<< "Volts)" <<endl;

}

else {

if (menu3 == 2){

I2=((R1*R2)/(R1+R2))*(ITOTAL/R2);

V2=(R2*I2);

cout<< "THE VOLTAJE AND CURRENT OF R2 IS:(" <<I2<< "Amperes," <<V2<< "Volts)" <<endl;

}
else {
  notvalid();
}

}

}

else{

if ( menu1 == 3 ) {

cout << "Please enter the VTOTAL value and the Resistance Values  (R1,R2): " <<endl;

cout<< "Enter VTOTAL:" <<endl;

cin >> VTOTAL;

cout<< "Enter R1 in KΩ:" <<endl;

cin>> R1;

cout<< "Enter R2 in KΩ:" <<endl;

cin>> R2;

cout << "The entered Values are (" <<VTOTAL<< "Amperes," <<R1<< "KΩ," <<R2<<"KΩ)" <<endl;

cout<< "============================================="<<endl;

cout<< "Please choose the option that is required:"<<endl;

cout<< "1-Calculate Voltage and Current in R1."<<endl;

cout<< "2-Calculate Voltage and Current in R2."<< endl;

cin >> menu4;

if (menu4 == 1){

 

I1=(VTOTAL/(R1+R2));

V1=(R1*I1);

cout<< "THE VOLTAJE AND CURRENT OF R1 IS:(" <<I1<< "Amperes," <<V1<< "Volts)" <<endl;

}

else {

if (menu4 == 2){

I2=(VTOTAL/(R1+R2));

V2=(R2*I2);

cout<< "THE VOLTAJE AND CURRENT OF R2 IS:(" <<I2<< "Amperes," <<V2<< "Volts)" <<endl;

}
else {
  notvalid();
}
}

}
 
}
if (menu1 > 3 ){

notvalid();

}

 

  cout <<"Want to Continue?. Type 1 for yes,2 for no"<<endl;

          float R1,R2,R3,Ra,Rb,Rc, ITOTAL,I1,I2,V1,V2, VTOTAL=0;

         cin>>opc;

} while (opc !=2);

 

  if (opc==2){

        exit(0);

        }

}


