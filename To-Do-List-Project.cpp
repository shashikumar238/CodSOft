/*
|=========AUTHOR: SHASHI KUMAR===============|
|=========TOPIC: CPP PROGRAMMING=============|
|=========TITLE:TO DO LIST CONSOLE PROJECT===|
*/
#include<iostream>
#include<cstdio>
#include<string>
#include<fstream>
#include<unistd.h>
#include<bits/stdc++.h>
#include<map>
using namespace std;
map<int,string> description;
map <int,string> :: iterator iter;
unsigned int b=1000000000; 
class To_Do_List{
	public:
		int no;
		void TaskMark(){
			for(iter=description.begin();iter!=description.end();iter++){
                  cout<<"\t\t\t"<<(*iter).first<<" "<<(*iter).second<<"\n";
			    }
			string y;
			cout<<"/n"<<"Enter task no to mark as read";
			cin>>no;
			y="Task completed";
			description[no]=description[no]+"["+y+"]";
			Taskviewer();}
		void TaskUpdate(){
			cout<<"\n\t\tEnter Task no To Create::";
			cin>>no;
			cout<<"\n\t\tTask :";
			fflush(stdin);
			getline(cin,description[no]);
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
				
				cout<<"\n\t\t\t"<<"DISPLAYING TASKS LIST......"<<"\n\n";
				usleep(b);
				for(iter=description.begin();iter!=description.end();iter++){
                  cout<<"\t\t\t"<<(*iter).first<<" "<<(*iter).second<<"\n";
			    }
				}
			
			info();}
		void Taskdelete(){
			cout<<"enter task no to delete";
			cin>>no;
		     iter=description.find(no);
			 if(iter != description.end())
    {
        description.erase(iter);
        cout<<"TASK Removed"<<std::endl;
        info();
    }
			
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
			cout<<"\n\t\t\t\t\t 4.Mark as read";
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
			if(choice==4){
				TaskMark();
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




