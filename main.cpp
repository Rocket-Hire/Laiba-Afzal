#include <iostream>



// Question: Check Sum

// You have to write a function which takes an array of integers "seq" and an integer "target". There exist two elements of the array whose sum is equal to the target. You can assume that there exists only one solution. You have to return the indices of those elements
// Example 1: Input = [1,9,2,19]  Target = 3
//Output  = 0,2

//Example 2:Input= [2,4]  Target = 6
//Output =0,1

int* checksum(int *arr, int tar){
  int *output = new int[2];
  for(int i=0; i<sizeof(arr);i++){
    for(int j=i; j<sizeof(arr);j++){
      //tar-arr[i]==arr[j]
      if(arr[i]+arr[j] == tar){
        output[0] = i;
        output[1] = j;
      }
    }
  }
  return output;
}

// {1:0,
// 9:1,
// 2:2
// 19:3}

for(i = start, til end)(
  tar-dic[i].key == arr[j]
)


// Question: 2d to 1d array
 
// Given a function which takes a nxn 2d array, convert it into a 1d array.

// Example 1:

// Input: arr =   
// [0 3 6]
// [1 4 7]
// [2 5 8]

// Output: [0 1 2 3 4 5 6 7 8]

// Example 2:

// Input: arr =   
// [0 2]
// [1 3]
 
// Output: [0 1 2 3]


//input: arr = [0 1 2 3 4 5 6 7 8], n=3
int main() {
  int arr[3][3]=((,3,6),(1,4,7),(2,5,8));
  int* out=new int[3*3];
  int i = 0;
  for(int n = 0; n<3; n++){
    for(int m=0;m<3;m++){
      out[i]=arr[m][n];
      i++;
    }  
  }
}



// Employee      
// Id      Name      Position            Team

// 1      Zahid      Software Engineer    Analytics

// 2      Sara        Manager              Marketing

// 3      Omer        Manager              Analytics


// Inventory

// Id        Item Name          Purchase Date        EmpId

// 1          Dell 451          22 Dec 2022           1

// 2         Lenovo 225        14 Dec 2022             2

// 3        Samsung LED 9004   10 Dec 2022             2

// 4        IPTech mouse 771    2 Jan 2023             2

// 5        Keyboard TF 902     6 Jan 2023             1

// 6        Keyboard YK 882     19 Oct 2022            2

Select Employee.ID,Employee.Name, Employee.Position, Employee.Team, Invertory.ItemName
From Employee leftjoin Invertory ON Employee.Id = Invertory. EmpId