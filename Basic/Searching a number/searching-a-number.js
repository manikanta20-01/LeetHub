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

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for(;i<t;i++)
    {
        let input_line =  readLine().split(' ').map(x=>parseInt(x));
        let n = input_line[0];
        let k = input_line[1];
        let arr = readLine().split(' ').map(x=>parseInt(x));
        let obj = new Solution();
        console.log(obj.search(arr, n, k));
    }
}

// } Driver Code Ends


//User function Template for javascript
/**
 * @param {number[]} arr
 * @param {number} n
 * @param {number} k
 * @return {integer}
 */
class Solution {
    search(arr, n, k) {
        // code here
        for(let i = 0;i < n;i++)
        {
            if(arr[i] == k)
            {
                return i + 1;
            }
        }
        return -1;
    }
}