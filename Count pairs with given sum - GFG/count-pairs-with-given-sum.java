//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

public class GFG {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int k = Integer.parseInt(inputLine[1]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }
            int ans = new Solution().getPairsCount(arr, n, k);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    int getPairsCount(int[] arr, int n, int k) {
        // code here
        Map<Integer,Integer> mp = new HashMap<Integer,Integer>();
        
        for(int i=0;i<n;i++)
        {
            if(mp.containsKey(arr[i])==false)
            {
                mp.put(arr[i],1);
            }
            else
              mp.put(arr[i],mp.get(arr[i])+1);    
        }
        
        int ans=0;
        for(Map.Entry<Integer, Integer> x:mp.entrySet())
        {
            int val1 = x.getKey();
            int c1 = x.getValue();
            
            int val2 = k-val1;
            
            if(mp.containsKey(val2)==false)
              continue;
              
            int c2 = mp.get(val2);
            if(val1==val2)
            {
                ans+= (c1*(c1-1))/2;
            }
            else
            {
             ans+= c1*c2;
             mp.put(val2,0);
             
            }
            
        }
    return ans;    
    }
}
