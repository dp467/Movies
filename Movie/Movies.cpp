//
//  Movies.cpp
//  Movie
//
//  Created by Dhruv Patel on 5/15/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <stdio.h>
#include "Movies.h"


#include <vector>


bool Movies :: add_movie(string name , int watched, string rating){
    for( Movie &movie : mi)
    if (movie.getName() == name){
       return true;
    }
        Movie m23(name , watched , rating);
        m23.set_name(name);
        mi.push_back (m23);
        
    return false;
    }

bool Movies:: increment_movie(string name){
    for( Movie &movie : mi){
    if (movie.getName() == name){
        movie.watched();
        return true;
//        cout << movie.watched() << endl;
        }
       
    
}


return false;

}
    

void Movies :: display(){
    if ( mi.size() == 0 ){
        std:: cout << "No Movies To Display" << std::endl ;
        
    }else{
        for( Movie &movies : mi){
            movies.display();
        }
    }
}
    

    
        

