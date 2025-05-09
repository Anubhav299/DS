#include <iostream>
using namespace std;

/////////////////////////// optimal (a bit) /////////////////////////////////
int getMoves(int x, int y, int k) {
  // track our position
  int currX = 0, currY = 0;

  // reach the optimal position first
  int numOfSteps = ((min(x, y))/k);  
  currX = numOfSteps * k;
  currY = currX;

  numOfSteps *= 2;

  int remainingX = x - currX, remainingY = y - currY;

  // move one step maually if we haven't reached any of the grid yet
  if (remainingX != 0 and remainingY != 0) {
    currX = currX + min(remainingX, k);
    currY = currY + min(remainingY, k);
    numOfSteps += 2;
  }

  if (remainingX == 0 and remainingY == 0) return numOfSteps;

  // after moving one step in both directions, we are facing x
  // check if we are in the right direction
  if (currX == x) {
    // move in y
    remainingY = y - currY;
    int extraSteps = (remainingY)/k;
    currY += (extraSteps) * k;

    // change direction and move only in y
    numOfSteps += (extraSteps * 2) + 1;

    if (remainingY % k) numOfSteps += 1;
    else numOfSteps -= 1;
  } else {
    // move in x
    remainingX = x - currX;
    int extraSteps = (remainingX)/k;
    currX += (extraSteps) * k;
    numOfSteps += (extraSteps) * 2;

    // if we still haven't reached x
    if (remainingX % k) numOfSteps += 1;
    else numOfSteps -= 1;
  }

  return numOfSteps;
}

int main(int argc, char* argv[]) {
  int t;
  cin >> t;

  while (t--) {
    int x, y, k;
    cin >> x >> y >> k;
      
    cout << getMoves(x, y, k) << endl;
  }

  return 0;
}