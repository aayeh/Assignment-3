#include "pets.h"
//main method
int main()
{
  //creating a new dog and cat
  pet *dog = new pet("Doggo", 8, "Dog", 40);
  pet *cat = new pet("Whiskers", 5, "Cat", 20);

  //calling my output function for both dog and cat
  dog->output();
  cat->output();

  //deleting my dog and cat
  delete dog;
  delete cat;
}
