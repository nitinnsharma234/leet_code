function searchMatrix(matrix: number[][], target: number): boolean {

    let m : number =matrix.length;
    let n : number  = matrix[0].length;

    let i : number =0;
    let j: number =n-1; 
    while(i<m && j<n){
        if(matrix[i][j]== target) return true;
        if( matrix[i][j]>target) j=j-1;
        else {i=i+1;}
    }
    return false;
};