// Problem 1 - Multiples of 3 or 5 Sum 

/* 
Find The Sum OF All Natural Numbers Below 1000 that Are Multiples of 3 or 5
The Maximum Number Is  999 
*/

function FindMultiplesOf3Or5Sum(){
    let TotalSum = 0;
    const MaxLimit = 1000;
    for(let CurrentNumber = 1; CurrentNumber < MaxLimit; CurrentNumber++){
        if(CurrentNumber % 3 === 0 || CurrentNumber % 5 === 0){
            TotalSum += CurrentNumber;
        }
    }
    console.log("The Sum Of All Natural Numbers Below 1000 that Are Multiples of 3 or 5 is:" + " " + TotalSum);
    return TotalSum;
}

FindMultiplesOf3Or5Sum();