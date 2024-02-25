#include<iostream>
#include<string>
#include<unistd.h>
#include<fstream>
using namespace std;
class game{
	public:
		char A,B;
        int button,i,GC;
        int k=0;
        char ar[9]={'0','1','2','3','4','5','6','7','8'};
        void select(){
	    cout<<"\n"<<"select anyone choice X OR O:";
	    cin>>A;
	    if(A=='X'){
	 	B='O';
	    }
    	else{
	     B='X';
	    }
	    cout<<"\n"<<"COMPUTER CHOICE ::======"<<B;
        }
        void verify(int i){
        	if((ar[0]==ar[3]==ar[6])||(ar[3]==ar[4]==ar[5])||(ar[6]==ar[7]==ar[8])||(ar[1]==ar[2]==ar[3])||ar[0]==ar[4]==ar[8])
        	{
        		if(ar[0]||ar[3]||ar[6]==A){
        			cout<<"you win the game";
				}
			}
			else{
				start();
				i++;
			}
		}
        void update(){
	    cout<<"||||||COMPUTER'S TURN ||||||||";
	    usleep(10000000);
	    for(i=0;i<9;i++){
		if(ar[i]!=A&&ar[i]!=B){
			ar[i]=k+B;
			verify(1);
			start();
		}
	    }
        }

        void start(){
	    cout<<"\n"<<"\t"<<"  "<<ar[0]<<" |  "<<ar[1]<<"  |  "<<ar[2]<<"  "<<endl;
	    cout<<"\t"<<"----|-----|-----"<<endl;
	    cout<<"\t"<<"  "<<ar[3]<<" |  "<<ar[4]<<"  |  "<<ar[5]<<"  "<<endl;
	    cout<<"\t"<<"----|-----|-----"<<endl;
	    cout<<"\t"<<"  "<<ar[6]<<" |   "<<ar[7]<<" | "<<ar[8]<<"    "<<endl;
	    cout<<"ENTER NUMBER POSITION TO PLAY (only numbers)!!!";
	    cin>>button;
	    cout<<"\n"<<"ENTER XOX!!! HURRAY!!!!>>>>"<<"\n";
	    cin>>ar[button];
	    GC+=1;
	    update();
	    if(GC>=5){
	    	cout<<"Hehe Gameover buddy!!!";
	    	exit(0);
		}
	    if(button>1||button>=0){
		if((ar[0])==(ar[1])==(ar[2]))
		{
		cout<<"Player wins";
	    }
	    else{
        if(ar[button]==A){
		start();
        }
		cout<<"please only enter your KEY not COMPUTERS!!!!";}
	    }}
        void play(){
	    select();
	    start();
        }
};
int main(){
	game g1;
	g1.play();
}
