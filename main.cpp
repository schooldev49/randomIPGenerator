
#include <iostream>
#include <vector> 
#include <cmath>
#include <time.h>
using namespace std;


int getRandom(int start, int end){

vector<int> nums;

   for (int i=start; i<end; i++){
     nums.insert(nums.end(),i);
   } 
   int size = nums.size();
  
   return nums[rand() % end + start];
   
   
}
int main(){
      srand((unsigned int)time(NULL));
  cout << "Number of IPs to fetch: ";
  int numips;
  cin >> numips;
  for (int i=0; i<numips; i++){
  vector<int> totals;
  for (int i=0; i<4; i++){
    int ok = getRandom(10,255);
    totals.insert(totals.end(),ok);
  }
  cout << "IP Obtained: ";
  for (int i=0; i<totals.size(); i++){
    i != 3 ? cout << totals[i] << "." : cout << totals[i] << "\n";
  }
  }
  return 0;
}
