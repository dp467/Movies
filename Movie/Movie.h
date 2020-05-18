//
//  Movie.h
//  Movie
//
//  Created by Dhruv Patel on 5/14/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#ifndef Movie_h
#define Movie_h

#include <iostream>
#include <string>
using namespace std;

class Movie{
private:
     
    string movieName;
    int noWatched;
    string rating;

public:
    Movie(){
        movieName = "";
        noWatched = 0;
        rating = "";
    }
    
    Movie(string name , int watched , string rate){
        movieName = name;
        noWatched = watched;
        rating = rate;
    }
    
    string set_name(string name){
        movieName = name;
        return name;
    }
    
    string getName(){
        return movieName;
    }
    
    int watched (){
        return noWatched++;
    }
    
    string rate(){
        return rating;
    }
    void display(){
        cout << movieName << "," << noWatched << "," << rating << " "  << endl;
      
    }
    
};
    



#endif /* Movie_h */
