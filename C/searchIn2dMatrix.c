#include <stdio.h>
#include <stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    bool bs(int* matrix, int target, int colSize){
        int startPointer=0, endPointer = colSize-1, middlePointer=0;
        while(startPointer <= endPointer){
            middlePointer = (startPointer + endPointer) / 2;
            if(matrix[middlePointer] == target) return true;
            else if(matrix[middlePointer] > target){
                endPointer = middlePointer;
            } else {
                startPointer = middlePointer;
            }
        }
        return false;
    }
    for(int i=0; i<matrixSize; i++){
        if(matrix[i][0] <= target && target <= matrix[i][matrixColSize[i]])
            return bs(matrix[i], target, matrixColSize[i]);
    }
    return false;
}
void main(){
    int matrix[3][4] = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int size = 3;
    int sizeArr[4] = {4, 4, 4, 4};
    int search = 13;
    int out = searchMatrix(matrix, size, sizeArr, search);   
    printf("result is : %d", out);
}
// bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
//     bool bs(int* matrix, int target, int colSize){
//         int startPointer=0, endPointer = colSize-1, middlePointer=0;
//         while(startPointer <= endPointer){
//             if(startPointer == endPointer){
//                 if(matrix[startPointer] == target){
//                     return true;
//                 } else {
//                     return false;
//                 }
//             } 
//             middlePointer = (startPointer + endPointer)+1 / 2;
//             if(matrix[middlePointer] == target) return true;
//             else if(matrix[middlePointer] > target){
//                 endPointer = middlePointer-1;
//             } else {
//                 startPointer = middlePointer+1;
//             }
//         }
//         return false;
//     }
//     for(int i=0; i<matrixSize; i++){
//         if(matrix[i][0] <= target && target <= matrix[i][matrixColSize[i]])
//             return bs(matrix[i], target, matrixColSize[i]);
//     }
//     return false;
// }