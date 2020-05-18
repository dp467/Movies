//
//  main.cpp
//  Movie
//
//  Created by Dhruv Patel on 5/14/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <iostream>


#include <string>
#include "Movies.h"
#include <vector>
using namespace std;

void add_movie(Movies &movie, string name, int watched , string rating);
void increment_number(Movies &movie , string name);
void display_option();
char input ();
string watched();

   Movies m ;
void add_movie(Movies &movie, string name, int watched , string rating){
    if(movie.add_movie(name, watched, rating)){
        cout << name << " Already Exist"<<endl;
    }else{
        cout<< name   << " added!"<<endl;
    }
}

void increment_number(Movies &movie , string name){
    if(movie.increment_movie(name)){
        cout << name << "'s watched count increased " << endl;
    }else{
        cout << name << " doesn't exist" << endl;
    }
}

void display_option(){
    cout << "A . Add movie to your list " << endl;
    cout << "B . Increment watch count of a movie "<< endl;
    cout << "C . Display all the movies in your list " << endl;
    cout << "Q . Quit "<<endl;
    cout << "    Please enter on of the option : ";
}
char input (){
    char input ;
    cin >> input;
    return toupper(input);
}

void add(){
    string name;
    cout << "Enter name of the movie : ";
    cin >>name ;
    string rating;
    cout << "Enter Rating for the movie (G,PG,PG-13,R, NC-17): ";
    cin >> rating;
    int watch;
    cout << "Enter how many times you watched this movie: " ;
    cin>>watch;
    add_movie(m,name, watch, rating);
    
}

string watched(){
    string name;
    cout << "Enter name of the movie you want increment wacth count: ";
    cin >> name;
    return name;
}






int main(int argc, const char * argv[]) {
    
    
  
    char options{};
    string name{};
    
 
    do{
        display_option();
        options = input();
        switch (options) {
            case 'A':
                add();
                break;
            case 'B':
                name=watched();
                increment_number(m, name);
                break;
            case 'C':
                   m.display();
                break;
                
            default:
                cout << "Thanks " << endl;
                break;
        }
        
    }while (options != 'Q');{
        cout << "Thanks" << endl;
    }
    
//    add_movie(m, "Forzen", 1, "Pg");
//    cout<< "************************"<<endl;
//    add_movie(m, "Forzen", 1, "Pg");
//     cout<< "************************"<<endl;
//     add_movie(m, "Mission Impossible", 1, "Pg-13");
//    cout<< "************************"<<endl;
//
//     m.display();
//
//
//    increment_number(m, "Forzen");
//     m.display();
//    increment_number(m, "Frozen");
//
//
//    m.display();
    return 0;
}

