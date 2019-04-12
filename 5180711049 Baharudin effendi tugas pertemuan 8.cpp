#include <iostream>

using namespace ::std;
struct aku {
double uts,uas,tugas,absen,n,y,t,u,total;
};
aku grd;

double input (string text){
double Nilai;
cout<<"Input Nilai "<<text<<" = ";cin>>Nilai;
return Nilai;
}

void grade (double total){
if (total>81){cout<<"A";}
else if (total>61){cout<<"B";}
else if (total>41){cout<<"C";}
else if (total>21){cout<<"D";}
else{cout<<"E";}

}
main(){
 grd.uts   = input ("UTS");
 grd.uas   = input ("UAS");
 grd.tugas =input ("TUGAS");
 grd.absen = input ("ABSEN");
grd.n=0.2*(grd.uts);
grd.y=0.3*grd.uas;
grd.t=0.35*grd.tugas;
grd.u=0.15*grd.absen;
grd.total=grd.n+grd.y+grd.t+grd.u;
cout<<"Nilai UTS   = ";cout<<grd.n;cout<<endl;
cout<<"Nilai UAS   = ";cout<<grd.y;cout<<endl;
cout<<"Nilai Tugas = ";cout<<grd.t;cout<<endl;
cout<<"Nilai Absen = ";cout<<grd.u;cout<<endl;
cout<<"Nilai Akhir = ";cout<<grd.total;cout<<endl;
cout<<"Nilai Anda  = ";grade (grd.total);cout<<endl;

cout<<endl;
cout<<endl;
cout<<"Created By BAHARUDIN EFFENDI";
cout<<endl;
}
