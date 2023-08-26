#include <stdio.h>
#include <stdbool.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i=0, j=0, store=-1;
    float value = 0;
    bool iFlag = false, jFlag = false, evenStore = false;
    int totalSize = nums1Size + nums2Size;
    bool even = totalSize%2 == 0;
    int median = even ? (totalSize / 2) - 1 : totalSize / 2;
    if(nums1Size == 0 && median == 0) return nums2[0];
    if(nums2Size == 0 && median == 0) return nums1[0];
    while(i+j <= median){
        if(i+j == median && even && store != -1){
            store = value;
            median++;
            evenStore = true;
        }
        if(i >= nums1Size){
            iFlag = true;
            break;
        } else if(j >= nums2Size){
            jFlag = true; 
            break;
        } else {
            if(nums1[i] < nums2[j]){
                value = nums1[i];
                i++;
            } else {
                value = nums2[j];
                j++;
            }
        }
        printf("%d\n", value);
    }
    if(iFlag || jFlag){
        if(iFlag){
            if(j==0){
                return (nums1[nums1Size - 1] + nums2[0]) / 2.0;
            } else {
                return even ?
                    (nums2[median - i + j + j - 1] + nums2[median - i + j + j]) / 2.0
                    : nums2[median - i + j + j];
            }
            // return nums2[median - i + j + j];
        } else {
            if(i==0){
                return (nums2[nums2Size - 1] + nums1[0]) / 2.0;
            } else {
                return even ? 
                    (nums1[median - i + j + i - 1] + nums1[median - i + j + i]) / 2.0
                    : nums1[median - i + j + i];
            }
            // return nums1[median - i + j + i];
        }
    } else {
        return evenStore ? (store+value)/2.0 : value;
    }
}
void main(){
    int nums1[] = {1, 3};
    int nums2[] = {2, 7};
    int out = findMedianSortedArrays(nums1, 2, nums2, 2);
    printf("result is : %d\n", out);
}