/*
For this simple address box i will use map container that for contacts which are accessed by key

*/



#include <iostream>
#include <string>
#include <map>
struct Contact {
    
    std::string phone;
    std::string email;
};

void show_menu(void);
void list_contacts(void);
void add_contacts(void);
void delete_one(void);
void delete_all(void);
void search(void);
void close(void);

 std::map<std::string, Contact> contacts;
int list_iterator=0;
std::string finish_task;
int main(){
    int choice;
   
std::cout<<"Welcome to your favorite address book!"<<std::endl;


do{
    std::cout<<"What do you want to do?"<<std::endl;
show_menu();
std::cin>>choice;
while(choice>6 || choice<0){
    std::cout<<"Enter a Valid Choice"<<std::endl;
    std::cin>>choice;

} 

if(choice==1){
    list_iterator++;
list_contacts();
}

else if(choice==2){
    add_contacts();
}

else if(choice==3){
    delete_one();
}
else if(choice==4){
    delete_all();
}
else if(choice==5){
    search();
}

else if(choice==6){
    close();
}
std::cout<<"Did you finish your tasks:"<<std::endl;
std::cin>>finish_task;


}while(finish_task=="NO");

return 0;
}
   
void show_menu(){

std::cout<<"| 1.List         | List all users        "<<std::endl;
std::cout<<"| 2.Add          | Add  an  user         "<<std::endl;
std::cout<<"| 3.Delete       | Deletes an user       "<<std::endl;
std::cout<<"| 4.Delete all   | Removes all users     "<<std::endl;
std::cout<<"| 5.Search       | Search for a user     "<<std::endl;
std::cout<<"| 6.Close        | Close the address book"<<std::endl;
 

}


void list_contacts(void){
if(list_iterator==1){
    std::cout<<"No list found "<<std::endl;
}

// Iterate through the map and print each key-value pair
    for (const auto& pair : contacts) {
        std::cout << "Name: " << pair.first << std::endl;
        std::cout << "Phone: " << pair.second.phone << std::endl;
        std::cout << "Email: " << pair.second.email << std::endl;
        std::cout << "-------------------" << std::endl;
    }

}


void add_contacts(void){
std::string name_added;
std::string phone_added;
std::string email_added;
std::cout<<"Enter the name to be added"<<std::endl;
std::cin>>name_added;
std::cout<<"Enter the phone to be added"<<std::endl;
std::cin>>phone_added;
std::cout<<"Enter the email to be added"<<std::endl;
std::cin>>email_added;
contacts[name_added] = {phone_added,email_added };
}
void delete_one(void){
 std::string phone_deleted;   
std::cout<<"Enter name to be deleted"<<std::endl;
std::cin>>phone_deleted;
contacts.erase(phone_deleted);
}
void delete_all(void){
contacts.clear();
}

void search(void){
 std::string key ;
 std::cout<<"enter key to search for:"<<std::endl;
 std::cin>>key;
    
    auto it = contacts.find(key);

    if (it != contacts.end()) {
        // Key found
        std::cout << key << " found in the map." << std::endl;
    } else {
        // Key not found
        std::cout << key << " not found in the map." << std::endl;
    }
}



void close(void){
    std::cout<<"Thank You"<<std::endl;
exit(0);
}