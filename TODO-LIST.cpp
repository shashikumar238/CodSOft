/*
|=========AUTHOR: SHASHI KUMAR===============|
|=========TOPIC: CPP PROGRAMMING=============|
|=========TITLE:TO DO LIST CONSOLE PROJECT===|
*/
#include<iostream>
#include<string>
#include<fstream>
#include<unistd.h>
using namespace std;
class To_Do_List{
	public:
		string Tasklist[100];
		int no;
		void TaskUpdate(){
			cout<<"\n\t\tEnter Task no To Create::";
			cin>>no;
			cout<<"\n\t\tTask :";
			cin>>Tasklist[no];
			usleep(800000000);
			cout<<"\n\t\tTask updated";
			info();	
		}
		void Taskviewer(){
			if(no<0){
				cout<<"No tasks to view";
			}
			else{
				int i;
				cout<<"Task table:: ......";
					cout<<Tasklist[no];	
				}
			
			info();}
		void Taskdelete(){
			cout<<"enter task no to delete";
			cin<<no;
			
			
		} 
		
		void info(){
			int choice;
			cout<<"\t\t\t\t||===========================||\n";
			cout<<"\t\t\t\t"<<"    "<<"<<<<<<TO DO LIST>>>>>>"<<"\t";
			cout<<"\n\t\t\t\t||===========================||";
			cout<<endl<<"\n\n\t\tThis  is a task notes application hepls in saving tasks & Todos modification";
			cout<<"\n\n\t\t\t\t\t<=====Menu=====>";
			cout<<"\n\n\t\t\t\t\t 1.New Task";
			cout<<"\n\t\t\t\t\t 2.Task viewer";
			cout<<"\n\t\t\t\t\t 3.Delete Task";
			cout<<"\n\n\n\t\t"<<"enter your choice ::";
			cin>>choice;
			if(choice==1){
				TaskUpdate();
			}
			if(choice==2){
				Taskviewer();
			}
			if(choice==3){
				Taskdelete();
			}
		}
		string T1;
	    void function(string T1){
		cout<<"Task :"<<T1;
	}
};
int main(){
	To_Do_List l1;
	l1.info();
	
}



