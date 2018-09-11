//Author:Samual Morales
#include<iostream>

int main()
{
  //declare variables here
  int first;
  int second;
  
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin >> first;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin >> second;
  //determine if first or second is bigger and store that in a third variable


  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
  if ( first > second )
  {
      std:: cout << first << std::endl;
  }
  if (second > first)
  {
     std:: cout << second << std::endl;
  }
  if (first == second)
  {
   std:: cout << "They are equal" << std::endl;
   std::cout<<std::endl<<"Thank you for playing.\n";
  } 
  return 0;
}
