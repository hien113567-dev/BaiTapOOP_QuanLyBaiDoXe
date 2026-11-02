#include<iostream>
using namespace std;

int main(){
	class phuong_tien{
		private:
			int ma_xe;
			string loai_xe;
			int gio_vao;
			int tg_do;
			
		public:
			phuong_tien();
			phuong_tien(int ma, string loai, int gio, int tg);
			
			int lay_ma_xe() const;
			string lay_loai_xe() const;
			double tinh_phi() const;
			void hien_thi() const;
	};
phuong_tien(){
	ma_xe=0;
	loai_xe="";
	gio_vao=0;
	tg_do=0;
}	
tinhphi(){
	double gia;
	if((gio_vao>=6 && gio_vao<10) || (gio_vao>=15 && gio_vao<19)){
		if(loai_xe=="Car"){
			if(tg_do<=2){
				gia=1.3*(tg_do*6.00 );
			else{
				gia=(1.3*2*tg_do*6.00)+(0.9*(tg_do-2)*6.00);
			}
		}
		else if(loai_xe=="Motorcycle"){
			if(tg_do<=2){
				gia=1.3*(tg_do*4.00 );
			}
			else{
				gia=(1.3*2*tg_do*4.00)+(0.9*(tg_do-2)*4.00);
			}
		}	
		else{
			if(tg_do<=2){
				gia=1.3*(tg_do*2.00 );
			}
			else{
				gia=(1.3*2*tg_do*2.00)+(0.9*(tg_do-2)*2.00);
			}	
		}
	}
	else{
		if(loai_xe=="Car"){
			if(tg_do<=2){
				gia=0.95*(tg_do*6.00 );
			else{
				gia=(0.95*2*tg_do*6.00)+(0.9*(tg_do-2)*6.00);
			}
		}
		else if(loai_xe=="Motorcycle"){
			if(tg_do<=2){
				gia=0.95*(tg_do*4.00 );
			}
			else{
				gia=(0.95*2*tg_do*4.00)+(0.9*(tg_do-2)*4.00);
			}
		}	
		else{
			if(tg_do<=2){
				gia=0.95*(tg_do*2.00 );
			}
			else{
				gia=(0.95*2*tg_do*2.00)+(0.9*(tg_do-2)*2.00);
			}	
		}
		
	}
	return gia;
}
	class bai_xe{
	private:
		int ma_bai;
		char kich_thuoc;
		phuong_tien pt1, pt2, pt3; //sau này dung mang 
		bool co1, co2, co3;
		
	public:
		bai_xe(); 
		bai_xe(int ma, char kt);
		
		int lay_ma() const;
		bool them(phuong_tien v);
		bool xoa(int maXe);
		bool chua(int maXe) const;
		void hien_thi() const;
		bool co_loai(string loai, int&dem, double&tong);
	};
	class SystemInterface{
	private:
    bai_xe bai1, bai2, bai3; // sau này dùng mảng
    bool co1, co2, co3; // có bãi xe 1,2,3 hay chưa?
  public:
    
	};
}
