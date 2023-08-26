var sortedSquares = function(nums) {
    let i=0, j=nums.length-1, out=[]
    while(true){
        a = nums[i] * nums[i]
        b = nums[j] * nums[j]
        if(i == j){
            out.unshift(a)
            break
        }
        if(a < b){
            out.unshift(b)
            j--
        } else {
            out.unshift(a)
            i++
        }
    }
    return out
}