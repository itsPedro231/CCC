#include <iostream>
#include <string>
using namespace std;

void junior1() {
  int b, p;
  
  cout << "B: ";
  cin >> b;

  p = (5 * b) - 400;
  cout << p << "kPa\n";
  if (b == 100){
    cout << 0;
  }else if (b < 100){
    cout << 1;
  }else{
    cout << -1;
  } 
}

void junior2(){
  int x;
  
  cout << "number of bids: ";
  cin >> x;

  string bids[x+1][2];
  string splittedBids[x][2];
  
  for (int y = 0; y < x; y++){
    cout << "name " << y+1 << ": ";
    cin >> splittedBids[y][0];
    cout << "bid " << y+1 << ": ";
    cin >> splittedBids[y][1];
    
  }
  string highestScore;
  int transfInt, highestValue = -1;

  for (int y = 0; y < x; y++){
    transfInt = stoi(splittedBids[y][1]);
    if (transfInt > highestValue){
      highestValue = transfInt;
    }
  }
  string stringValue = to_string(highestValue);
  for (int y = 0; y < x; y++){
    
    if (stoi(splittedBids[y][1]) == stoi(stringValue)){
      cout << splittedBids[y][0];
    }
  }
}
void junior3(){
  string n1, n2, direction, lastDirection = " ";
  int lines, x = 1;
  string code, rest, stepsList;
  
  while (code != "99999"){
    cout << "code " << x++ << ": ";
    cin >> code;

    n1 = code[0];
    n2 = code[1];
    
    if ((stoi(n1) + stoi(n2)) == 0){
      direction = lastDirection;
    }else if ((stoi(n1) + stoi(n2)) % 2 == 0){
      direction = "right";
      lastDirection = "right";
    }else{
      direction = "left";
      lastDirection = "left";
    }
    if (code != "99999"){
      rest += direction + " " + code.substr(2, code.length()) + "\n";
    } 
     
  }
  cout << rest;
}

      
int main() {
  int x;
  cout << "1 - Junior 1\n2 - Junior 2\n3 - Junior 3\n4 - Senior 1\n>> ";
  cin >> x;
  if (x == 1){
    junior1();
  }else if(x == 2){
    junior2();
  }else if (x == 3){
    junior3();
  
}
