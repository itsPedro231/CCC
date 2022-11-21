#include <iostream>
#include <string>
#include <vector>

int x;

void junior1() {
  int r, s, cupcakes;
  
  std::cout << "Number of regular boxes: ";
  std::cin >> r;
  std::cout << "Number of small boxes: ";
  std::cin >> s;
  
  cupcakes = ((r * 8) + (s * 3) - 28);
  
  std::cout << cupcakes;
}

void junior2() {
  int players;
  
  std::cout << "number of players: ";
  std::cin >> players;

  int info[players * 2][2];  
  int finalScore[players];
  
  for (int x = 1; x < players + 1; x++){
    std::string s1 = "player " + std::to_string(x) + ", points scored: ";
    std::string s2 = "player " + std::to_string(x) + ", fouls committed: ";
    std::cout << s1;
    std::cin >> info[x-1][0];

    std::cout << s2;
    std::cin >> info[x-1][1];
  }
  for (int x = 0; x < players; x++){
    info[x][0] = info[x][0] * 5;
    info[x][1] = info[x][1] * 3;
    finalScore[x] = info[x][0] - info[x][1];

  }
  int counter = 0;
  for (int x = 0; x < players; x++){
    if (finalScore[x] > 40){
      counter += 1;
    }
  }
  std::cout << "\n";

  if (counter == players){
    std::string output = std::to_string(counter) + "+";
    std::cout << output;
  }else{ 
    std::cout << counter;
    }
  
}

void junior3() {
  std::string inst;
  int pos = 0, count = 0;
  bool flag = true;
  
  std::cout << "instructions: ";
  std::cin >> inst;
  
  for (int x = 0; x < inst.length(); x++){
      if (inst[x] == '+' || inst[x] == '-'){
        count += 1;
      } 
    }
  std::string arr[count];

  for(int x = 0; x < inst.length(); x++){
    if (inst[x] == '+' || inst[x] == '-'){
      arr[pos] = inst.substr(0, x+2);
      inst.erase(0, x+2);
      x = 0;
      
      pos += 1;
    }
  }
  
  for (int x = 0; x < (sizeof(arr)/sizeof(std::string)); x++){
    for (int y = 0; y < arr[x].length(); y++){
      if (arr[x][y] == '+'){
        std::cout << "\n" << arr[x].substr(0, y) << " tighten " << arr[x][y+1];  
      }
      if (arr[x][y] == '-'){
        std::cout << "\n" << arr[x].substr(0, y) << " loosen " << arr[x][y+1];  
      }
    }
  }
}

void junior4() {
  int x, z, g;
  std::cout << "x: ";
  std::cin >> x;
  std::string namesX[x+1];
  
  for (int y = 0; y < x+1; y++){
    std::getline(std::cin, namesX[y]);
    if (y < x){
      std::cout << ">> ";
    }
  }  
  std::cout << "y: ";
  std::cin >> z;
  std::string namesY[z];

  for (int y = 0; y < z+1; y++){
    std::getline(std::cin, namesY[y]);
    if (y < z){
      std::cout << ">> ";
    }  
  }
  std::cout << "g: ";
  std::cin >> g;
  std::string namesG[g];
  for (int y = 0; y < g+1; y++){
    std::getline(std::cin, namesG[y]);
    if (y < g){
      std::cout << ">> ";
    }
  }
}
void junior5() {
  int n, t, r, c, counter = 0, high = -1;
  std::cout << "N: ";
  std::cin >> n;
  std::cout << "T: ";
  std::cin >> t;
  std::string a[n][n];
  int test[n][n];
  
  for (int x = 0; x < t; x++){
    std::cout << ">> ";
    std::cin >> r;
    std::cin >> c;
    r = r-1;
    c = c-1;
    a[r][c] = "X";
  }
  for (int x = 0; x < n; x++){
    for (int y = 0; y < n; y++){
      if (a[x][y] != "X"){
        a[x][y] = "1";
      }
    }
  }  
  for (int x = 0; x < n; x++){
    for (int y = 0; y < n; y++){
      std::cout << a[x][y] << ' ';
    }
    std::cout << "\n";
  }    
  // for (int x = 0; x < n; x++){
  //   for (int y = 0; y < n; y++){
      // if (a[x][y] == "X"){
        // for(int z = 0; z < n; z++){
        //   a[z][y] = "0";
        //   a[x][z] = "0";
          
        // } 
        
      // }
  //   }
  // }
  
  // for (int x = 0; x < n; x++){
  //   for (int y = 0; y < n; y++){
  //     std::cout << a[x][y] << " ";
  //   }
  //   std::cout << "\n";
  // }
  for (int x = 0; x < n; x++){
    for (int y = 0; y < n; y++){
      if (a[x][y] == "x"){
        
      
      }
    }
  }
    
}

    

int main() {
  std::cout << "1 - junior 1 \n2 - junior 2 \n3 - junior 3 \n4 - junior 4\n5 - juionr 5\n>> ";
  std::cin >> x;
  if (x == 1){
    junior1();
  }else if (x == 2){
    junior2(); 
  }else if (x == 3){
    junior3();
  }else if (x == 4){
    junior4();
  }else if (x == 5){
    junior5();  
  }
}
