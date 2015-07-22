#include<iostream>
#include<string>
using namespace std;
struct String{
	int count;
	string name;
	String()
	{
		count =0;
	}
	int getcount()
	{
		return count;
	}
	void calculate(){
		for(size_t i=0;i<name.length();i++)
			count += name[i];
	}
};//end  struct

void sort(int length, String *str){
	String tmp;
	for(int i=0;i<length-1;i++){
		for(int j=i+1;i<length;i++){
			if(str[i].count <= str[j].count) {
				tmp.count = str[i].count;
				tmp.name.assign(str[i].name);

				str[i].count = str[j].count;
				str[i].name.assign(str[j].name);

				str[i].count = tmp.count ;
				str[i].name.assign(tmp.name);

			}//if end

		}//for end
	}//for end

}//function

void print(int length, String  *str){
	for(int i=0;i<length;i++)
		cout<<"\n data is \t "<<str[i].name<<"\t Ascii count is \t"<<str[i].count<<endl;

}
int main(){
	String names[4];
	for(int i=0;i<4;i++){
		cout<<"\n Enter the string "<<i<<endl;
		cin>>names[i].name;
		names[i].calculate();
	}

	sort(4,&names);
	print(4,&names);
}


