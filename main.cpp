 #include <iostream>

using namespace std;

int main(){ 
  
  const int NUMS = 5;  
  
  int nums[NUMS] = {16, 54, 7, 43, -5};  
  
  int total = 0, *nPt;  
  
  nPt = nums;    
  
  // store address of nums[0] in nPt  
  
  while (nPt < nums + NUMS)   
    
  total += *nPt++;  
  
 // cout << "The total of the array elements is " << total << endl;  

  int sum = 0;
  for (int i = 0; i <+ 5; i++){
    
    sum += nums[i];
  cout << sum << "  " << endl << endl;

  
    
    }
  
  
  return 0;}

