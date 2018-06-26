#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <array>
#include <cmath>
#include <random>
#include <climits>
#include <time.h>
using namespace std;
using lint=long long;

bool isprim(lint n){
  if(n%2==0 or n%3==0 or n%5==0 or n%7==0) return false;
  for(lint i=11;i<=sqrt(n);i+=2){
    if(i%3==0 or i%5==0 or i%7==0) continue;
    else if(n%i==0) return false;
  }
  return true;
}

int main(){
  int time=clock();
  cin.tie(0);
  ios::sync_with_stdio(false);
  lint n;
  cin>>n;
  cout<<((isprim(n))? "Yes":"No")<<clock()-time<<endl;
  return 0;
}
