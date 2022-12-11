#include <iostream>
#include <fstream>

using namespace std;

int findmax(int a, int b, int c, int d, int e){
  int max = a;
  if(b > max){
    max = b;
  }
  if(c > max){
    max = c;
  }
  if(d > max){
    max = d;
  }
  if(e > max){
    max = e;
  }
  return max;
}

int main(){
  ifstream infile;
  ofstream outfile;
  
  infile.open("lab4_input.txt");
  outfile.open("lab4_output.txt");
  
  int n = 0;
  cout << "Please enter the number of lines in the file.";
  cin >> n; //number of lines
  
  int* ar = new int[n]; //dynamically allocate
  int i = 0;
  int a,b,c,d,e;
  while(i < n){
    infile >> a >> b >> c >> d >> e; //read numbers
    ar[i] = findmax(a,b,c,d,e);
    outfile << ar[i] << endl; //print max to file
    i++;
  }
  
  infile.close();
  outfile.close();
  
  return 0;
  
  delete[] ar; //deallocate
}
