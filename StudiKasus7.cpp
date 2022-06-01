#include <iostream>
using namespace std;

class input {
public :
  void in(int a);
  void sorting(int a);
  void tukar(int a,int b);
  void cari(int a);
  void tampil(int a);

private:
  char id[10]; 
  char nama[20];
  int stokbrg[20];
  
  bool ketemu;
};

void input::in(int n){
  

  for(int i=0;i<n;i++){
    cout<<"Masukkan id barang : "; cin>>id[i];
    cout<<"Masukkan nama barang : "; cin>>nama[i];
    cout<<"Masukkan jumlah stok barang : ";cin>>stokbrg[i];
  }   
}
void input::tukar(int a,int b){
	int t,u,m;
    t=stokbrg[b];
    stokbrg[b]=stokbrg[a];
    stokbrg[a]=t;
    
    u=id[b];
    id[b]=id[a];
    id[a]=u;
    
    m=nama[b];
    nama[b]=nama[a];
    nama[a]=m;
}
void input::sorting(int n){
   for(int c=1;c<n;c++)
    {
        for(int d=0;d<n-c;d++)
        {
            if(stokbrg[d]<stokbrg[d+1]){
            	tukar(d,d+1);
			}
	}
}
tampil(n);
}
void input::tampil(int n){
	for (int i=0;i<n;i++){
	     cout<<"["<<id[i]<<"] ";
	     cout<<"["<<nama[i]<<"] ";
	     cout<<"["<<stokbrg[i]<<"] ";
	}
}

void input::cari(int n){
	char cari;
	cout << "masukan id barang :";
	cin >> cari;
	for (int i=0;i<=n;i++){
		if(id[i]==cari){
			cout << "nama barang :"<< nama[i] <<endl;
			cout << "id barang :"<< id[i]<<endl;
			cout << "stok barang :"<< stokbrg[i]<<endl;
		}
	}
	
}

int main(){
	int n;
	cout<<"Masukan Jumlah Data = ";
  cin>>n;
	input x;
	x.in(n);
	x.sorting(n);
	x.cari(n);
}