//
//  Movies.h
//  Movie
//
//  Created by Dhruv Patel on 5/14/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#ifndef Movies_h
#define Movies_h
#include "Movie.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Movies{
public:
    
    vector <Movie> mi;
    
    

    
   
    bool add_movie (string name , int watched, string rating);
    void display ();
    
  bool increment_movie(string name);
    
    
    





      };
#endif /* Movies_h */
