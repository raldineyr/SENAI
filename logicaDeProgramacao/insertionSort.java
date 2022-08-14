class Main {
  public static void main(String[] args) {

    int[] nums = new int[]{5,2,3,1,4,7,9,6,8,0};

    for(int count = 1; count < nums.length ; ++count){
            
    int underAnalysis = count;
            
    while( underAnalysis > 0 && nums[underAnalysis] < nums[underAnalysis -1]){
                
    int analyzedNumber = nums[underAnalysis];
    int predecessorNumber = nums[underAnalysis -1];
                
    nums[underAnalysis] = predecessorNumber;
    nums[underAnalysis -1] = analyzedNumber;   
      underAnalysis --;
                
    }
  }
    System.out.print("["+ nums[0]);
    for(int count = 1; count < nums.length ; count++){
            System.out.print(","+nums[count]);
    }
    System.out.println("]");
  }
}
