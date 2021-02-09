#include<iostream>
class arrey{
	public:
	arrey(){
		for(int i=0;i<5;i++){
			num[i]=0;
			sub[i]=0;
		}	
	}
	int get();
	
	void append(int x);
	void insert(int y);
	int cat(int cat);
	
	
	private:
		int num[100];
		int end_idex=0;
		int sub[100];
	
	};
	
void arrey::append(int x){
		num[end_idex]=x;
		end_idex++;
}
	
void arrey::insert(int y){
    end_idex++;
		for(int i1=0;i1<end_idex;i1++){
			sub[i1]=num[i1];
		}
	  for(int i2=0;i2<end_idex;i2++){
			num[i2+1]=sub[i2];
		}
		num[0]=y;
}	
int arrey::cat(int cat){
  return num[cat];
}

int arrey::get(){
return end_idex;
}



int main(){
  arrey ar1;
  
  /*element*/
	for(int i4=0;i4<5;i4++){
	 ar1.insert(i4);
	}
	ar1.insert(5);
	ar1.insert(3);
	ar1.append(4);
	
	/*check*/
	std::cout<<"要素"<<ar1.get()<<std::endl;
	
	for(int i3=0;i3<ar1.get();i3++){
		std::cout<<ar1.cat(i3);
  }
  std::cout<<std::endl;
	return 0;
}

