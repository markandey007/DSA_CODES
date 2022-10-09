class Solution {
    int ans=Integer.MAX_VALUE;
    void dfs(int start,int cookies[],int k,int arr[]){
        if(start==cookies.length){
            int max=0;
            for(int i:arr)max=Math.max(max,i);
            ans=Math.min(ans,max);
            return;
        }
        for(int i=0;i<k;i++){
            arr[i]+=cookies[start];
            dfs(start+1,cookies,k,arr);
            arr[i]-=cookies[start];
        }
        
    }
    public int distributeCookies(int[] cookies, int k) {
        int arr[]=new int[k];
        dfs(0,cookies,k,arr);
        return ans;
    }
}
