#include<iostream>
#include<cmath>
using namespace std;
// important var
int passengers_number;
int bus_seat;
//var
int bus_number;
int empty_seat;
int try_again_or_exit;
//functions
int bus_loop();
int min_passengers();
void exit();
int main(){
	// another important var
	bus_number=0;
	cout<<"Passengers Waiting: ";
	cin>>passengers_number;
	cout<<"Bus Have Seat: ";
	cin>>bus_seat;
	//important line
	bus_loop();
	//important line
	cout<<"\n"<<endl;
	cout<<"left passengers: "<<passengers_number<<endl;
	empty_seat=bus_seat-passengers_number;
	bus_number++;
	cout<<bus_number<<" bus takes :"<<passengers_number<<" passengers"<<endl;
	cout<<"Empty seat: "<<empty_seat<<endl;
	cout<<"\n\n"<<endl;
	cout<<"\t[1] try again"<<endl;
	cout<<"\t[0] EXIT"<<endl;
	cout<<" Enter Action: ";
	cin>>try_again_or_exit;
	if(try_again_or_exit==1){
		main();
	}
	else if(try_again_or_exit==0){
		exit();
	}
	return 0;
}
int bus_loop(){
	if(passengers_number>=bus_seat){
		int i;
		passengers_number=passengers_number-bus_seat;
		for(i=bus_seat;passengers_number>i;passengers_number=passengers_number-bus_seat){
				bus_number++;
				cout<<"\tBus no "<<bus_number<<": takes "<<bus_seat<<" passenger "<<"\t left passengers ("<<passengers_number<<")"<<endl;
		}
		bus_number++;
		cout<<"\tBus no "<<bus_number<<": takes "<<bus_seat<<" passenger "<<"\t left passengers ("<<passengers_number<<")"<<endl;
	}
}
void exit(){
	cout<<"\n\n\n"<<endl;
	cout<<"#BYE!"<<endl;
	cout<<"\n\n\n"<<endl;
}
