#include<iostream>
using namespace std;        
int main(){
	bool book1 = true;
    bool book2 = true;
    bool book3 = true;
    bool book4 = true;
    bool book5 = true;
    int choice =  0 ;
    while(choice!=6){
	cout<<"         LIBRARY MANAGEMENT           "<<endl;
    cout<<endl;
    cout<<" 1.  C++ Programming"<<endl;
    cout<<" 2.  Python Programming "<<endl;
    cout<<" 3. Computer Science "<<endl;
    cout<<" 4.  English Grammar   "<<endl;
    cout<<" 5. Mathematics           "<<endl;
    cout<<" 6.     Exit    "<<endl;
    cout<<endl;
    cout<<"Please enter your choice (1-6)"<<endl;
    cin>>choice;
    if(choice<1 || choice>6)
    cout<<"Invalid choice "<<endl;
    else if(choice==1){
    	if(book1==true){
    	cout<<" C++ Programming Book is available "<<endl;
    	book1=false;
    }
    	else
    	cout<<"C++ Programming Book is not available "<<endl;
	}
    
    else if(choice==2){
    	if(book2==true){
    	cout<<"Python Programming Book is available "<<endl;
    	 book2=false;
    }
    	else
    	cout<<"Python Programming Book is not available "<<endl;
	}
    else if(choice==3){
    	if(book3==true){
    	cout<<"Computer Science Book is available "<<endl;
    	book3=false;
    }
    	else
    	cout<<"Computer Science Book is not available "<<endl;
	}
	else if(choice==4){
		if(book4==true){
    	cout<<"English Grammar book  is available "<<endl;
    	book4=false;
        }
    	else
    	cout<<"English Grammar Book is not available "<<endl;
	}
	else if(choice==5){
		if(book5==true){
    	cout<<" Mathematics  Book is available "<<endl;
    	 book5=false;
    }
    	else
    	cout<<" Mathematics  Book is not available "<<endl;
	}
	        }
	    return 0;
}
