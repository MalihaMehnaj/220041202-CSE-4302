#include<iostream>
using namespace std;

class Counter
{
private:
  int currentCount = 0;
  int incrementStep = 0;

public:
  void setIncrementStep(int incrementstep)
  {
    incrementStep = incrementstep;
  }

  int getCount()
  {
    return currentCount;
  }

  void increment()
  {
    if(incrementStep > 0)
      currentCount += incrementStep;
  }

  void reset()
    {
      currentCount = 0;
    }
};

int main()
{
    Counter counting1;
    counting1.setIncrementStep(2);
    counting1.increment();
    cout << counting1.getCount() << endl;
    counting1.reset();
    cout << counting1.getCount() << endl;
}
