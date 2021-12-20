/***********************
* Author: Tagirov A.I. * 
* Date:   25.11.21     *
* Name:   Lab function *
***********************/
#include <iostream>
using namespace std;

int sumNegativeNums (int sum, int firstNum, int lastNum, int arr[]) {
  int count = firstNum;
  do {
    if (arr[count] < 0) {
      sum = sum + arr[count];
    }
  ++count;
  }
  while (count <= lastNum);
  return sum;
}

int main() {
  int sizeOfFirstArr, sizeOfSecArr;
  int beginOfInterval, endOfInterval;
  int firstSum, secSum;
  
  cout << "������� ������� ������� � ������� ��������" << endl;
  cin >> sizeOfFirstArr >> sizeOfSecArr;
  
  cout << "������� ������ � ��������� ����� ��������� " << endl;
  cin >> beginOfInterval >> endOfInterval;
  
  int firstArr[sizeOfFirstArr];
  int secArr[sizeOfSecArr];
  
  cout << "������� �������� ������� �������" << endl;
  for (int num = 0; num < sizeOfFirstArr; ++num) {
    cin >> firstArr[num];
  }
  
  cout << "������� �������� ������� �������" << endl;
  for (int num = 0; num < sizeOfSecArr; ++num) {
    cin >> secArr[num];
  }
  
  firstSum = sumNegativeNums (0, beginOfInterval, endOfInterval, firstArr);
  secSum = sumNegativeNums (0, beginOfInterval, endOfInterval, secArr);
  
  cout << firstSum << " and " << secSum << endl;
  
  return 0;
}

