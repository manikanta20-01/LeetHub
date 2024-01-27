//{ Driver Code Starts
//Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();
});

function readLine() {
    return inputString[currentLine++];
}

function printList(res,n){
    let s="";
    for(let i=0;i<n;i++){
        s+=res[i];
        s+=" ";
    }
    console.log(s);
}


function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let n = parseInt(readLine());
        let arr = new Array(n);
        let input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++){
            arr[i] = input_ar1[i];
        }
        let brr = new Array(n);
        input_ar1 = readLine().split(' ').map(x=>parseInt(x));
        for(let i=0;i<n;i++){
            brr[i] = input_ar1[i];
        }
        let obj = new Solution();
        let res = obj.findMidSum(arr, brr, n);
        console.log(res);
    }
}// } Driver Code Ends




// } Driver Code Ends


//User function Template for javascript

/**
 * @param {number[]} ar1
 * @param {number[]} ar2
 * @param {number} n
 * @returns {number}
*/

class Solution{
    findMidSum(ar1, ar2 ,n){
        //code here
        let ans = [];
        let i = 0,j = 0;
        
        while(i < n && j < n)
        {
             if(ar1[i] == ar2[j])
            {
                ans.push(ar1[i]);
                ans.push(ar2[j]);
                i++;
                j++;
            }
            else if(ar1[i] < ar2[j])
            {
                ans.push(ar1[i]);
                i++;
                
            }
            else{
                ans.push(ar2[j]);
                j++;
            }
            
        }
        // reamining 
        
        while(i < n)
        {
            ans.push(ar1[i]);
            i++;
        }
        while(j < n)
        {
            ans.push(ar2[j]);
            j++;
            
        }
        // calculate sum
        let mid = Math.floor(ans.length / 2);
        let midSum = ans[mid - 1] + ans[mid];
        return midSum;
           
            
        
            
            
            
        
    }
}

