#include <iostream>
using namespace std;
int main(){
     while(true){
        cout<<"-----Library System----\n";
        cout<<"1. add book\n";
        cout<<"2. view book\n";
        cout<<"3. borrow book\n";
        cout<<"4. issue book\n";
        cout<<"5. exit\n";
        cout<<endl;
        int choice = 0;
        cout<<"enter choice (1 -5): ";
        cin>>choice;
        string bookname = "none";

        if(choice == 1){
            cout<<"enter book name: ";
            cin>>bookname;
            cout<<"you added a book: "<<bookname<<endl;
        }
        else if(choice == 2){
            cout<<bookname<<endl;
        }
        else if(choice == 3){
             cout<<"enter book name: ";
            cin>>bookname;
            cout<<"you borrowed a book: "<<bookname<<endl;
        }
          else if(choice == 4){
             cout<<"enter book name: ";
            cin>>bookname;
            cout<<"you issued a book: "<<bookname<<endl;
        }
        else{
            cout<<"exiting. goodbye!"<<endl;
            break;
        }
        
        
     }

return 0;
}

    