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

void iLoveC()
{
  std::cout << "I love C++";
}

int sizeOf()
{
  unsigned short int Width = 5, Length;
  Length = 10;

  //Create an unsigned short and init width

  unsigned short int Area = Width * Length;
  std::cout<< "Width:"<< Width<< "\n";
  std::cout<<"Length:"<<Length<<"\n";
  std::cout<<"Area:"<< Area<<"\n";
  return 0;
}

int vacation ()
{
  enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
  Days DayOff;

  int x;
  std::cout << "What day would you like off?";
  std::cin>> x;

  DayOff = Days(x);

  if (DayOff == Sunday || DayOff == Saturday)
      std::cout<< "\n You're already off on the weekend!";
  else
      std::cout <<"\n Okay! You got the day off";

  return 0; 
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
