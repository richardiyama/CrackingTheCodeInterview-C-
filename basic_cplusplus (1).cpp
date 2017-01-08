

/////////////////////////////////////////////////////////////////////////////

/* ABOUT THIS TEST - READ CAREFULLY

   Grading: This test is graded based on two parameters:

   1) Correctness - your implementation should follow the
   specification, and answers to the questions below should be right.

   2) Speed - the faster you can do this test, the better

   Timing: You have at most 60 minutes time for this test, after which
   you must send the test back by e-mail. If you do not accomplish
   everything to your satisfaction in that time, you must still submit
   the result in 60 minutes, with what-ever sections you have
   accomplished.

   General: The code below may contain any number of bugs. Part of
   your job is to fix them as you go.

   Tools: You need a working C++ compiler for this test. All normal/modern
   compilers should work - gcc, clang, msvc etc.

   You are allowed to use any on-line/written reference material that
   helps you.

  */

/////////////////////////////////////////////////////////////////////////////
// First Part: Basic C++ and STL.

class Animal
{
public:
  Animal() {}

  virtual void makeNoise() { std::cout << "This animal makes no sound." << std::endl; }
};

/////////////////////////////////////////////////////////////////////////////
// Start here

void animals()
{
  // Using std::vector, create an array integers and fill it with numbers
  // from 0 to 99 and print the numbers to console.


  // Inherit two classes, called Cat and Dog from the Animal class and
  // overload the makeNoise() function in both of them. Make the Cat and Dog print
  // different messages in their makeNoise().


  // Below is a list of Animal objects. Insert one Cat and one Dog object into
  // the end of the list.
  std::list<Animal> listOfAnimals;


  // Iterate over the contents of the list and call makeNoise() for each item.
  // Explain the results.
}

// Here is a simple Goomba class. It just keeps track of how many Goombas are alive.
class Goomba
{
public:
  static int liveGoombas;

  Goomba() { liveGoombas++; };
  ~Goomba() { liveGoombas--; }
};

int Goomba::liveGoombas = 0;

// And a Goomba legion class. Please don't change this class.
class GoombaLegion
{
public:
  void add(Goomba goomba)
  {
    goombas.push_back(goomba);
  }

private:
  std::vector<Goomba> goombas;
};

void goombas()
{
  {
    // Below is a legion of Goombas. Please add 100 Goombas to it. Please don't
    // modify the GoombaLegion class.
    GoombaLegion legion;
  }

  // The legion went out of scope and was destroyed. But how many Goombas are alive?
  // Please explain what happens and then fix the code.
  std::cout << "There are " << Goomba::liveGoombas << " live goombas" << std::endl;
}



int main()
{
  animals();
  goombas();

}
