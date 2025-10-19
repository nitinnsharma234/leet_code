/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(arr) {
    let row= arr.length;
    let col = arr[0].length;
    let isCol=false;

    for(let i=0;i<row;i++){
        if(arr[i][0]==0){
            isCol=true;
        }
    }

     for(let i=0;i<col;i++){
        if(arr[0][i]==0){
           arr[0][0]=0;
        }
    }
    
    for(let i =1;i<row;i++){
        for(let j=1;j<col;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                arr[0][j]=0;
            }
        }
    }
    for(let i =1;i<row;i++){
        for(let j=1;j<col;j++){
            if(arr[i][0]==0  ){
                arr[i][j]=0;
            }
            if(arr[0][j]==0){
                arr[i][j]=0; 
            }
        }
    }
     if(arr[0][0]==0)
   {  for(let i=0;i<col;i++){
        arr[0][i]=0;
    }}
    
    if(isCol)
  {  for(let i=0;i<row;i++){
       arr[i][0]=0;
    }
    }
   
    
};

// simple n easy hai 
