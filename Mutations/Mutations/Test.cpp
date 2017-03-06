//
//  Test.cpp
//  Mutations
//
//  Created by Rachel Stewart on 3/5/17.
//  Copyright © 2017 Rachel Stewart. All rights reserved.
//

#include "Test.hpp"
#include <iostream>

int Add(int x, int y)
{
    std::cout<< "In Add(), recieved"<<x<<" and "<<y<<"\n";
    return (x+y);
    
}

int main2 ()
{
  //function demonstration
  std::cout<< "I'm in main2 ()! \n ";
  int a, b, c;
  std::cout<< "Enter two numbers: ";
  std::cin>>a;
  std::cin>>b;
    std::cout<<"\nCalling Add()\n";
  c = Add(a,b);
  std::cout<< "\n Back in Main() \n";
  std:: cout<< "c was set to " << c;
  std:: cout<< "\nExiting...\n\n";
  return 0;

}


